

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
	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	CObjDrugCampany* drug = (CObjDrugCampany*)Objs::GetObj(OBJ_DRUG_CAMPANY);//�����Ђ̈�K


	if (drug != nullptr)
	{
		if (hero->GetBT() == 10)
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

	}







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



}

