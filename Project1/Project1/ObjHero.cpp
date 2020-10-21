//�g�p����w�b�_�[�t�@�C��
#include"GameL\DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameHead.h"
#include"ObjHero.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjHero::Init()
{
	m_x = 0;
	m_y = 0;
}

//�A�N�V����
void CObjHero::Action()
{
	if (Input::GetVKey(VK_RIGHT) == true) //��l���ړ��L�[ �E
	{
		m_x += 1.0f;
	}

	if (Input::GetVKey(VK_LEFT) == true) //��l���ړ��L�[ ��
	{
		m_x -= 1.0f;
	}

	if (Input::GetVKey(VK_UP) == true) //��l���ړ��L�[ ��
	{
		m_y -= 1.0f;
	}

	if (Input::GetVKey(VK_DOWN) == true) //��l���ړ��L�[ ��
	{
		m_y+= 1.0f;
	}


}

//�h���[
void CObjHero::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	//�؂���ʒu�̐ݒ�
	src.m_top     = 1.0f;   //y
	src.m_left    = 24.0f;  //x
	src.m_right   = 223.0f; //x
	src.m_bottom  = 240.0f; //y

	//�\���ʒu�̐ݒ�
	dst.m_top     = 0.0f  +  m_y;
	dst.m_left    = 0.0f  +  m_x;
	dst.m_right   = 32.0f +  m_x;
	dst.m_bottom  = 32.0f +  m_y;

	Draw::Draw(0, &src, &dst, c, 0.0f);
}