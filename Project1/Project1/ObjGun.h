#pragma once
//�g�p����w�b�_�[
#include"GameL/SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g�F�e��
class CObjGun : public CObj
{
public:
	CObjGun();
	~CObjGun() {};
	void Init();     //�C�j�V�����C�Y
	void Action();  //�A�N�V����
	void Draw();   //�h���[

private:
	int m_gun;
	int m_ani_frame;
};
