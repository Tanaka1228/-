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
	void SetX(float x) {}//�ʒu���X�ύX�p
	void SetY(float y) {}//�ʒu���Y�ύX�p
	void SetX2(float x) { m_px = x; }
	void SetY2(float y) { m_py = y; }
	void SetVY(float vy) { m_vy = vy; }
	float GetB();
private:
	float m_x;  //��l���@��x�����ړ��p�ϐ�
	float m_y;  //��l���@��y�����ړ��p�ϐ�
	float m_vx; //�ړ��x�N�g��
	float m_vy; //�ړ��x�N�g��
	float m_posture; //���p��
	float m_px;
	float m_py;
	bool m_f; //�e�۔��ː���p

	int m_ani_time=0; //�A�j���[�V�����t���[������Ԋu
	int m_ani_frame=0; //�`��t���[��
	int m_hp;//��l����HP
	int m_gun;//�e�̌���
	int m_bullet;//�e�ۂ̒e��
	int test;
	
};