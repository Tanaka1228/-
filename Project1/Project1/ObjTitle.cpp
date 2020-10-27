//使用するヘッダ―ファイル
#include"GameL\DrawTexture.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"

#include"GameHead.h"
#include"ObjTitle.h"
#include"SceneMain.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjTitle::Init()
{
	bool m_key_flag = false;
	 m_mou_x = 0.0f;
	 m_mou_y = 0.0f;
	 m_mou_r = false;
	 m_mou_l = false;
	 m_y = 0;
	 m_x = 0;
}

//アクション
void CObjTitle::Action()
{
	//マウスの位置取得
	 m_mou_x = (float)Input::GetPosX();
	 m_mou_y = (float)Input::GetPosY();
	 //マウスのボタンの状態
	 m_mou_r = Input::GetMouButtonR();
	 m_mou_l = Input::GetMouButtonL();



	 //マウスの位置とクリックする場所で当たり判定
	 if (m_mou_x > 250 && m_mou_x < 500 && m_mou_y>340 && m_mou_y < 370)
	 {
		 //マウスボタンが押されたらメインに還移
		 if (m_mou_r == true || m_mou_l == true)
		 {
			 Scene::SetScene(new CSceneMain());
		 }
	 }
	 
	//if (m_mou_x > 250 && m_mou_x < 500 && m_mou_y>380 && m_mou_y < 430)
	//{
	//	 //マウスボタンが押されたらメインに還移
	//	 if (m_mou_r == true || m_mou_l == true)
	//	 {
	//		Scene::SetScene(new CScene());
	//	 }
	//}
	//
	// if (m_mou_x > 250 && m_mou_x < 500 && m_mou_y>440 && m_mou_y < 470)
	// {
	//	 //マウスボタンが押されたらメインに還移
	//	 if (m_mou_r == true || m_mou_l == true)
	//	 {
	//		 Scene::SetScene(new ());
	//	 }
	// }
	// 
	 if (m_mou_x > 250 && m_mou_x < 500 && m_mou_y>480 && m_mou_y < 530)
	 {
		 //マウスボタンが押されたらメインに還移
		 if (m_mou_r == true || m_mou_l == true)
		 {
			 Scene::SetScene(nullptr);
		 }
	 }


	//エンターキーを押してシーン：ゲームTitleに移行する
	if (Input::GetVKey(VK_RETURN) == true)
	{
		if (m_key_flag == true)
		{
			Scene::SetScene(new CSceneMain());
			m_key_flag = false;
		}

	}
	else
	{
		m_key_flag = true;
	}
}

//ドロー
void CObjTitle::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f, };
	RECT_F src;
	RECT_F dst;

	//タイトル名の表示
	Font::StrDraw(L"ARTIFICIAL HUMAN ", 270, 100, 32, c);
	Font::StrDraw(L" ～無人世界の旅～", 250, 150, 32, c);

	//カーソル選択位置
	//mainに移行
	Font::StrDraw(L"◆  ニューゲーム", 250, 350, 32, c);

	////ロード画面に移行
	//Font::StrDraw(L"◆     ロード    ", 250, 400, 32, c);
	//
	////設定画面に移行
	//Font::StrDraw(L"◆      設定     ", 250, 450, 32, c);
	//
	//シャットダウン
	Font::StrDraw(L"◆ シャットダウン", 250, 500, 32, c);

	//仮マウス位置表示
	wchar_t str[256];
	swprintf_s(str, L"x=%f,y=%f", m_mou_x, m_mou_y);
	Font::StrDraw(str, 20, 20, 12, c);

	//仮マウスのボタンの状態
	if(m_mou_r == true)
		Font::StrDraw(L"R=押している", 20, 30, 12, c);
	else
		Font::StrDraw(L"R=押していない", 20, 30, 12, c);
	if(m_mou_l == true)
		Font::StrDraw(L"L=押している", 20, 40, 12, c);
	else
		Font::StrDraw(L"L=押していない", 20, 40, 12, c);

	

	if (Input::GetVKey(VK_DOWN) == true)
	{
		m_y += 15;

		//描画カラー情報　R=RED G=Green B=Blue A=alpha(透過情報)
		float c[4] = { 1.0f,1.0f,1.0f,1.0f };

		RECT_F src;//描画元切り取り位置
		RECT_F dst;//描画先表示位置

		//切り取り位置の設定
		src.m_top = 0.0f; //y
		src.m_left = 0.0f; //x
		src.m_right = 171.0f; //x
		src.m_bottom = 62.0f; //y

		//表示位置の設定
		dst.m_top = 0.0f + m_y;
		dst.m_left = 0.0f + m_x;
		dst.m_right = 256.0f + m_x;
		dst.m_bottom = 64.0f + m_y;

		//5番目に登録したグラフィックをstc・dst・cの情報を元に描画
		Draw::Draw(5, &src, &dst, c, 0.0f);
	}
}