//�g�p����w�b�_�[�t�@�C��
#include"GameL/DrawTexture.h"
#include"GameL\HitBoxManager.h"
#include"GameHead.h"
#include"CObjAngleBullet.h"
#include"UtilityModule.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�R���X�g���N�^
CObjAngleBullet::CObjAngleBullet(float x, float y,float r,float speed)//�R���X�g���N�^�Ŏ󂯎��������ϐ��ɑ���
{
	m_x = x;
	m_y = y;
	m_r = r;
	m_speed = speed;
}

//�C�j�V�����C�Y
void CObjAngleBullet::Init()
{

	m_vx = cos(3.14f / 180.0f * m_r);
	m_vy = sin(3.14f / 180.0f * m_r);

	//�����蔻��pHitBox���쐬
	Hits::SetHitBox(this, m_x, m_y, 30, 22, ELEMENT_ENEMY, OBJ_ANGLE_BULLET, 1);//�ʒux �ʒu�� ����w �c��h
}

//�A�N�V����
void CObjAngleBullet::Action()
{
	//�a�@�̉���̏��
	CObjRooftop* rooftop = (CObjRooftop*)Objs::GetObj(OBJ_ROOF_TOP);


	//��l���@�ƗU���e�ۂŊp�x���Ƃ�

	CObjHero* obj = (CObjHero*)Objs::GetObj(OBJ_HERO);
	//�`���C�i�^�E��BOSS�̏��
	CObjChinaTownBoss* chinatownboss = (CObjChinaTownBoss*)Objs::GetObj(OBJ_CHINA_TOWN_BOSS);

	if (rooftop != nullptr)
	{
		//�a�@�̉���̏��
		CObjRooftop* rooftop = (CObjRooftop*)Objs::GetObj(OBJ_ROOF_TOP);

		//��l���@�����݂���ꍇ�A�U���p�x�̌v�Z����
		if (obj != nullptr)
		{
			float x = obj->GetX() - m_x;
			float y = obj->GetY() - m_y;
			float ar = GetAtan2Angle(x, -y);//��l���@�ƒe�ۂ̊p�x


			//�e�ۂ̌��݂̌����Ă���p�x�����
			float br = GetAtan2Angle(m_vx, -m_vy);



			//��l���@�ƓG�@�p�x�����܂�ɂ��������ꂽ��
			if (ar - br > 20)
			{
				//�ړ���������l���@�̕����ɂ���
				m_vx = cos(3.14 / 180 * ar);
				m_vy = -sin(3.14 / 180 * ar);
			}

			float r = 3.14 / 180.0f;//�p�x�P��

			if (ar < br)
			{
				//�ړ������Ɂ{�P��������
				m_vx = m_vx * cos(r) - m_vy * sin(r);
				m_vy = m_vy * cos(r) + m_vx * sin(r);
			}
			else
			{
				//�ړ�������-�P��������
				m_vx = m_vx * cos(-r) - m_vy * sin(-r);
				m_vy = m_vy * cos(-r) + m_vx * sin(-r);
			}
			UnitVec(&m_vx, &m_vy);
			//�ړ�
			m_x += m_vx * 5.0f;
			m_y += m_vy * 5.0f;


			//�G�@�e�ۂ�HitBox�X�V�p�|�C���^�[�擾
			CHitBox* hit = Hits::GetHitBox(this); //HitBox�̈ʒu��e�ۂ̈ʒu�ɍX�V
			hit->SetPos(m_x + rooftop->GetScroll(), m_y + rooftop->GetScroll2());


			//�G�@�����S�ɗ̈�O�ɏo����G�@��j������
			bool check = CheckWindow(m_x, m_y, -32.0f, -32.0f, 2655.0f, 1057.0f);

			if (check == false)
			{
				this->SetStatus(false);//���g�ɍ폜����
				Hits::DeleteHitBox(this);
			}

			//�G�@�I�u�W�F�N�g�ƐڐG������e�ۍ폜
			if (hit->CheckObjNameHit(OBJ_HERO) != nullptr)
			{
				this->SetStatus(false);   //���g�ɍ폜���߂��o���B
				Hits::DeleteHitBox(this); //�e�ۂ����L����HitBox�ɍ폜����B
			}
		}
	}
	if (chinatownboss != nullptr)
	{
		//�a�@�̉���̏��
		CObjChinaTownBoss* chinatownboss = (CObjChinaTownBoss*)Objs::GetObj(OBJ_CHINA_TOWN_BOSS);

		//��l���@�����݂���ꍇ�A�U���p�x�̌v�Z����
		if (obj != nullptr)
		{
			float x = obj->GetX() - m_x;
			float y = obj->GetY() - m_y;
			float ar = GetAtan2Angle(x, -y);//��l���@�ƒe�ۂ̊p�x


			//�e�ۂ̌��݂̌����Ă���p�x�����
			float br = GetAtan2Angle(m_vx, -m_vy);



			//��l���@�ƓG�@�p�x�����܂�ɂ��������ꂽ��
			if (ar - br > 20)
			{
				//�ړ���������l���@�̕����ɂ���
				m_vx = cos(3.14 / 180 * ar);
				m_vy = -sin(3.14 / 180 * ar);
			}

			float r = 3.14 / 180.0f;//�p�x�P��

			if (ar < br)
			{
				//�ړ������Ɂ{�P��������
				m_vx = m_vx * cos(r) - m_vy * sin(r);
				m_vy = m_vy * cos(r) + m_vx * sin(r);
			}
			else
			{
				//�ړ�������-�P��������
				m_vx = m_vx * cos(-r) - m_vy * sin(-r);
				m_vy = m_vy * cos(-r) + m_vx * sin(-r);
			}
			UnitVec(&m_vx, &m_vy);
			//�ړ�
			m_x += m_vx * 5.0f;
			m_y += m_vy * 5.0f;


			//�G�@�e�ۂ�HitBox�X�V�p�|�C���^�[�擾
			CHitBox* hit = Hits::GetHitBox(this); //HitBox�̈ʒu��e�ۂ̈ʒu�ɍX�V
			hit->SetPos(m_x + chinatownboss->GetScroll(), m_y + chinatownboss->GetScroll2());


			//�G�@�����S�ɗ̈�O�ɏo����G�@��j������
			bool check = CheckWindow(m_x, m_y, -32.0f, -32.0f, 4000.0f, 4000.0f);

			if (check == false)
			{
				this->SetStatus(false);//���g�ɍ폜����
				Hits::DeleteHitBox(this);
			}

			//�G�@�I�u�W�F�N�g�ƐڐG������e�ۍ폜
			if (hit->CheckObjNameHit(OBJ_HERO) != nullptr)
			{
				this->SetStatus(false);   //���g�ɍ폜���߂��o���B
				Hits::DeleteHitBox(this); //�e�ۂ����L����HitBox�ɍ폜����B
			}
		}


	}
}

//�h���[
void CObjAngleBullet::Draw()
{

	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	//�؂���ʒu�̐ݒ�@�O���t�B�b�N������Ă��Ȃ�
	src.m_top = 12.0f;   //y
	src.m_left = 8.0f;  //x
	src.m_right = 26.0f; //x 
	src.m_bottom = 19.0f; //y

	////�\���ʒu�̐ݒ�
	//dst.m_top = 5.0f + m_y;//�c�̈ʒu�ύX
	//dst.m_left = 0.0f + m_x;
	//dst.m_right = 30.0f + m_x;
	//dst.m_bottom = 19.0f + m_y;
//�a�@�̉���̏��
	CObjRooftop* rooftop = (CObjRooftop*)Objs::GetObj(OBJ_ROOF_TOP);

	//�`���C�i�^�E��BOSS�̏��
	CObjChinaTownBoss* chinatownboss = (CObjChinaTownBoss*)Objs::GetObj(OBJ_CHINA_TOWN_BOSS);

	if (rooftop != nullptr)
	{
		//�\���ʒu�̐ݒ�
		dst.m_top = 0.0f + m_y + rooftop->GetScroll2();
		dst.m_left = 0.0f + m_x + rooftop->GetScroll();
		dst.m_right = 45.0f + m_x + rooftop->GetScroll();
		dst.m_bottom = 32.0f + m_y + rooftop->GetScroll2();

		Draw::Draw(3, &src, &dst, c, m_r);
	}

	if (chinatownboss != nullptr)
	{
		//�\���ʒu�̐ݒ�
		dst.m_top = 0.0f + m_y + chinatownboss->GetScroll2();
		dst.m_left = 0.0f + m_x + chinatownboss->GetScroll();
		dst.m_right = 45.0f + m_x + chinatownboss->GetScroll();
		dst.m_bottom = 32.0f + m_y + chinatownboss->GetScroll2();

		Draw::Draw(3, &src, &dst, c, m_r);
	}
}