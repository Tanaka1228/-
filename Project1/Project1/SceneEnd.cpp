//STL�f�o�b�O�@�\��OFF�ɂ���
#define _SECURE_SCL	(0)  
#define _HAS_ITERATOR_DEBUGGING	(0)  

//GameL�Ŏg�p����w�b�_�[
#include"GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"
#include"GameL/DrawTexture.h"


//�g�p����l�[���X�y�[�X
using namespace GameL;

//�g�p�w�b�_�[
#include"SceneMain.h"
#include"GameHead.h"

//�R���X�g���N�^
CSceneEnd::CSceneEnd()
{

}


//�f�X�g���N�^
CSceneEnd::~CSceneEnd()
{

}

//�Q�[�����C�����������\�b�h
void CSceneEnd::InitScene()
{
	//�^�C�g���I�u�W�F�N�g�쐬
	CObjEnd* obj = new CObjEnd();
	Objs::InsertObj(obj, OBJ_END, 10);

}

//�Q�[�����C�����s�����\�b�h
void CSceneEnd::Scene()
{

}