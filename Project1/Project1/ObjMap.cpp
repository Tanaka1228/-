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
			src.m_top = 75.0f;   // Y
			src.m_left = 105.0f;  // X
			src.m_right = 700.0f; // X
			src.m_bottom = 466.0f;// Y 

			dst.m_top = 32.0f;
			dst.m_left = 32.0f;
			dst.m_right = 64.0f+64.0f;
			dst.m_bottom = 64.0f+64.0f;

			Draw::Draw(8, &src, &dst, c, 0.0f);//病院の床
		}

	}



}
