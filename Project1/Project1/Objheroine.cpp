//�g�p����w�b�_�[�t�@�C��
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameL/DrawFont.h"
#include"GameL/WinInputs.h"

#include"GameHead.h"
#include"ObjHeroine.h"
#include"UtilityModule.h"
#include<fstream>


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�R���X�g���N�^
CObjHeroine::CObjHeroine()
{
	//Heroine�̃w�b�_�[��������킩��
	m_sp = false;
	key_flag = 1;
	sp_flag = false;
	m_key_control = true;
}


//�C�j�V�����C�Y
void CObjHeroine::Init()
{
	
}

//�A�N�V����
void CObjHeroine::Action()
{
	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	CObjBlock* block = (CObjBlock*)Objs::GetObj(OBJ_BLOCK);


	if (hero->GetBT() == 17)
	{
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

//�h���[
void CObjHeroine::Draw()
{
	////�`��J���[���@R=RED G=Green B=Blue A=alpha(���ߏ��)
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`���\���ʒu

	setlocale(LC_ALL, "Japanese");
	
	wifstream fin(L"��b.txt",ios::in);

	//--------------------------�e�X�g
	ifstream ifs;
	char str2[32];
	ifs.open(L"��b.txt",ios::in);
	ifs >> str2;
	sprintf_s(str2,"%s\n", str2);
	//Font::StrDraw(str2, 50.0f, 500, 25, c);// X  Y  �傫�� 
	ifs.close();
	//-----------------------------

	

	if (m_sp == 1)
	{

		wchar_t str1[32];
		fin >> str1;
		//swprintf_s(str1,L"%s\n", str1);
		//Font::StrDraw(str1, 50.0f, 500, 25, c);// X  Y  �傫�� 

		sp_flag == true;
		//Font::StrDraw(L"���̎q:�悤�����o�[��,���̎q�Ɉ����t���Ɖ�b���i�ނ�", 50, 500, 25, c);//X Y �傫�� �J���[�H
		key_flag = 2;

	}
	if(m_sp == 2)
	{
		sp_flag == true;
		Font::StrDraw(L"���̎q�F�����͋��_�ł�", 100, 500, 30, c);
		key_flag = 3;

	}
	if (m_sp == 3)
	{
		sp_flag == true;
		Font::StrDraw(L"���̎q�FA�L�[�ŕ���\���EZ�L�[�Ŕ��ˁEQ�L�[�ŕ���؂�ւ�", 50, 500, 25, c);
		Font::StrDraw(L"            �X�y�[�X�L�[�Ń����[�h�ł�", 50, 530, 25, c);
		key_flag = 4;

		
	}
	if (m_sp == 4)
	{
		sp_flag == true;
		Font::StrDraw(L"���̎q�F���e�X�g�E�t�@�C���o�́E�`���C�i�^�E��", 100, 500, 30, c);
		key_flag = 5;

	}
	if (m_sp == 5)
	{
		sp_flag == true;
		Font::StrDraw(L"���̎q�F���_���łāA�G��|����", 100, 500, 30, c);
		key_flag = 6;

	}
	if (m_sp == 6)
	{
		sp_flag == true;
		Font::StrDraw(L"  ", 100, 500, 30, c);
		key_flag = 1;

	}

	fin.close();

}

//this->SetStatus(false);//���g�ɍ폜����
		//Font::Delete();

//
////��b�O���t�B�b�N
////�؂���ʒu�̐ݒ�
//src.m_top = 373.0f; //y
//src.m_left = 20.0f; //x
//src.m_right = 780.0f; //x
//src.m_bottom = 581.0f; //y
//
////�\���ʒu�̐ݒ�
//dst.m_top = 400.0f;
//dst.m_left = 40.0f;
//dst.m_right = 750.0f;
//dst.m_bottom = 550.0f;
//
////0�Ԗڂɓo�^�����O���t�B�b�N��stc�Edst�Ec�̏������ɕ`��
//Draw::Draw(10, &src, &dst, c, 0.0f);//0.0f�͊p�x��ς�����