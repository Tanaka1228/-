//GameL�Ŏg�p����w�b�_�[
#include"GameL\DrawFont.h"
#include"GameL\WinInputs.h"

#include"GameHead.h"
#include"ObjTitle.h"

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
	//�o�͂����镶���̃O���t�B�b�N���쐬
	Font::SetStrTex(L"ARTIFICIAL HUMAN �`���l���E�̗��`");
}