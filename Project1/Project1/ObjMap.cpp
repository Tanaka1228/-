//�g�p����w�b�_�[�t�@�C��
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameL/DrawFont.h"
#include"GameL/WinInputs.h"

#include"GameHead.h"
#include"ObjMap.h"
#include"UtilityModule.h"
#include<fstream>


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�R���X�g���N�^
CObjMap::CObjMap()
{
	//Heroine�̃w�b�_�[��������킩��
	m_sp = false;
	key_flag = 1;
	sp_flag = false;
	m_key_control = true;
}


//�C�j�V�����C�Y
void CObjMap::Init()
{

}

//�A�N�V����
void CObjMap::Action()
{
	

}

//�h���[
void CObjMap::Draw()
{
	////�`��J���[���@R=RED G=Green B=Blue A=alpha(���ߏ��)
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`���\���ʒu

	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	CObjHospital* hospital = (CObjHospital*)Objs::GetObj(OBJ_HOSPITAL);

	if (hospital != nullptr)
	{
		if (hospital->GetMap() == true)
		{

			//�w�i�\��
			src.m_top = 10.0f;   // Y
			src.m_left = 11.0f;  // X
			src.m_right = 220.0f; // X
			src.m_bottom =165.0f;// Y 

			dst.m_top = 100.0f;
			dst.m_left = 100.0f;
			dst.m_right = 300.0f+0.0f;
			dst.m_bottom = 300.0f+0.0f;

			Draw::Draw(1, &src, &dst, c, 0.0f);//�a�@�̏�
		}

	}



}
