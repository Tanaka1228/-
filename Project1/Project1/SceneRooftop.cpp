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
#include "GameHead.h"
#include "SceneRooftop.h"



//�R���X�g���N�^
CSceneRooftop::CSceneRooftop()
{
}

//�f�X�g���N�^
CSceneRooftop::~CSceneRooftop()
{
}



//�Q�[���X�e�[�W���������\�b�h
void CSceneRooftop::InitScene()
{


	//�O���O���t�B�b�N�t�@�C����ǂݍ���9�Ԃɓo�^(512�~512�s�N�Z��)���܂�֌W�Ȃ��炵��
	Draw::LoadImage(L"����.png", 10, TEX_SIZE_512);

	//Stage�I�u�W�F�N�g�쐬
	CObjRooftop* objb = new CObjRooftop();
	Objs::InsertObj(objb, OBJ_ROOF_TOP, 3);

}


//�Q�[���X�e�[�W���s�����\�b�h
void CSceneRooftop::Scene()
{
}
