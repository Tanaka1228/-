#pragma once
//�g�p����w�b�_�[
#include"GameL\SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g : ��l��
class CObjHero : public CObj
{
public:
	CObjHero() {};
	~CObjHero() {};
	void Init(); //�C�j�V�����C�Y
	void Action(); //�A�N�V����
	void Draw(); //�h���[
private:
	float m_x;  //��l���@��x�����ړ��p�ϐ�
};