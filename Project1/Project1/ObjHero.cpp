//�g�p����w�b�_�[�t�@�C��
#include"GameL\DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL\HitBoxManager.h"
#include"GameHead.h"
#include"ObjHero.h"
#include"CObjBullet.h"
#include"UtilityModule.h"


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�R���X�g���N�^
CObjHero::CObjHero(float x, float y)
{
	m_x = x;
	m_y = y;
}

//�C�j�V�����C�Y
void CObjHero::Init()
{
	m_vx = 0.0f; //�ړ��x�N�g��
	m_vy = 0.0f; //�ړ��x�N�g��
	m_posture = 0.0f; //�E����0.0f ������1.0f
	m_f = true; //�e�۔��ː���

	m_ani_time=0; //�A�j���[�V�����t���[������Ԋu
    m_ani_frame=1; //�`��t���[��

	//�����蔻��pHitBox���쐬
	Hits::SetHitBox(this, m_x, m_y, 62, 82, ELEMENT_PLAYER, OBJ_HERO, 1);
}

//�A�N�V����
void CObjHero::Action()
{
	//�ړ��x�N�g���̔j��
	m_vx = 0.0f;
	m_vy = 0.0f;

	//��l���̒e�۔���
	if (Input::GetVKey('Z') == true)
	{
		if (m_f == true)
		{
			
			//�e�ۃI�u�W�F�N�g�쐬
			CObjBullet* obj_b = new CObjBullet(m_x+30.0f, m_y+32.0f); //�e�ۃI�u�W�F�N�g�쐬
			Objs::InsertObj(obj_b, OBJ_BULLET, 3); //������e�ۃI�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

			m_f = false;
		}
	}
	else
	{
		m_f = true;
	}
	

	if (Input::GetVKey(VK_RIGHT) == true) //��l���ړ��L�[ �E
	{
		m_x += 5.0f;
		m_posture = 0.0f;

	}

	if (Input::GetVKey(VK_LEFT) == true) //��l���ړ��L�[ ��
	{
		m_x -= 5.0f;
		m_posture = 1.0f;
	}


	if (Input::GetVKey(VK_UP) == true) //��l���ړ��L�[ ��
	{
		m_y -= 5.0f;


		//float c[4] = { 1.0f,1.0f,1.0f,1.0f };
		//RECT_F src;
		//RECT_F dst;

		////�؂���ʒu�̐ݒ�
		//src.m_top = 0.0f;   //y
		//src.m_left = 237.0f;  //x
		//src.m_right = 420.0f; //x
		//src.m_bottom = 240.0f; //y

		////�\���ʒu�̐ݒ�
		//dst.m_top = 0.0f + m_y;
		//dst.m_left = (64.0f * m_posture) + m_x;
		//dst.m_right = (64.0f - 64.0f * m_posture) + m_x;
		//dst.m_bottom = 32.0f + 50.0f + m_y;

		//Draw::Draw(0, &src, &dst, c, 0.0f);
	}

	if (Input::GetVKey(VK_DOWN) == true) //��l���ړ��L�[ ��
	{
		m_y+= 5.0f;
	}

	//�ړ��x�N�g���̐��K��
	UnitVec(&m_vy, &m_vx);

	//HitBox�̓��e���X�V
	CHitBox* hit = Hits::GetHitBox(this); //�쐬����HitBox�X�V�p�̓���������o��
	hit->SetPos(m_x, m_y);                //���������V�����ʒu(��l���@�̈ʒu)���ɒu��������


	//�G�@�I�u�W�F�N�g�ƐڐG�������l���@�폜
	if (hit->CheckElementHit(ELEMENT_ENEMY) ==true)
	{
		this->SetStatus(false); //���g�ɍ폜���߂��o���B
		Hits::DeleteHitBox(this);//��l���@�����L����HitBox�ɍ폜����B

		//��l�����łŃQ�[���I�[�o�[�Ɉڍs����
		Scene::SetScene(new CSceneGameOver());
	}

}

//�h���[
void CObjHero::Draw()
{
	int AniData[4] = //��������o�^
	{
		0,1,2,3,
	};

	

	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	//�؂���ʒu�̐ݒ�
	src.m_top     = 0.0f;   //y
	src.m_left = 431.0f ;  //x
	src.m_right   = 599.0f; //x
	src.m_bottom = 240.0f; //y

	//�\���ʒu�̐ݒ�
	dst.m_top     = 0.0f  +  m_y;
	dst.m_left    = (64.0f*m_posture)  +  m_x;
	dst.m_right   = (64.0f - 64.0f * m_posture) +  m_x;
	dst.m_bottom  = 32.0f + 50.0f +  m_y;

	Draw::Draw(0, &src, &dst, c, 0.0f);
}