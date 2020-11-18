//使用するヘッダーファイル
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameHead.h"
#include"CObjBullet.h"
#include"ObjHero.h"
#include"UtilityModule.h"


//使用するネームスペース
using namespace GameL;

//コンストラクタ
CObjBullet::CObjBullet(float x, float y)//コンストラクタで受け取った情報を変数に送る
{
	m_x = x;//リボルバー
	m_y = y;
	m_vx = 0.0f;//速度用変数
	m_vy = 0.0f;

	ass_m_x = x;//アサルト
	ass_m_y = y;
	ass_m_vx = 0.0f;//速度用変数
	ass_m_vy = 0.0f;

	m_Xpos = 0;//0は左
	m_Ypos = 0;//0は上
}


//イニシャライズ
void CObjBullet::Init()
{
	m_vx = 0.0f;
	m_vy = 0.0f;

	m_eff.m_top = 32;
	m_eff.m_left = 0;
	m_eff.m_right = 32;
	m_eff.m_bottom = 64;
	m_ani = 0;
	m_ani_time = 0;
	

	//当たり判定用HitBoxを作成
	Hits::SetHitBox(this, m_x, m_y, 25, 22, ELEMENT_PLAYER, OBJ_BULLET, 1);
}

//アクション
void CObjBullet::Action()
{
	CObjHero* obj = (CObjHero*)Objs::GetObj(OBJ_HERO);
	float bx = obj->GetB();

	if (bx == 2)
	{
		m_vx += 6.0f;
		ass_m_x += 3.0f;
		m_x += m_vx;
		m_Xpos = 0.0f;
	}
	else if (bx == 3)
	{
		m_vx -= 6.0f;
		ass_m_x -= 3.0f;
		m_x   += m_vx;
		m_Xpos = 1.0f;
	}
	else if (bx == 1)
	{
		m_vy -= 6.0f;
		ass_m_y -= 3.0f;
		m_y += m_vy;
		m_Ypos = 0.0f;
	}
	else if (bx == 0)
	{
		m_vy += 6.0f;
		ass_m_y += 3.0f;
		m_y += m_vy;
		m_Ypos = 1.0f;
	}

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

	//敵機オブジェクトと接触したら弾丸削除
	if (hit->CheckObjNameHit(OBJ_ENEMY) != nullptr)
	{
		this->SetStatus(false);   //自身に削除命令を出す。
		Hits::DeleteHitBox(this); //弾丸が所有するHitBoxに削除する。
	}
}

//ドロー
void CObjBullet::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	CObjHero* obj = (CObjHero*)Objs::GetObj(OBJ_HERO);

	//アニメ～しょんRECT情報
	RECT_F ani_src[4] =
	{
		{32,0,32,64},
		{32,32,64,64},
		{32,64,96,64},
		{32,96,128,64},
	};


	//if (obj->Get_Gun_Type_Flag() == 0)
   //{
		//切り取り位置の設定　グラフィックを作っていない	
		src.m_top = 0.0f;   //y
		src.m_left = 0.0f;  //x
		src.m_right = 32.0f; //x 
		src.m_bottom = 32.0f; //y

		//表示位置の設定
		dst.m_top = (32.0f - 32.0f * m_Ypos) + m_y;//縦の位置変更
		dst.m_left = (32.0f * m_Xpos) + m_x;
		dst.m_right = (32.0f - 32.0f * m_Xpos) + m_x;
		dst.m_bottom = (32.0f * m_Ypos) + m_y;


		Draw::Draw(3, &src, &dst, c, 0.0f);
	//}
	//if (obj->Get_Gun_Type_Flag() == 1)
	//{
		//切り取り位置の設定　グラフィックを作っていない	
		//src.m_top = 0.0f;   //y
		//src.m_left = 0.0f;  //x
		//src.m_right = 32.0f; //x 
		//src.m_bottom = 32.0f; //y

		////表示位置の設定
		//dst.m_top = (32.0f - 32.0f * m_Ypos) + ass_m_y;//縦の位置変更
		//dst.m_left = (32.0f * m_Xpos) + ass_m_x;
		//dst.m_right = (32.0f - 32.0f * m_Xpos) + ass_m_x;
		//dst.m_bottom = (32.0f * m_Ypos) + ass_m_y;


		//Draw::Draw(3, &src, &dst, c, 0.0f);
	//}
}