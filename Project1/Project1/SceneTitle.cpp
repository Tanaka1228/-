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
CSceneTitle::CSceneTitle()
{

}

//�f�X�g���N�^
CSceneTitle::~CSceneTitle()
{

}

//�Q�[�����C�����������\�b�h
void CSceneTitle::InitScene()
{


	float c[4] = { 1.0f,1.0f,1.0f,1.0f, };
	RECT_F src;
	RECT_F dst;

	CObjTitle* p = new CObjTitle();
	Objs::InsertObj(p, OBJ_TITLE, 1);

	//�^�C�g�����̕\��
	Font::StrDraw(L"ARTIFICIAL HUMAN ", 270, 100, 32, c);
	Font::StrDraw(L" �`���l���E�̗��`", 250, 150, 32, c);

	//�J�[�\���I���ʒu
	//main�Ɉڍs
	Font::StrDraw(L"��  �j���[�Q�[��", 250, 350, 32, c);

	//���[�h��ʂɈڍs
	Font::StrDraw(L"��     ���[�h    ", 250, 400, 32, c);

	//�ݒ��ʂɈڍs
	Font::StrDraw(L"��      �ݒ�     ", 250, 450, 32, c);

	//�V���b�g�_�E��
	Font::StrDraw(L"�� �V���b�g�_�E��", 250, 500, 32, c);

	//�^�C�g���I�u�W�F�N�g�쐬
	CObjTitle* obj = new CObjTitle();
	Objs::InsertObj(obj, OBJ_TITLE, 10);

	//�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԃɓo�^(512�~512�s�N�Z��)
	Draw::LoadImage(L"Sifi_town3_4n-480x270.png", 4, TEX_SIZE_512);//title�o�b�N�O���[��
	Draw::LoadImage(L"���j���[��� - �R�s�[ - �R�s�[.png", 6, TEX_SIZE_512);//�J�[�\��	
	//Draw::LoadImage(L"���j���[��� - �R�s�[.png", 5, TEX_SIZE_512);//�J�[�\��	
	
	//�I�u�W�F�N�g�쐬
	CObjTitleBackground* back = new CObjTitleBackground();
	Objs::InsertObj(back, OBJ_TITLE_BACKGROUND, 4), (back, OBJ_TITLE_BACKGROUND, 6)/*,(back, OBJ_TITLE_BACKGROUND, 5)*/;



}

//�Q�[�����C�����s�����\�b�h
void CSceneTitle::Scene()
{

}