//使用するヘッダーファイル
#include"GameL\DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameHead.h"
#include"ObjHero.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjHero::Init()
{
	m_x = 0;
	m_y = 0;
}

//アクション
void CObjHero::Action()
{
	if (Input::GetVKey(VK_RIGHT) == true) //主人公移動キー 右
	{
		m_x += 1.0f;
	}

	if (Input::GetVKey(VK_LEFT) == true) //主人公移動キー 左
	{
		m_x -= 1.0f;
	}

	if (Input::GetVKey(VK_UP) == true) //主人公移動キー ↑
	{
		m_y -= 1.0f;
	}

	if (Input::GetVKey(VK_DOWN) == true) //主人公移動キー ↓
	{
		m_y+= 1.0f;
	}


}

//ドロー
void CObjHero::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	//切り取り位置の設定
	src.m_top     = 1.0f;   //y
	src.m_left    = 24.0f;  //x
	src.m_right   = 223.0f; //x
	src.m_bottom  = 240.0f; //y

	//表示位置の設定
	dst.m_top     = 0.0f  +  m_y;
	dst.m_left    = 0.0f  +  m_x;
	dst.m_right   = 32.0f +  m_x;
	dst.m_bottom  = 32.0f +  m_y;

	Draw::Draw(0, &src, &dst, c, 0.0f);
}