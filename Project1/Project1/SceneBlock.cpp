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
#include "SceneBlock.h"



//�R���X�g���N�^
CSceneBlock::CSceneBlock()
{
}

//�f�X�g���N�^
CSceneBlock::~CSceneBlock()
{
}



//�Q�[���X�e�[�W���������\�b�h
void CSceneBlock::InitCScene()
{

	//�O���O���t�B�b�N�t�@�C����ǂݍ���8�Ԃɓo�^(512�~512�s�N�Z��)���܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"���_�̑f��.png", 8, TEX_SIZE_512);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���9�Ԃɓo�^(512�~512�s�N�Z��)���܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"��.png", 9, TEX_SIZE_512);

	//block�I�u�W�F�N�g�쐬
	CObjBlock* objb = new CObjBlock();
	Objs::InsertObj(objb, OBJ_BLOCK, 3);

}


//�Q�[���X�e�[�W���s�����\�b�h
void CSceneBlock::Scene()
{
}
