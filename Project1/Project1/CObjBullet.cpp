//�g�p����w�b�_�[�t�@�C��
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameHead.h"
#include"CObjBullet.h"
#include"ObjHero.h"
#include"UtilityModule.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�R���X�g���N�^
CObjBullet::CObjBullet(float x, float y)//�R���X�g���N�^�Ŏ󂯎��������ϐ��ɑ���
{
	m_x = x;
	m_y = y;
	m_vx = 0.0f;//���x�p�ϐ�
	m_vy = 0.0f;
}


//�C�j�V�����C�Y
void CObjBullet::Init()
{
	m_vx = 0.0f;
	m_vy = 0.0f;

	//�����蔻��pHitBox���쐬
	Hits::SetHitBox(this, m_x, m_y, 32, 32, ELEMENT_PLAYER, OBJ_BULLET, 1);
}

//�A�N�V����
void CObjBullet::Action()
{

	CObjHero* obj = (CObjHero*)Objs::GetObj(OBJ_HERO);
	float bx = obj->GetB();

	if (bx == 2)
	{
		m_vx += 6.0f;
		m_x += m_vx;
	}
	else if (bx == 3)
	{
		m_vx -= 6.0f;
		m_x   += m_vx;
	}

	//�e�ۂ�HitBox�X�V�p�|�C���^�[�擾
	CHitBox* hit = Hits::GetHitBox(this); //HitBox�̈ʒu��e�ۂ̈ʒu�ɍX�V
	hit->SetPos(m_x, m_y);

	

	//�G�@�����S�ɗ̈�O�ɏo����G�@��j������
	bool check = CheckWindow(m_x, m_y, -32.0f, -32.0f, 800.0f, 600.0f);
	if (check == false)
	{
		this->SetStatus(false);//���g�ɍ폜����
		Hits::DeleteHitBox(this);
	}

	//�G�@�I�u�W�F�N�g�ƐڐG������e�ۍ폜
	if (hit->CheckObjNameHit(OBJ_ENEMY) != nullptr)
	{
		this->SetStatus(false);   //���g�ɍ폜���߂��o���B
		Hits::DeleteHitBox(this); //�e�ۂ����L����HitBox�ɍ폜����B
	}
}

//�h���[
void CObjBullet::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

		
	//�؂���ʒu�̐ݒ�@�O���t�B�b�N������Ă��Ȃ�	
	src.m_top = 0.0f;   //y
	src.m_left = 0.0f;  //x
	src.m_right = 32.0f; //x 
	src.m_bottom = 32.0f; //y

	//�\���ʒu�̐ݒ�
	dst.m_top = 15.0f + m_y;//�c�̈ʒu�ύX
	dst.m_left = 0.0f + m_x;
	dst.m_right = 45.0f + m_x;
	dst.m_bottom = 45.0f + m_y;
	


	Draw::Draw(3, &src, &dst, c, 0.0f);
}