//�g�p����w�b�_�[�t�@�C��
#include"GameL\DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL\HitBoxManager.h"
#include"GameHead.h"
#include"ObjHero.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjHero::Init()
{
	m_x = 0;
	m_y = 0;

	//�����蔻��pHitBox���쐬
	Hits::SetHitBox(this, m_x, m_y, 223, 240, ELEMENT_PLAYER, OBJ_HERO, 1);
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

	//HitBox�̓��e���X�V
	CHitBox* hit = Hits::GetHitBox(this); //�쐬����HitBox�X�V�p�̓���������o��
	hit->SetPos(m_x, m_y);                //���������V�����ʒu(��l���@�̈ʒu)���ɒu��������

	//�G�@�I�u�W�F�N�g�ƐڐG�������l���@�폜
	if (hit->CheckObjNameHit(OBJ_ENEMY) != nullptr)
	{
		this->SetStatus(false); //���g�ɍ폜���߂��o���B
		Hits::DeleteHitBox(this);//��l���@�����L����HitBox�ɍ폜����B
	}

}

//�h���[
void CObjHero::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	src.m_top     = 1.0f;   //y
	src.m_left    = 24.0f;  //x
	src.m_right   = 223.0f; //x
	src.m_bottom  = 240.0f; //y

	dst.m_top     = 0.0f  +  m_y;
	dst.m_left    = 0.0f  +  m_x;
	dst.m_right   = 32.0f +  m_x;
	dst.m_bottom  = 32.0f +  m_y;

	Draw::Draw(0, &src, &dst, c, 0.0f);
}