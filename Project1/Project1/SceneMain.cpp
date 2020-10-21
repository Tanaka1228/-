//STL�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCR (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameL�Ŏg�p����w�b�_�[
#include"GameL\DrawTexture.h"
#include"GameL\SceneObjManager.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p�w�b�_�[
#include"SceneMain.h"
#include"GameHead.h"


//�R���X�g���N�^
CSceneMain::CSceneMain()
{

}

//�f�X�g���N�^
CSceneMain::~CSceneMain()
{

}

//�Q�[�����C�����������\�b�h
void CSceneMain::InitScene()
{
	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԃɓo�^(512�~512�s�N�Z��)���܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"Hero.png", 0, TEX_SIZE_512);//��l���O���t�B�b�N

	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԃɓo�^(512�~512�s�N�Z��)���܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"Enemy1.png", 1, TEX_SIZE_512);//�G�O���t�B�b�N

	//��l���I�u�W�F�N�g�쐬
	CObjHero* obj = new CObjHero(); //��l���I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_HERO, 1); //�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	//�G�@�I�u�W�F�N�g�쐬
	CObjEnemy* obj_enemy = new CObjEnemy(); //�G�@�I�u�W�F�N�g�쐬
	Objs::InsertObj(obj_enemy, OBJ_ENEMY, 1); //������G�@�I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	
}

//�Q�[�����C�����s�����\�b�h
void CSceneMain::Scene()
{

}