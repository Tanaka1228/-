//�g�p����w�b�_�[�t�@�C��
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"

#include"GameHead.h"
#include"ObjHeroine.h"
#include"UtilityModule.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�R���X�g���N�^
CObjHeroine::CObjHeroine()
{
	
}


//�C�j�V�����C�Y
void CObjHeroine::Init()
{
	
}

//�A�N�V����
void CObjHeroine::Action()
{
	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);



}

//�h���[
void CObjHeroine::Draw()
{
	////�`��J���[���@R=RED G=Green B=Blue A=alpha(���ߏ��)
	//float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	//RECT_F src;//�`�挳�؂���ʒu
	//RECT_F dst;//�`���\���ʒu

	////�؂���ʒu�̐ݒ�
	//src.m_top = 0.0f; //y
	//src.m_left = 0.0f; //x
	//src.m_right = 139.0f; //x
	//src.m_bottom = 131.0f; //y

	////�\���ʒu�̐ݒ�
	//dst.m_top = 0.0f;
	//dst.m_left = 32.0f;
	//dst.m_right = 0.0f;
	//dst.m_bottom = 32.0f;

	////0�Ԗڂɓo�^�����O���t�B�b�N��stc�Edst�Ec�̏������ɕ`��
	//Draw::Draw(1, &src, &dst, c, 0.0f);
}