//使用するヘッダーファイル
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"

#include"GameHead.h"
#include"ObjAttackEnemy.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjAttackEnemy::Init()
{
	m_x = 550.0f;//位置初期化
	m_y = 300.0f;
	m_vx = 0.0f;
	m_vy = 0.0f;
	m_time = 0.0f;

	//当たり判定用HitBoxを作成
	Hits::SetHitBox(this, m_x, m_y, 82, 82, ELEMENT_ENEMY, OBJ_ATTACK_ENEMY, 1);
}

//アクション
void CObjAttackEnemy::Action()
{

	m_time++;//1加算

	if (m_time > 50)
	{
		//弾丸敵機オブジェクト
		CObjBulletEnemy* obj_bullte_enemy = new CObjBulletEnemy(m_x,m_y);
		Objs::InsertObj(obj_bullte_enemy, OBJ_BULLET_ENEMY, 1);
	}



	//HitBoxの内容を更新
	CHitBox* hit = Hits::GetHitBox(this);
	hit->SetPos(m_x, m_y);

	//弾丸と接触してるかどうか調べる
	if (hit->CheckObjNameHit(OBJ_BULLET) != nullptr)
	{
		this->SetStatus(false);
		Hits::DeleteHitBox(this);
	}
}

//ドロー
void CObjAttackEnemy::Draw()
{
	//描画カラー情報　R=RED G=Green B=Blue A=alpha(透過情報)
	float c[4] = { 0.5f,2.5f,1.5f,1.0f };

	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先表示位置

	//切り取り位置の設定
	src.m_top = 0.0f; //y
	src.m_left = 0.0f; //x
	src.m_right = 139.0f; //x
	src.m_bottom = 131.0f; //y

	//表示位置の設定
	dst.m_top = 0.0f + m_y;
	dst.m_left = 32.0f + 50.0f + m_x;
	dst.m_right = 0.0f + m_x;
	dst.m_bottom = 32.0f + 50.0f + m_y; 

	//0番目に登録したグラフィックをstc・dst・cの情報を元に描画
	Draw::Draw(1, &src, &dst, c, 0.0f);
}