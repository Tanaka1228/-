//使用するヘッダーファイル
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameL/SceneObjManager.h"
#include"GameL/SceneManager.h"
#include"GameHead.h"
#include"ObjGun.h"
#include"UtilityModule.h"
#include"GameL/WinInputs.h"
#include"GameL/DrawFont.h"
//使用するネームスペース
using namespace GameL;

//コンストラクタ
CObjGun::CObjGun()//コンストラクタで受け取った情報を変数に送る
{
	
}


//イニシャライズ
void CObjGun::Init()
{
	
	m_ani_frame = 2;
	
}

//アクション
void CObjGun::Action()
{
	CObjHero* obj = (CObjHero*)Objs::GetObj(OBJ_HERO);

}

//ドロー
void CObjGun::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	CObjHero* obj = (CObjHero*)Objs::GetObj(OBJ_HERO);
	m_ani_frame = obj->Get_AniFlame();

	if (obj->Get_Gun()== 1)//ハンドガン
	{
		Font::StrDraw(L"構えている", obj->GetX(), -32 + obj->GetY(), 16, c);

		if (m_ani_frame == 2)
		{
			float c[4] = { 1.0f,1.0f,1.0f,1.0f };
			RECT_F src;
			RECT_F dst;

			//切り取り位置の設定
			src.m_top = 0.0f;   //y
			src.m_left = 0.0f; //x
			src.m_right = 32.0f; //x
			src.m_bottom = 32.0f; //y

			//表示位置の設定
			dst.m_top = 10.0f + obj->GetY();
			dst.m_left = 20.0f + obj->GetX();
			dst.m_right = 60.0f + obj->GetX();
			dst.m_bottom = 50.0f + obj->GetY();

			Draw::Draw(2, &src, &dst, c, 0.0f);
		}
		else if (m_ani_frame == 3)//左
		{
			//切り取り位置の設定
			src.m_top = 0.0f;   //y
			src.m_left = 33.0f; //x
			src.m_right = 61.0f; //x
			src.m_bottom = 18.0f; //y

			//表示位置の設定
			dst.m_top = 10.0f + obj->GetY();
			dst.m_left = -28.0f + obj->GetX();
			dst.m_right = 0.0f + 9.0f + obj->GetX();
			dst.m_bottom = 32.0f + obj->GetY();

			Draw::Draw(2, &src, &dst, c, 0.0f);
		}
		else if (m_ani_frame == 0)//正面
		{
			//切り取り位置の設定
			src.m_top = 3.0f;   //y
			src.m_left = 74.0f; //x
			src.m_right = 83.0f; //x
			src.m_bottom = 21.0f; //y

			//表示位置の設定
			dst.m_top = 10.0f + obj->GetY();
			dst.m_left = 5.0f + obj->GetX();
			dst.m_right = 20.0f + obj->GetX();
			dst.m_bottom = 32.0f + obj->GetY();

			Draw::Draw(2, &src, &dst, c, 0.0f);
		}
	}
	else if (m_gun == 0)
	{
		Font::StrDraw(L"構えていない", obj->GetX(), -32 + obj->GetY(), 16, c);

		if (Input::GetVKey('Z') == true)
		{
			Font::StrDraw(L"キックテスト", obj->GetX(), 32 + obj->GetY(), 16, c);
		}
	}


}