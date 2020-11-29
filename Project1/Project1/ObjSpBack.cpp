

//�g�p����w�b�_�[�t�@�C��
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameL/DrawFont.h"
#include"GameL/WinInputs.h"

#include"GameHead.h"
#include"ObjSpBack.h"
#include"UtilityModule.h"
#include<fstream>


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�R���X�g���N�^
CObjSpBack::CObjSpBack()
{
	//Heroine�̃w�b�_�[��������킩��
	m_sp = false;
	key_flag = 1;
	sp_flag = false;
	m_key_control = true;
	mob_flag = 0;
}


//�C�j�V�����C�Y
void CObjSpBack::Init()
{

}

//�A�N�V����
void CObjSpBack::Action()
{


}

//�h���[
void CObjSpBack::Draw()
{
	////�`��J���[���@R=RED G=Green B=Blue A=alpha(���ߏ��)
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`���\���ʒu

	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	CObjDrugCampany* drug = (CObjDrugCampany*)Objs::GetObj(OBJ_DRUG_CAMPANY);//�����Ђ̈�K
	CObjChinaMob* chinamob = (CObjChinaMob*)Objs::GetObj(OBJ_CHINA_MOB);//�`���C�i�^�E���̃��u
	CObjChinaTown* chinatown = (CObjChinaTown*)Objs::GetObj(OBJ_CHINA_TOWN);
	CObjChinaTownBoss* chinatownboss = (CObjChinaTownBoss*)Objs::GetObj(OBJ_CHINA_TOWN_BOSS);
	CObjChinaTown_b* chinatown_b = (CObjChinaTown_b*)Objs::GetObj(OBJ_CHINA_TOWN_B);//�`���C�i�^�E����B

	if (chinatown != nullptr)
	{
		if (chinamob->Sp_Flag() == true)
		{
			//�؂���ʒu�̐ݒ�
			src.m_top = 372.0f;   //y
			src.m_left = 18.0f; //x
			src.m_right = 781.0f; //x
			src.m_bottom = 581.0f; //y

			//�\���ʒu�̐ݒ�
			dst.m_top = 450.0f;
			dst.m_left = 2.0f;
			dst.m_right = 798.0f;
			dst.m_bottom = 600.0f;

			Draw::Draw(7, &src, &dst, c, 0.0f);
		}
	}
}

