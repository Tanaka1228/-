//�g�p����w�b�_�[�t�@�C��
#include"GameL\DrawTexture.h"
#include"GameHead.h"
#include"ObjHero.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjHero::Init()
{

}

//�A�N�V����
void CObjHero::Action()
{

}

//�h���[
void CObjHero::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	src.m_top     = 1.0f; //y
	src.m_left    = 24.0f; //x
	src.m_right   = 223.0f; //x
	src.m_bottom  = 240.0f; //y

	dst.m_top     = 0.0f;
	dst.m_left    = 0.0f;
	dst.m_right   = 32.0f;
	dst.m_bottom  = 32.0f;

	Draw::Draw(0, &src, &dst, c, 0.0f);
}