//使用するヘッダ―ファイル
#include"GameL\DrawTexture.h"
#include"GameHead.h"

#include"ObjTitleBackground.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjTitleBackground::Init()
{
	
}

//アクション
void CObjTitleBackground::Action()
{
	
}

//ドロー
void CObjTitleBackground::Draw()
{

	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	//切り取り位置の設定
	src.m_top = 0.0f;   //y
	src.m_left = 0.0f;  //x
	src.m_right = 512.0f; //x
	src.m_bottom = 448.0f; //y

	//表示位置の設定
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 1200.0f;
	dst.m_bottom = 1000.0f;

	Draw::Draw(4, &src, &dst, c, 0.0f);
}