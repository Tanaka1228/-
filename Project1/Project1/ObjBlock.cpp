//使用するヘッダーファイル
#include"GameL\DrawTexture.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneManager.h"

#include"GameHead.h"
#include"ObjBlock.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjBlock::Init()
{
	m_scroll = 0.0f;

//マップ情報
	int block_data[10][10] =
	{
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
	};
	//マップデータをコピー
	memcpy(m_map, block_data, sizeof(int) * (10 * 10));
}
//アクション
void CObjBlock::Action()
{

}
//ドロー
void CObjBlock::Draw()
{
	//描画カラー情報
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先表示位置

	//背景表示
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 800.0f;
	src.m_bottom = 600.0f;
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;
	Draw::Draw(9, &src, &dst, c, 0.0f);

	//マップチップによるblock設置
	//切り取り位置の設定
	src.m_top = 0.0f;   //y
	src.m_left = 0.0f; //x
	src.m_right = src.m_left+50.0f; //x
	src.m_bottom = 140.0f; //y

	m_scroll -= 3.0f;//scroll実験用

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (m_map[i][j] > 0)
			{
				//表示位置の設定
				dst.m_top = 0.0f + m_scroll;
				dst.m_left = 0.0f + m_scroll;
				dst.m_right = 50.0 + m_scroll;
				dst.m_bottom = 140.0 + m_scroll;

				//描画
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
		}
	}
}