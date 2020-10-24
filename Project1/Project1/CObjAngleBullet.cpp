//使用するヘッダーファイル
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameHead.h"
#include"CObjAngleBullet.h"
#include"UtilityModule.h"

//使用するネームスペース
using namespace GameL;

//コンストラクタ
CObjAngleBullet::CObjAngleBullet(float x, float y,float r,float speed)//コンストラクタで受け取った情報を変数に送る
{
	m_x = x;
	m_y = y;
	m_r = r;
	m_speed = speed;
}

//イニシャライズ
void CObjAngleBullet::Init()
{

	m_vx = cos(3.14f / 180.0f * m_r);
	m_vy = sin(3.14f / 180.0f * m_r);

	//当たり判定用HitBoxを作成
	Hits::SetHitBox(this, m_x, m_y, 32, 32, ELEMENT_ENEMY, OBJ_ANGLE_BULLET, 1);
}

//アクション
void CObjAngleBullet::Action()
{
	//移動
	m_x += m_vx * m_speed;
	m_y -= m_vy * m_speed;

	//弾丸のHitBox更新用ポインター取得
	CHitBox* hit = Hits::GetHitBox(this); //HitBoxの位置を弾丸の位置に更新
	hit->SetPos(m_x, m_y);


	//敵機が完全に領域外に出たら敵機を破棄する
	bool check = CheckWindow(m_x, m_y, -32.0f, -32.0f, 800.0f, 600.0f);
	if (check == false)
	{
		this->SetStatus(false);//自身に削除命令
		Hits::DeleteHitBox(this);
	}

	//主人公機オブジェクトと接触したら弾丸削除
	if (hit->CheckObjNameHit(OBJ_HERO) != nullptr)
	{
		this->SetStatus(false);   //自身に削除命令を出す。
		Hits::DeleteHitBox(this); //弾丸が所有するHitBoxに削除する。
	}
}

//ドロー
void CObjAngleBullet::Draw()
{

	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	//切り取り位置の設定　グラフィックを作っていない
	src.m_top = 0.0f;   //y
	src.m_left = 0.0f;  //x
	src.m_right = 32.0f; //x 
	src.m_bottom = 32.0f; //y

	//表示位置の設定
	dst.m_top = 0.0f + m_y;//縦の位置変更
	dst.m_left = 0.0f + m_x;
	dst.m_right = 45.0f + m_x;
	dst.m_bottom = 45.0f + m_y;

	Draw::Draw(3, &src, &dst, c,m_r);
}