//�g�p����w�b�_�[�t�@�C��
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameL/DrawFont.h"
#include"GameL/WinInputs.h"

#include"GameHead.h"
#include"ObjChinaMob.h"
#include"UtilityModule.h"
#include<fstream>


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�R���X�g���N�^
CObjChinaMob::CObjChinaMob()
{
	//Heroine�̃w�b�_�[��������킩��
	m_sp = false;
	key_flag = 1;
	sp_flag = false;
	m_key_control = true;
}


//�C�j�V�����C�Y
void CObjChinaMob::Init()
{

}

//�A�N�V����
void CObjChinaMob::Action()
{
	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);

	if (hero->GetBT() ==99)
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
void CObjChinaMob::Draw()
{
	////�`��J���[���@R=RED G=Green B=Blue A=alpha(���ߏ��)
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`���\���ʒu

	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	


	if (m_sp == 1)//�G���^�[�L�[����񉟂����Ƃ�
	{
		sp_flag == true;

		ifstream fin("��b.txt", ios::in);//�e�L�X�g�f�[�^����ǂݍ���
		char str1[64];//�����̔z��
		wchar_t wstr1[64];
		fin.seekg(0, ios::cur);//0�o�C�g���i�߂�
		fin >> str1;//str1�Ƀe�L�X�g������

		sprintf_s(str1, "%s", str1);//�o��
		MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, str1, 64, wstr1, 64);//���������j�R�[�h�ɕϊ�����
		Font::StrDraw(wstr1, 50.0f, 480, 25, c);// X  Y  �傫��     


		key_flag = 2;
		fin.close();//�t�@�C�������
	}
	

}
