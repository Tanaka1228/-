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
CSceneFin::CSceneFin()
{

}


//�f�X�g���N�^
CSceneFin::~CSceneFin()
{

}

//�Q�[�����C�����������\�b�h
void CSceneFin::InitScene()
{


	//�^�C�g���I�u�W�F�N�g�쐬
	CObjFin* obj = new CObjFin();
	Objs::InsertObj(obj, OBJ_FIN, 10);
}

//�Q�[�����C�����s�����\�b�h
void CSceneFin::Scene()
{

}