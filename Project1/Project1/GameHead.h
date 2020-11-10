#pragma once

//�I�u�W�F�N�g�l�[��------------------------------
enum OBJ_NAME
{
	OBJ_NO_NAME,	//�I�u�W�F�N�g������(�֎~)
					//�Q�[���Ŏg���I�u�W�F�N�g�̖��O
					//OBJ_�����ƕ\�L
	OBJ_MAIN,	
	OBJ_HERO, //��l��
	OBJ_TITLE,//�Q�[���^�C�g��
	OBJ_ENEMY,//�G�P
	OBJ_BULLET,//�e��
	OBJ_GAME_OVER,//�Q�[���I�[�o�[
	OBJ_TITLE_BACKGROUND,//�Q�[���^�C�g���̔w�i
	OBJ_ATTACK_ENEMY,//�U���G�@
	OBJ_BULLET_ENEMY,//�e�ۓG�@
	OBJ_HOMING_ENEMY,//�U���G�@
	OBJ_SIN_ENEMY,//�J�[�u�G�@
	OBJ_DIFFUSION_ENEMY,//
	OBJ_ANGLE_BULLET,
	OBJ_HOMING_BULLET,
	OBJ_STAGE,//
	OBJ_BLOCK,//���_
	OBJ_END,
	OBJ_FIN,
	OBJ_MANU,//���j���[
	OBJ_ROOF_TOP,//�a�@����
	OBJ_INSTITUTE_BOSS,//�������{�X
	OBJ_HEROINE,//�q���C��
};
//------------------------------------------------

//�����蔻�葮��----------------------------------
enum HIT_ELEMENTS
{
	ELEMENT_NULL,//�������� �S�Ă̑����Ɠ����蔻�肪���s�����
	//�ȉ��@�����������m�ł͓����蔻��͎��s����Ȃ�
	//�����͒ǉ��\�����A�f�o�b�N���̐F�͏����ݒ蕪��������
	ELEMENT_PLAYER,
	ELEMENT_ENEMY,
	ELEMENT_ITEM,
	ELEMENT_MAGIC,
	ELEMENT_FIELD,
	ELEMENT_RED,
	ELEMENT_GREEN,
	ELEMENT_BLUE,
	ELEMENT_BLACK,
	ELEMENT_WHITE,
};
//------------------------------------------------

//------------------------------------------------
//�Z�[�u�����[�h�ƃV�[���Ԃ̂���肷��f�[�^
struct UserData
{
	int mSeveData;	//�T���v���Z�[�u�f�[�^
	
};
//------------------------------------------------


//�Q�[�����Ŏg�p�����O���[�o���ϐ��E�萔�E��--



//------------------------------------------------
//�Q�[�����Ŏg�p����N���X�w�b�_------------------


//------------------------------------------------

//�Q�[���V�[���I�u�W�F�N�g�w�b�_------------------
#include"ObjMain.h"
#include"ObjHero.h"
#include"ObjTitle.h"
#include"ObjEnemy.h"
#include"CObjBullet.h"
#include"ObjGameOver.h"
#include"ObjTitleBackground.h"
#include"ObjAttackEnemy.h"
#include"CObjBulletEnemy.h"
#include"CObjHomingEnemy.h"
#include"CObjSinEnemy.h"
#include"ObjDiffusionEnemy.h"
#include"CObjAngleBullet.h"
#include"CObjHomingBullet.h"
#include"ObjBlock.h"
#include"ObjStage.h"
#include"ObjEnd.h"
#include"ObjFin.h"
#include"ObjMenu.h"
#include"ObjRooftop.h"
#include"ObjInstituteBoss.h"
#include"ObjHeroine.h"
//------------------------------------------------

//�Q�[���V�[���N���X�w�b�_------------------------
#include"SceneTitle.h"
#include"SceneMain.h"
#include"SceneStage.h"
#include"SceneGameOver.h"
#include"SceneEnd.h"
#include"SceneFin.h"
#include"SceneBlock.h"
#include"SceneRooftop.h"
#include"SceneInstituteBoss.h"
//-----------------------------------------------

//�V�[���X�^�[�g�N���X---------------------------
////�Q�[���J�n���̃V�[���N���X�o�^
//#define SET_GAME_START CSceneGameOver
#define SET_GAME_START CSceneTitle 
//#define SET_GAME_START CSceneEnd 
//#define SET_GAME_START CSceneFin
//#define SET_GAME_START CSceneMain
//#define SET_GAME_START CSceneStage
//-----------------------------------------------