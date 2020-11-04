#pragma once
//�g�p����w�b�_�[
#include"GameL\SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g : ��l��
class CObjHero : public CObj
{
public:
	CObjHero(float x,float y);
	~CObjHero() {};
	void Init();        //�C�j�V�����C�Y
	void Action();      //�A�N�V����
	void Draw();        //�h���[

	float GetX();     //�ʒu���X�擾�p
	float GetY();     //�ʒu���Y�擾�p
	void SetX(float x);//�ʒu���X�ύX�p
	void SetY(float y);//�ʒu���Y�ύX�p

	float GetX2() { return m_x; }   //�ʒu���X2�擾�p�@�����蔻��
	float GetY2() { return m_y; }   //�ʒu���Y2�擾�p
	float GetVX() { return m_vy; }   //�ʒu���VX�擾�p
	float GetVY() { return m_vx; }   //�ʒu���VY�擾�p

	//m_x,m_y�̓A�N�V�����Q�[���w�쏑�Ō����Am_px,m_py�ł��B


	void SetX2(float x)  { m_x = x; }
	void SetY2(float y)  { m_y = y; }
	void SetVY(float vy) { m_vy = vy; }
	void SetVX(float vx) { m_vx = vx; }
	
	void SetUp(bool b) { m_hit_up = b; }
	void SetDown(bool b) { m_hit_down = b; }
	void SetLeft(bool b) { m_hit_left = b; }
	void SetRight(bool b) { m_hit_right = b; }

	float GetB();
private:
	float m_x;  //��l���@��x�����ړ��p�ϐ�
	float m_y;  //��l���@��y�����ړ��p�ϐ�
	float m_vx; //�ړ��x�N�g��
	float m_vy; //�ړ��x�N�g��
	float m_posture; //���p��
	bool m_f; //�e�۔��ː���p

	int m_ani_time=0; //�A�j���[�V�����t���[������Ԋu
	int m_ani_frame=0; //�`��t���[��
	int m_hp;//��l����HP
	int m_gun;//�e�̌���
	int m_bullet;//�e�ۂ̒e��
	int test;
	
	//block�Ƃ̏Փˏ�Ԋm�F�p
	bool m_hit_up;
	bool m_hit_down;
	bool m_hit_left;
	bool m_hit_right;
};