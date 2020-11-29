

//使用するヘッダーファイル
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameL/DrawFont.h"
#include"GameL/WinInputs.h"

#include"GameHead.h"
#include"ObjSpBack.h"
#include"UtilityModule.h"
#include<fstream>


//使用するネームスペース
using namespace GameL;

//コンストラクタ
CObjSpBack::CObjSpBack()
{
	//Heroineのヘッダーを見たらわかる
	m_sp = false;
	key_flag = 1;
	sp_flag = false;
	m_key_control = true;
	mob_flag = 0;
}


//イニシャライズ
void CObjSpBack::Init()
{

}

//アクション
void CObjSpBack::Action()
{


}

//ドロー
void CObjSpBack::Draw()
{
	////描画カラー情報　R=RED G=Green B=Blue A=alpha(透過情報)
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先表示位置

	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	CObjDrugCampany* drug = (CObjDrugCampany*)Objs::GetObj(OBJ_DRUG_CAMPANY);//製薬会社の一階
	CObjChinaMob* chinamob = (CObjChinaMob*)Objs::GetObj(OBJ_CHINA_MOB);//チャイナタウンのモブ
	CObjChinaTown* chinatown = (CObjChinaTown*)Objs::GetObj(OBJ_CHINA_TOWN);
	CObjChinaTownBoss* chinatownboss = (CObjChinaTownBoss*)Objs::GetObj(OBJ_CHINA_TOWN_BOSS);
	CObjChinaTown_b* chinatown_b = (CObjChinaTown_b*)Objs::GetObj(OBJ_CHINA_TOWN_B);//チャイナタウンのB

	if (chinatown != nullptr)
	{
		if (chinamob->Sp_Flag() == true)
		{
			//切り取り位置の設定
			src.m_top = 372.0f;   //y
			src.m_left = 18.0f; //x
			src.m_right = 781.0f; //x
			src.m_bottom = 581.0f; //y

			//表示位置の設定
			dst.m_top = 450.0f;
			dst.m_left = 2.0f;
			dst.m_right = 798.0f;
			dst.m_bottom = 600.0f;

			Draw::Draw(7, &src, &dst, c, 0.0f);
		}
	}
}

