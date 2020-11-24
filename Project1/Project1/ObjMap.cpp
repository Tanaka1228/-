//使用するヘッダーファイル
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameL/DrawFont.h"
#include"GameL/WinInputs.h"

#include"GameHead.h"
#include"ObjMap.h"
#include"UtilityModule.h"
#include<fstream>


//使用するネームスペース
using namespace GameL;

//コンストラクタ
CObjMap::CObjMap()
{
	//Heroineのヘッダーを見たらわかる
	m_sp = false;
	key_flag = 1;
	sp_flag = false;
	m_key_control = true;
}


//イニシャライズ
void CObjMap::Init()
{

}

//アクション
void CObjMap::Action()
{
	

}

//ドロー
void CObjMap::Draw()
{
	////描画カラー情報　R=RED G=Green B=Blue A=alpha(透過情報)
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先表示位置

	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	CObjHospital* hospital = (CObjHospital*)Objs::GetObj(OBJ_HOSPITAL);

	if (hospital != nullptr)
	{
		if (hospital->GetMap() == true)
		{

			//背景表示
			src.m_top = 10.0f;   // Y
			src.m_left = 11.0f;  // X
			src.m_right = 220.0f; // X
			src.m_bottom =165.0f;// Y 

			dst.m_top = 100.0f;
			dst.m_left = 100.0f;
			dst.m_right = 300.0f+0.0f;
			dst.m_bottom = 300.0f+0.0f;

			Draw::Draw(1, &src, &dst, c, 0.0f);//病院の床
		}

	}



}
