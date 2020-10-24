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
	void SetX(float x);//�ʒu���X�ύX�p
	void SetY(float y);//�ʒu���Y�ύX�p
	float GetX();      //�ʒu���X�擾�p
	float GetY();      //�ʒu���Y�擾�p
private:
	float m_x;  //��l���@��x�����ړ��p�ϐ�
	float m_y;  //��l���@��y�����ړ��p�ϐ�
	float m_vx; //�ړ��x�N�g��
	float m_vy; //�ړ��x�N�g��
	float m_posture; //�p��
	bool m_f; //�e�۔��ː���p

	int m_ani_time; //�A�j���[�V�����t���[������Ԋu
	int m_ani_frame; //�`��t���[��
};