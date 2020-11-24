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
			src.m_top = 75.0f;   // Y
			src.m_left = 105.0f;  // X
			src.m_right = 700.0f; // X
			src.m_bottom = 466.0f;// Y 

			dst.m_top = 32.0f;
			dst.m_left = 32.0f;
			dst.m_right = 64.0f+64.0f;
			dst.m_bottom = 64.0f+64.0f;

			Draw::Draw(8, &src, &dst, c, 0.0f);//�a�@�̏�
		}

	}



}
