//使用するヘッダーファイル
#include"GameL/DrawTexture.h"
#include"GameHead.h"
#include"CObjBullet.h"

//使用するネームスペース
using namespace GameL;

//コンストラクタ
CObjBullet::CObjBullet(float x, float y)//コンストラクタで受け取った情報を変数に送る
{
	m_x = x;
	m_y = y;
}

//イニシャライズ
void CObjBullet::Init()
{

}

//アクション
void CObjBullet::Action()
{
	m_x += 10.0f;
}

//ドロー
void CObjBullet::Draw()
{

	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	//切り取り位置の設定　グラフィックを作っていない
	src.m_top = 0.0f;   //y
	src.m_left =0.0f;  //x
	src.m_right = 32.0f; //x 
	src.m_bottom = 32.0f; //y

	//表示位置の設定
	dst.m_top = 100.0f  +   m_y;//縦の位置変更
	dst.m_left = 0.0f   +   m_x;
	dst.m_right = 32.0f +   m_x;
	dst.m_bottom = 32.0f+   m_y;

	Draw::Draw(3, &src, &dst, c, 0.0f);
}