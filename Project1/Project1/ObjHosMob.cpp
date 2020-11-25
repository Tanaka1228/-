//使用するヘッダーファイル
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameL/DrawFont.h"
#include"GameL/WinInputs.h"

#include"GameHead.h"
#include"ObjInstMob.h"
#include"UtilityModule.h"
#include<fstream>


//使用するネームスペース
using namespace GameL;

//コンストラクタ
CObjInstMob::CObjInstMob()
{
	//Heroineのヘッダーを見たらわかる
	m_sp = false;
	key_flag = 1;
	sp_flag = false;
	m_key_control = true;
	mob_flag = 0;
}


//イニシャライズ
void CObjInstMob::Init()
{

}

//アクション
void CObjInstMob::Action()
{
	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	CObjInstitute*inst = (CObjInstitute*)Objs::GetObj(OBJ_INSTITUTE);//研究所1階
	CObjInstitute13*inst13 = (CObjInstitute13*)Objs::GetObj(OBJ_INSTITUTE13);//研究所地下2階


	//------------------研究所1階の会話フラグ-----------------------
	if (inst != nullptr)
	{
		if (hero->GetBT() == 36)//この数字には研究所で設定したモブの番号を
		{
			mob_flag = 1;//モブ一体目のフラグ
			if (Input::GetVKey(VK_RETURN) == true) {

				if (m_key_control == true)
				{
					if (key_flag == 1)
					{
						m_sp = 1;

					}

					if (key_flag == 2)
					{
						m_sp = 2;

					}
					if ((key_flag == 3))
					{

						m_sp = 3;

					}
					if ((key_flag == 4))
					{
						m_sp = 4;

					}
					if ((key_flag == 5))
					{
						m_sp = 5;

					}
					if ((key_flag == 6))
					{
						m_sp = 6;

					}
					m_key_control = false;
				}

			}
			else
			{
				m_key_control = true;
				
			}
		}

		//-------------2体目のモブフラグ--------------------------------------
		if (hero->GetBT() == 37)
		{
			mob_flag = 2;//モブ2体目のフラグ
			if (Input::GetVKey(VK_RETURN) == true) {

				if (m_key_control == true)
				{
					if (key_flag == 1)
					{
						m_sp = 1;

					}

					if (key_flag == 2)
					{
						m_sp = 2;

					}
					if ((key_flag == 3))
					{

						m_sp = 3;

					}
					if ((key_flag == 4))
					{
						m_sp = 4;

					}
					if ((key_flag == 5))
					{
						m_sp = 5;

					}
					if ((key_flag == 6))
					{
						m_sp = 6;

					}
					m_key_control = false;
				}

			}
			else
			{
				m_key_control = true;
			
			}
		}
	}
	//----------------------------------------------------------------





	//----------地下2階の会話フラグ----------------------------------
	if (inst13 != nullptr)
	{
		if (hero->GetBT() == 99)//主人公が数字(ブロック)に触れていれば
		{
			mob_flag = 1;

			if (Input::GetVKey(VK_RETURN) == true) {

				if (m_key_control == true)
				{
					if (key_flag == 1)
					{
						m_sp = 1;

					}

					if (key_flag == 2)
					{
						m_sp = 2;

					}
					if ((key_flag == 3))
					{

						m_sp = 3;

					}
					if ((key_flag == 4))
					{
						m_sp = 4;

					}
					if ((key_flag == 5))
					{
						m_sp = 5;

					}
					if ((key_flag == 6))
					{
						m_sp = 6;

					}
					m_key_control = false;
				}

			}
			else
			{
				m_key_control = true;
			}
		}

		if (hero->GetBT() == 9)
		{
			mob_flag = 2;

			if (Input::GetVKey(VK_RETURN) == true) {

				if (m_key_control == true)
				{
					if (key_flag == 1)
					{
						m_sp = 1;

					}

					if (key_flag == 2)
					{
						m_sp = 2;

					}
					if ((key_flag == 3))
					{

						m_sp = 3;

					}
					if ((key_flag == 4))
					{
						m_sp = 4;

					}
					if ((key_flag == 5))
					{
						m_sp = 5;

					}
					if ((key_flag == 6))
					{
						m_sp = 6;

					}
					m_key_control = false;
				}

			}
			else
			{
				m_key_control = true;
			}
		}
	}
	//---------------------------------------------------------------

}

//ドロー
void CObjInstMob::Draw()
{
	////描画カラー情報　R=RED G=Green B=Blue A=alpha(透過情報)
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先表示位置

	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	CObjInstitute* inst = (CObjInstitute*)Objs::GetObj(OBJ_INSTITUTE);//研究所1階
	CObjInstitute13* inst13 = (CObjInstitute13*)Objs::GetObj(OBJ_INSTITUTE13);//研究所地下2階

	//------触っるやつは「〇」を付けています----------------------------------------------------


	//------------地上1階の一体目----------------------------------------------------------------------------
	if (inst != nullptr&&mob_flag==1)
	{
		if (m_sp == 1)//エンターキーを一回押したとき
		{
			sp_flag == true;

			ifstream fin("病院1階.txt", ios::in);//テキストデータをを読み込み------------------〇
			char str1[64];//ただの配列----------文字数が多くなったら要素数を変えてよい
			wchar_t wstr1[64];
			fin.seekg(24, ios::cur);//0バイト数進める-----------〇------------------
			fin >> str1;//str1にテキストを入れる

			sprintf_s(str1, "%s", str1);//出力
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//文字をユニコードに変換する
			Font::StrDraw(wstr1, 50.0f, 500, 30, c);// X  Y  大きさ     ---------------〇-------------------


			key_flag = 2;
			fin.close();//ファイルを閉じる
		}
		if (m_sp == 2)//エンターキーを一回押したとき
		{
			sp_flag == true;

			ifstream fin("病院1階.txt", ios::in);//テキストデータをを読み込み
			char str1[64];//ただの配列
			wchar_t wstr1[64];
			fin.seekg(74, ios::cur);//0バイト数進める
			fin >> str1;//str1にテキストを入れる

			sprintf_s(str1, "%s", str1);//出力
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//文字をユニコードに変換する
			Font::StrDraw(wstr1, 50.0f, 500, 25, c);// X  Y  大きさ     


			key_flag = 3;
			fin.close();//ファイルを閉じる
		}
		if (m_sp == 2)//エンターキーを一回押したとき
		{
			sp_flag == true;

			ifstream fin("病院1階.txt", ios::in);//テキストデータをを読み込み
			char str1[64];//ただの配列
			wchar_t wstr1[64];
			fin.seekg(130, ios::cur);//0バイト数進める
			fin >> str1;//str1にテキストを入れる

			sprintf_s(str1, "%s", str1);//出力
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//文字をユニコードに変換する
			Font::StrDraw(wstr1, 200.0f, 530, 25, c);// X  Y  大きさ     


			key_flag = 3;
			fin.close();//ファイルを閉じる
		}
		if (m_sp == 3)
		{
			Font::StrDraw(L"", 200.0f, 530, 25, c);// X  Y  大きさ    
			key_flag = 1;
		}
	}
	//----------------2体目の会話-----------------------------------------------------------------------
	if (inst != nullptr && mob_flag == 2)
	{
		if (m_sp == 1)//エンターキーを一回押したとき
		{
			sp_flag == true;

			ifstream fin("病院1階.txt", ios::in);//テキストデータをを読み込み
			char str1[64];//ただの配列
			wchar_t wstr1[64];
			fin.seekg(162, ios::cur);//0バイト数進める
			fin >> str1;//str1にテキストを入れる

			sprintf_s(str1, "%s", str1);//出力
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//文字をユニコードに変換する
			Font::StrDraw(wstr1, 50.0f, 500, 25, c);// X  Y  大きさ     


			key_flag = 2;
			fin.close();//ファイルを閉じる
		}
		if (m_sp == 2)//エンターキーを一回押したとき
		{
			sp_flag == true;

			ifstream fin("病院1階.txt", ios::in);//テキストデータをを読み込み
			char str1[64];//ただの配列
			wchar_t wstr1[64];
			fin.seekg(222, ios::cur);//0バイト数進める
			fin >> str1;//str1にテキストを入れる

			sprintf_s(str1, "%s", str1);//出力
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//文字をユニコードに変換する
			Font::StrDraw(wstr1, 50.0f, 500, 25, c);// X  Y  大きさ     


			key_flag = 3;
			fin.close();//ファイルを閉じる
		}
		if (m_sp == 3)//エンターキーを一回押したとき
		{
			sp_flag == true;

			ifstream fin("病院1階.txt", ios::in);//テキストデータをを読み込み
			char str1[100];//ただの配列
			wchar_t wstr1[100];
			fin.seekg(260, ios::cur);//0バイト数進める
			fin >> str1;//str1にテキストを入れる

			sprintf_s(str1, "%s", str1);//出力
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 100, wstr1, 100);//文字をユニコードに変換する
			Font::StrDraw(wstr1, 40.0f, 500, 22, c);// X  Y  大きさ     


			key_flag = 4;
			fin.close();//ファイルを閉じる
		}
		if (m_sp == 4)
		{
			Font::StrDraw(L"", 200.0f, 530, 25, c);// X  Y  大きさ    
			key_flag = 1;
		}
	}

	//------地下2階--------------------------------------------------------------------------------------------------
	if(inst13 != nullptr&&mob_flag==1)
	{
		if (m_sp == 1)//エンターキーを一回押したとき
		{
			sp_flag == true;

			ifstream fin("チャイナタウンボス戦フィールドの会話.txt", ios::in);//テキストデータをを読み込み
			char str1[64];//ただの配列
			wchar_t wstr1[64];
			fin.seekg(0, ios::cur);//0バイト数進める
			fin >> str1;//str1にテキストを入れる

			sprintf_s(str1, "%s", str1);//出力
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//文字をユニコードに変換する
			Font::StrDraw(wstr1, 50.0f, 500, 30, c);// X  Y  大きさ     


			key_flag = 2;
			fin.close();//ファイルを閉じる
		}
		if (m_sp == 2)//エンターキーを一回押したとき
		{
			sp_flag == true;

			ifstream fin("チャイナタウンボス戦フィールドの会話.txt", ios::in);//テキストデータをを読み込み
			char str1[64];//ただの配列
			wchar_t wstr1[64];
			fin.seekg(18, ios::cur);//0バイト数進める
			fin >> str1;//str1にテキストを入れる

			sprintf_s(str1, "%s", str1);//出力
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//文字をユニコードに変換する
			Font::StrDraw(wstr1, 50.0f, 500, 25, c);// X  Y  大きさ     


			key_flag = 3;
			fin.close();//ファイルを閉じる
		}
		if (m_sp == 2)//エンターキーを一回押したとき
		{
			sp_flag == true;

			ifstream fin("チャイナタウンボス戦フィールドの会話.txt", ios::in);//テキストデータをを読み込み
			char str1[64];//ただの配列
			wchar_t wstr1[64];
			fin.seekg(66, ios::cur);//0バイト数進める
			fin >> str1;//str1にテキストを入れる

			sprintf_s(str1, "%s", str1);//出力
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//文字をユニコードに変換する
			Font::StrDraw(wstr1, 50.0f, 530, 25, c);// X  Y  大きさ     


			key_flag = 3;
			fin.close();//ファイルを閉じる
		}
		if (m_sp == 3)//エンターキーを一回押したとき
		{
			sp_flag == true;

			ifstream fin("チャイナタウンボス戦フィールドの会話.txt", ios::in);//テキストデータをを読み込み
			char str1[64];//ただの配列
			wchar_t wstr1[64];
			fin.seekg(110, ios::cur);//0バイト数進める
			fin >> str1;//str1にテキストを入れる

			sprintf_s(str1, "%s", str1);//出力
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//文字をユニコードに変換する
			Font::StrDraw(wstr1, 50.0f, 500, 25, c);// X  Y  大きさ     



			fin.close();//ファイルを閉じる
		}
		if (m_sp == 4)//エンターキーを一回押したとき
		{
			sp_flag == true;

			ifstream fin("チャイナタウンボス戦フィールドの会話.txt", ios::in);//テキストデータをを読み込み
			char str1[64];//ただの配列
			wchar_t wstr1[64];
			fin.seekg(158, ios::cur);//0バイト数進める
			fin >> str1;//str1にテキストを入れる

			sprintf_s(str1, "%s", str1);//出力
			MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//文字をユニコードに変換する
			Font::StrDraw(wstr1, 50.0f, 500, 25, c);// X  Y  大きさ     



			fin.close();//ファイルを閉じる
		}
	}
	//----------------------------------------------------------------------------------------
}
