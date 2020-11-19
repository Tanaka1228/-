//STL�̃f�o�b�N�@�\��OFF�ɂ���
#define _SECURE_SCL (0);
#define _HAS_ITERATOR_DEBUGGING (0);

//GameL�Ŏg�p����w�b�_�[
#include"GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"
#include"GameL/DrawTexture.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p����w�b�_�[
#include"GameHead.h"
#include "SceneChinaTown.h"



//�R���X�g���N�^
CSceneChinaTown::CSceneChinaTown()
{
}

//�f�X�g���N�^
CSceneChinaTown::~CSceneChinaTown()
{
}



//�Q�[���X�e�[�W���������\�b�h
void CSceneChinaTown::InitScene()
{
	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԃɓo�^(512�~512�s�N�Z��)���܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"Hero.png", 0, TEX_SIZE_512);//��l���O���t�B�b�N

	//�O���O���t�B�b�N�t�@�C����ǂݍ���1�Ԃɓo�^(512�~512�s�N�Z��)���܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"�n���h�K��.png", 2, TEX_SIZE_512);//�n���h�K���O���t�B�b�N

	//�O���O���t�B�b�N�t�@�C����ǂݍ���3�Ԃɓo�^(512�~512�s�N�Z��)���܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"�e�ہQ�E.png", 3, TEX_SIZE_512);//�e�ۃO���t�B�b�N

		//�O���̃O���t�B�b�N�t�@�C����ǂݍ���10�Ԃɓo�^(512�~512)�͂��܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"�`���C�i�^�E��.pug", 10, TEX_SIZE_512);

	//��l���I�u�W�F�N�g�쐬
	CObjHero* obj = new CObjHero(400, 280); //��l���I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_HERO, 4); //�������l���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^


	//�`���C�i�^�E���I�u�W�F�N�g�쐬
	CObjChinaTown* objc = new CObjChinaTown(); //�`���C�i�^�E���I�u�W�F�N�g�쐬
	Objs::InsertObj(objc, OBJ_CHINA_TOWN, 5); //������`���C�i�^�E���I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	//�e�I�u�W�F�N�g�쐬
	CObjGun* objg = new CObjGun();
	Objs::InsertObj(objg, OBJ_GUN, 5);
}


//�Q�[���X�e�[�W���s�����\�b�h
void CSceneChinaTown::Scene()
{
}
