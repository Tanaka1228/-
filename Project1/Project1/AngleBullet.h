#pragma once
//�g�p����w�b�_�[
#include"GameL/SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g�F�e��
class CObjAngleBullet : public CObj
{
public:
	CObjAngleBullet(float x, float y,float r,float speed);
	~CObjAngleBullet() {};
	void Init();     //�C�j�V�����C�Y
	void Action();  //�A�N�V����
	void Draw();   //�h���[
private:
	float m_x;  //�e�ۂ�X�����̈ʒu�p�ϐ�
	float m_y;  //�e�ۂ�Y�����̈ʒu�p�ϐ�
	float m_vx; //�e�ۂ�X�����̑��x�p�ϐ�
	float m_vy;
	float m_speed;
};
