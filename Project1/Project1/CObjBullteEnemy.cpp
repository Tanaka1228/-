//�g�p����w�b�_�[�t�@�C��
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameHead.h"
#include"CObjBullteEnemy.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�R���X�g���N�^
CObjBulletEnemy::CObjBulletEnemy(float x, float y)//�R���X�g���N�^�Ŏ󂯎��������ϐ��ɑ���
{
	m_x = x;
	m_y = y;
	
}

//�C�j�V�����C�Y
void CObjBulletEnemy::Init()
{
	
}

//�A�N�V����
void CObjBulletEnemy::Action()
{
	
}

//�h���[
void CObjBulletEnemy::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	//�؂���ʒu�̐ݒ�@�O���t�B�b�N������Ă��Ȃ�
	//�e�ۂ��������ɂ��Ă���
	src.m_top = 0.0f;   //y
	src.m_left = 126.0f;  //x
	src.m_right = 96.0f; //x 
	src.m_bottom = 32.0f; //y

	//�\���ʒu�̐ݒ�
	dst.m_top = 0.0f + m_y;//�c�̈ʒu�ύX
	dst.m_left = 0.0f + m_x;
	dst.m_right = 45.0f + m_x;
	dst.m_bottom = 45.0f + m_y;

	Draw::Draw(3, &src, &dst, c, 0.0f);
}