//使用するヘッダ―ファイル
#include"GameL\DrawTexture.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"

#include"GameHead.h"
#include"ObjEnd.h"
#include"SceneTitle.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjEnd::Init()
{
	bool m_key_flag = false;
}

//アクション
void CObjEnd::Action()
{
	
	//エンターキーを押してシーン：ゲームTitleに移行する
	if (Input::GetVKey(VK_RETURN) == true)
	{
		if (m_key_flag == true)
		{
			Scene::SetScene(new CSceneTitle());

		}

	}

	else
	{
		m_key_flag == true;
	}


}

//ドロー
void CObjEnd::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f, };
	RECT_F src;
	RECT_F dst;

	//タイトル名の表示
	Font::StrDraw(L"ＥＮＤ", 350, 250, 32, c);


	//タイトルオブジェクト作成
	CObjEnd* obj = new CObjEnd();
	Objs::InsertObj(obj, OBJ_END, 10);
}