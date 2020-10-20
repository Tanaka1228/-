//使用するヘッダーファイル
#include"GameL\DrawTexture.h"

#include"GameHead.h"
#include"ObjEnemy.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjEnemy::Init()
{

}

//アクション
void CObjEnemy::Action()
{

}

//ドロー
void CObjEnemy::Draw()
{
	//描画カラー情報　R=RED G=Green B=Blue A=alpha(透過情報)
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先表示位置

	//切り取り位置の設定
	src.m_top = 3.0f; //y
	src.m_left = 7.0f; //x
	src.m_right = 139.0f; //x
	src.m_bottom = 131.0f; //y

	//表示位置の設定
	dst.m_top = 0.0f;
	dst.m_left = 32.0f;
	dst.m_right = 0.0f;
	dst.m_bottom = 32.0f;

	//0番目に登録したグラフィックをstc・dst・cの情報を元に描画
	Draw::Draw(0, &src, &dst, c, 0.0f);
}