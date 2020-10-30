//�g�p����w�b�_�[�t�@�C��
#include"GameL\DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL\HitBoxManager.h"
#include"GameHead.h"
#include"ObjHero.h"
#include"CObjBullet.h"
#include"UtilityModule.h"
#include"GameL/DrawFont.h"


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�ʒu���X�ύX�p
void CObjHero::SetX(float x)
{
	m_x = x;
}
//�ʒu���Y�ύX�p
void CObjHero::SetY(float y)
{
	m_y = y;
}
//�ʒu���X�擾�p
float CObjHero::GetX()
{
	return m_x;
}
//�ʒu���Y�擾�p
float CObjHero::GetY()
{
	return m_y;
}

float CObjHero::GetB()//�e�ی����擾�p
{
	return m_ani_frame;
}

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
    m_ani_frame=2; //�`��t���[��

	m_hp = 10;//��l����HP
	m_gun = 0;//�e�̍\���Ă��邩�@0���\���Ă��Ȃ� �@1���\���Ă���

	//�����蔻��pHitBox���쐬
	Hits::SetHitBox(this, m_x, m_y, 30, 32, ELEMENT_PLAYER, OBJ_HERO, 1);
}

//�A�N�V����
void CObjHero::Action()
{
	//�ړ��x�N�g���̔j��
	m_vx = 0.0f;
	m_vy = 0.0f;



	if (Input::GetVKey('A') == true)
	{
		m_gun = 1;//�\���Ă���
	}
	else if (Input::GetVKey('Q') == true)
	{
		m_gun = 0;//�\���Ă��Ȃ�
	}

		//��l���̒e�۔���
		if (Input::GetVKey('Z') == true&&m_gun==1)
		{

			if (m_f == true)
			{
				
				if (m_ani_frame == 2)//�E
				{
					//�e�ۃI�u�W�F�N�g�쐬
					CObjBullet* obj_b = new CObjBullet(m_x + 0.0f, m_y + 0.0f); //�e�ۃI�u�W�F�N�g�쐬
					Objs::InsertObj(obj_b, OBJ_BULLET, 4); //������e�ۃI�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^
					
				}
				if (m_ani_frame == 3)//��
				{
					//�e�ۃI�u�W�F�N�g�쐬
					CObjBullet* obj_b = new CObjBullet(m_x + 0.0f, m_y + 0.0f); //�e�ۃI�u�W�F�N�g�쐬
					Objs::InsertObj(obj_b, OBJ_BULLET, 4);
				}
				if (m_ani_frame == 1)//���
				{
					//�e�ۃI�u�W�F�N�g�쐬
					CObjBullet* obj_b = new CObjBullet(m_x + 0.0f, m_y + 0.0f); //�e�ۃI�u�W�F�N�g�쐬
					Objs::InsertObj(obj_b, OBJ_BULLET, 4);
				}
				if (m_ani_frame == 0)//�O
				{
					//�e�ۃI�u�W�F�N�g�쐬
					CObjBullet* obj_b = new CObjBullet(m_x + 0.0f, m_y + 0.0f); //�e�ۃI�u�W�F�N�g�쐬
					Objs::InsertObj(obj_b, OBJ_BULLET, 4);
				}

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
		m_ani_frame = 2;
		if (Input::GetVKey(VK_SHIFT) == true)//���鏈��
		{
			m_x += 5.0f;
		}
	}

	if (Input::GetVKey(VK_LEFT) == true) //��l���ړ��L�[ ��
	{
		m_x -= 5.0f;
		m_posture = 1.0f;
		m_ani_frame = 3;
		if (Input::GetVKey(VK_SHIFT) == true)//���鏈��
		{
			m_x -= 5.0f;
		}
	}


	if (Input::GetVKey(VK_UP) == true) //��l���ړ��L�[ ��
	{
		m_y -= 5.0f;
		m_ani_frame = 1;
		if (Input::GetVKey(VK_SHIFT) == true)//���鏈��
		{
			m_y -= 5.0f;
		}

	}
	if (Input::GetVKey(VK_DOWN) == true) //��l���ړ��L�[ ��
	{
		m_y+= 5.0f;
		m_ani_frame = 0;
		if (Input::GetVKey(VK_SHIFT) == true)//���鏈��
		{
			m_y += 5.0f;
		}
	}

	//�ړ��x�N�g���̐��K��
	UnitVec(&m_vy, &m_vx);

	//HitBox�̓��e���X�V
	CHitBox* hit = Hits::GetHitBox(this); //�쐬����HitBox�X�V�p�̓���������o��
	hit->SetPos(m_x, m_y);                //���������V�����ʒu(��l���@�̈ʒu)���ɒu��������


	//�G�@�I�u�W�F�N�g�ƐڐG�������l���@�폜
	if (hit->CheckElementHit(ELEMENT_ENEMY) ==true)
	{
		m_hp -= 1;
	
	}
	
	if (m_hp <= 0)//HP���O�ɂȂ�����j��
	{
		this->SetStatus(false);
		Hits::DeleteHitBox(this);

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

	if (m_ani_frame == 2) //�E
	{
	
		//�؂���ʒu�̐ݒ�
		src.m_top = 0.0f;   //y
		src.m_left = 431.0f; //x
		src.m_right = 599.0f; //x
		src.m_bottom = 240.0f; //y


	}
	if (m_ani_frame == 1) //��
	{
		//�؂���ʒu�̐ݒ�
		src.m_top = 0.0f;   //y
		src.m_left = 237.0f; //x
		src.m_right =417.0f; //x
		src.m_bottom = 240.0f; //y
	}

	if (m_ani_frame == 0) //�O
	{
		//�؂���ʒu�̐ݒ�
		src.m_top = 0.0f;   //y
		src.m_left = 20.0f; //x
		src.m_right = 220.0f; //x
		src.m_bottom = 240.0f; //y
	}

	if (m_ani_frame == 3)//��
	{
		//�؂���ʒu�̐ݒ�
		src.m_top = 0.0f;   //y
		src.m_left = 631.0f; //x
		src.m_right = 794.0f; //x
		src.m_bottom = 240.0f; //y
	}
	
	//�\���ʒu�̐ݒ�
	dst.m_top   = 0.0f + m_y;
	dst.m_left  = 0.0f + m_x;
	dst.m_right = 30.0f+ m_x;
	dst.m_bottom= 32.0f+ m_y;

	Draw::Draw(0, &src, &dst, c, 0.0f);

	if (m_gun==1)//�n���h�K��
	{
		Font::StrDraw(L"�\���Ă���", m_x, -32 + m_y, 20, c);
		if (m_ani_frame == 2)
		{
			float c[4] = { 1.0f,1.0f,1.0f,1.0f };
			RECT_F src;
			RECT_F dst;

			//�؂���ʒu�̐ݒ�
			src.m_top = 0.0f;   //y
			src.m_left = 0.0f; //x
			src.m_right = 32.0f; //x
			src.m_bottom = 32.0f; //y

			//�\���ʒu�̐ݒ�
			dst.m_top = 10.0f + m_y;
			dst.m_left = 20.0f + m_x;
			dst.m_right = 60.0f + m_x;
			dst.m_bottom = 50.0f + m_y;

			Draw::Draw(2, &src, &dst, c, 0.0f);
		}
		else if (m_ani_frame == 3)//��
		{
			//�؂���ʒu�̐ݒ�
			src.m_top = 0.0f;   //y
			src.m_left = 33.0f; //x
			src.m_right = 61.0f; //x
			src.m_bottom = 18.0f; //y

			//�\���ʒu�̐ݒ�
			dst.m_top = 10.0f + m_y;
			dst.m_left = -28.0f + m_x;
			dst.m_right = 0.0f+9.0f + m_x;
			dst.m_bottom = 32.0f + m_y;

			Draw::Draw(2, &src, &dst, c, 0.0f);
		}
		else if (m_ani_frame == 0)//����
		{
			//�؂���ʒu�̐ݒ�
			src.m_top = 3.0f;   //y
			src.m_left = 74.0f; //x
			src.m_right = 83.0f; //x
			src.m_bottom = 21.0f; //y

			//�\���ʒu�̐ݒ�
			dst.m_top = 10.0f + m_y;
			dst.m_left = 5.0f + m_x;
			dst.m_right = 20.0f + m_x;
			dst.m_bottom = 32.0f + m_y;

			Draw::Draw(2, &src, &dst, c, 0.0f);
		}
	}
	else if (m_gun == 0)
	{
		Font::StrDraw(L"�\���Ă��Ȃ�", m_x, -32 + m_y, 20, c);

		if (Input::GetVKey('Z') == true)
		{
			Font::StrDraw(L"�L�b�N�e�X�g", m_x, 32+m_y, 20, c);
		}
	}
}

////�\���ʒu�̐ݒ�
//dst.m_top = 0.0f + m_y;
//dst.m_left = (64.0f * m_posture) + m_x;
//dst.m_right = (64.0f - 64.0f * m_posture) + m_x;
//dst.m_bottom = 32.0f + 50.0f + m_y;