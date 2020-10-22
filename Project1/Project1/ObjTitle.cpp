//使用するヘッダ―ファイル
#include"GameL\DrawFont.h"
#include"GameL\WinInputs.h"

#include"GameHead.h"
#include"ObjTitle.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjTitle::Init()
{
	bool m_key_flag = false;
}

//アクション
void CObjTitle::Action()
{
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
		m_key_flag == true;
	}
}

//ドロー
void CObjTitle::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f, };
	Font::StrDraw(L"ARTIFICIAL HUMAN ", 270, 100, 32, c);
	Font::StrDraw(L" ～無人世界の旅～", 250, 150, 32, c);
}