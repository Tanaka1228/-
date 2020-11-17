//使用するヘッダーファイル
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameL/DrawFont.h"
#include"GameL/WinInputs.h"

#include"GameHead.h"
#include"ObjHeroine.h"
#include"UtilityModule.h"
#include<fstream>

//使用するネームスペース
using namespace GameL;

//コンストラクタ
CObjHeroine::CObjHeroine()
{
	//Heroineのヘッダーを見たらわかる
	m_sp = false;
	key_flag = 1;
	sp_flag = false;
}


//イニシャライズ
void CObjHeroine::Init()
{
	
}

//アクション
void CObjHeroine::Action()
{
	//CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	CObjBlock* block = (CObjBlock*)Objs::GetObj(OBJ_BLOCK);

	m_sp = block->GetSpeak();
	m_ep = block->GetEnter();
	
}

//ドロー
void CObjHeroine::Draw()
{
	////描画カラー情報　R=RED G=Green B=Blue A=alpha(透過情報)
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先表示位置

	setlocale(LC_ALL, "Japanese");
	wifstream fin("会話.txt");


	if (m_sp == 1)
	{
		
		wchar_t str1[32];
		fin >> str1;
		swprintf_s(str1,L"%s\n", str1);
		Font::StrDraw(str1, 50.0f, 500, 25, c);// X  Y  大きさ 


		sp_flag == true;
		//Font::StrDraw(L"女の子:ようこそバーへ,一回女の子に近づくと会話が進むよ", 50, 500, 25, c);//X Y 大きさ カラー？
		key_flag = 2;
	}
	if(m_sp == 2)
	{
		sp_flag == true;
		Font::StrDraw(L"女の子：ここは拠点です", 100, 500, 30, c);
		key_flag = 3;

	}
	if (m_sp == 3)
	{
		sp_flag == true;
		Font::StrDraw(L"女の子：Aキーで武器構え・Zキーで発射・Qキーで武器切り替え", 50, 500, 25, c);
		Font::StrDraw(L"            スペースキーでリロードです", 50, 530, 25, c);
		key_flag = 4;

		
	}
	if (m_sp == 4)
	{
		sp_flag == true;
		Font::StrDraw(L"女の子：βテスト・ファイル出力・チャイナタウン", 100, 500, 30, c);
		key_flag = 5;

	}
	if (m_sp == 5)
	{
		sp_flag == true;
		Font::StrDraw(L"女の子：拠点をでて、敵を倒して", 100, 500, 30, c);
		key_flag = 1;

	}


}

//this->SetStatus(false);//自身に削除命令
		//Font::Delete();

//
////会話グラフィック
////切り取り位置の設定
//src.m_top = 373.0f; //y
//src.m_left = 20.0f; //x
//src.m_right = 780.0f; //x
//src.m_bottom = 581.0f; //y
//
////表示位置の設定
//dst.m_top = 400.0f;
//dst.m_left = 40.0f;
//dst.m_right = 750.0f;
//dst.m_bottom = 550.0f;
//
////0番目に登録したグラフィックをstc・dst・cの情報を元に描画
//Draw::Draw(10, &src, &dst, c, 0.0f);//0.0fは角度を変えるやつ