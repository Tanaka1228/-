//STL�̃f�o�b�N�@�\��OFF�ɂ���
#define _SEKURE_SCL (0);
#define _HAS_ITERATOR_DEBUGGING (0);

//GameL�Ŏg�p����w�b�_�[
#include"GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"
#include"GameL/DrawTexture.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;


//�g�p����w�b�_�[
#include"GameHead.h"
#include "SceneTyainataun.h"



//�R���X�g���N�^
CSceneTyainataun::CSceneTyainataun()
{
}
//�f�X�g���N�^
CSceneTyainataun::~CSceneTyainataun()
{
}

//�Q�[���X�e�[�W���������\�b�h
void CSceneTyainataun::InitScene()
{
	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԃɓo�^(512�~512)�͊֌W�Ȃ��炵��
	Draw::LoadImage(L"Hero.pug", 0, TEX_SIZE_512);//��l���O���t�B�b�N

	//�O���O���t�B�b�N�t�@�C����ǂݍ���1�Ԃɓo�^(512�~512)�͂��܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"�n���h�K��.pug", 2, TEX_SIZE_512);//�n���h�K���O���t�B�b�N

	//�O���̃O���t�B�b�N�t�@�C����ǂݍ���3�Ԃɓo�^(512�~512)�͂��܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"�e��_�E.pug", 3, TEX_SIZE_512);//�e�ۃO���t�B�b�N

	//�O���̃O���t�B�b�N�t�@�C����ǂݍ���10�Ԃɓo�^(512�~512)�͂��܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"�`���C�i�^�E��.pug", 10, TEX_SIZE_512);

	//��l���I�u�W�F�N�g�쐬
	CObjHero* obj = new CObjHero(400, 280);//��l���I�u�W�F�N�g�쐬
	Objs::InsertObj(obj, OBJ_HERO, 4);//�������l���̃I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

	//�`���C�i�^�E���I�u�W�F�N�g�쐬
	CObjTyainataun* objb = new CObjTyainataun();
	Objs::InsertObj(objb, OBJ_TYAINATAUN, 3);

}

//�Q�[���X�e�[�W���s�����\�b�h
void CSceneTyainataun::Scene()
{
}
