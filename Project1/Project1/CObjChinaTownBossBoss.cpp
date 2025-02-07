//使用するヘッダーファイル
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"

#include"GameHead.h"
#include"CObjChinaTownBossBoss.h"
#include"UtilityModule.h"

//使用するネームスペース
using namespace GameL;

//コンストラクタ
CObjChinaTownBossBoss::CObjChinaTownBossBoss(float x, float y)
{
	m_x = x;
	m_y = y;
}


//イニシャライズ
void CObjChinaTownBossBoss::Init()
{
	m_vx = 0.0f;
	m_vy = 0.0f;
	m_time = 0;
	m_timeboss = 0;
	m_hp = 18;


	//当たり判定用HitBoxを作成
	Hits::SetHitBox(this, m_x, m_y, 464, 464, ELEMENT_ENEMY, OBJ_CHINA_TOWN_BOSS_BOSS, 1);
}

//アクション
void CObjChinaTownBossBoss::Action()
{
	//チャイナタウンボス戦フィールドの情報
	CObjChinaTownBoss* chinatownboss = (CObjChinaTownBoss*)Objs::GetObj(OBJ_CHINA_TOWN_BOSS);


	m_timeboss++;
	if (m_timeboss > 100)
	{
		m_timeboss = 0;

		//19発動時発射
		CObjAngleBullet* obj_b;
		for (int i = 0; i < 360; i += 20)
		{
			//角度iで角度弾丸発射
			obj_b = new CObjAngleBullet(m_x, m_y, i, 5.0f);
			Objs::InsertObj(obj_b, OBJ_ANGLE_BULLET, 4);
		}
	}


	//移動方向
	m_vx = 0.0f;
	m_vy = 0.0f;

	//移動ベクトルの正規化
	UnitVec(&m_vy, &m_vx);

	//速度を付ける。
	m_vx *= 1.5f;
	m_vy *= 1.5f;

	//移動ベクトルを座標に加算する
	m_x += m_vx;
	m_y += m_vy;

	//HitBoxの内容を更新
	CHitBox* hit = Hits::GetHitBox(this);

	hit->SetPos(m_x + chinatownboss->GetScroll(), m_y + chinatownboss->GetScroll2());


	//ホーミング敵機が完全に領域外に出たら敵機を破棄する
	bool check = CheckWindow(m_x, m_y, -32.0f, -32.0f, 3072.0f, 2752.0f);
	if (check == false)
	{
		this->SetStatus(false);//自身に削除命令
		Hits::DeleteHitBox(this);

		return;
	}

	//弾丸と接触してるかどうか調べる
	if (hit->CheckObjNameHit(OBJ_BULLET) != nullptr)
	{

		m_hp -= 1;
	}
	if (m_hp < 0)//HPが０になったら破棄
	{
		this->SetStatus(false);
		Hits::DeleteHitBox(this);
		Sleep(400);
	}
}

//ドロー
void CObjChinaTownBossBoss::Draw()
{
	//チャイナタウンボス戦フィールドの情報
	CObjChinaTownBoss* chinatownboss = (CObjChinaTownBoss*)Objs::GetObj(OBJ_CHINA_TOWN_BOSS);

	//描画カラー情報　R=RED G=Green B=Blue A=alpha(透過情報)
	float c[4] = { 4.0f,3.0f,3.0f,1.0f };

	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先表示位置

	//切り取り位置の設定
	src.m_top = 0.0f; //y
	src.m_left = 0.0f; //x
	src.m_right = 131.0f; //x
	src.m_bottom = 139.0f; //y

	dst.m_top = 0.0f + m_y + chinatownboss->GetScroll2();
	dst.m_left = 32.0f + 500.0f + m_x + chinatownboss->GetScroll();
	dst.m_right = 0.0f + m_x + chinatownboss->GetScroll();
	dst.m_bottom = 32.0f + 500.0f + m_y + chinatownboss->GetScroll2();

	//0番目に登録したグラフィックをstc・dst・cの情報を元に描画
	Draw::Draw(1, &src, &dst, c, 0.0f);
}