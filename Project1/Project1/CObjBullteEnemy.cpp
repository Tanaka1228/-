//使用するヘッダーファイル
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameHead.h"
#include"CObjBullteEnemy.h"

//使用するネームスペース
using namespace GameL;

//コンストラクタ
CObjBulletEnemy::CObjBulletEnemy(float x, float y)//コンストラクタで受け取った情報を変数に送る
{
	m_x = x;
	m_y = y;
	
}

//イニシャライズ
void CObjBulletEnemy::Init()
{
	
}

//アクション
void CObjBulletEnemy::Action()
{
	
}

//ドロー
void CObjBulletEnemy::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	//切り取り位置の設定　グラフィックを作っていない
	//弾丸を左向きにしている
	src.m_top = 0.0f;   //y
	src.m_left = 126.0f;  //x
	src.m_right = 96.0f; //x 
	src.m_bottom = 32.0f; //y

	//表示位置の設定
	dst.m_top = 0.0f + m_y;//縦の位置変更
	dst.m_left = 0.0f + m_x;
	dst.m_right = 45.0f + m_x;
	dst.m_bottom = 45.0f + m_y;

	Draw::Draw(3, &src, &dst, c, 0.0f);
}