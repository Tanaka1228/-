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
	OBJ_END,
	OBJ_FIN,
	OBJ_MANU,//���j���[
	OBJ_HEROINE,//�q���C��
	OBJ_GUN,//����e
	OBJ_ASS_BULLET,//�A�T���g���C�t���̒e��

	//------�}�b�v-------------------------------------------
	OBJ_BLOCK,//���_
	OBJ_CHINA_TOWN_BOSS,//�`���C�i�^�E���̃{�X��t�B�[���h
	OBJ_CHINA_TOWN,//�`���C�i�^�E��
	OBJ_CHINA_TOWN_BOSS_BOSS,//�`���C�i�^�E���̃{�X��t�B�[���hBOSS
	

	OBJ_INSTITUTE_BOSS,//研究所ボス
	OBJ_INSTITUTE,//研究所
	OBJ_INSTITUTE1,//研究所部屋１
	OBJ_INSTITUTE2,//研究部屋2
	OBJ_INSTITUTE_BOSS_BOSS,//研究所ボスボス
	//--------------病院---------------------
	OBJ_ROOF_TOP,//病院屋上
	OBJ_ROOF_TOP_BOSS,//病院の屋上BOSS
	OBJ_HOSPITAL,//病院1階
	OBJ_HOSPITAL2,//病院2階
	OBJ_HOSPITAL3,//病院3階
	OBJ_TEMPLATE_ROOM,//病院の部屋
	OBJ_EVENT_ROOM,//病院のイベント部屋
	OBJ_OPE_ROOM,//病院の手術室
	OBJ_EX_ROOM,//病院の診察室
	OBJ_XRAY_ROOM,//病院のレントゲン室
	//----------------------------------------

	OBJ_DRUG_CAMPANY,//������
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


//�Q�[����Ŏg�p�����O���[�o���ϐ��E�萔�E��--



//------------------------------------------------
//�Q�[����Ŏg�p����N���X�w�b�_------------------


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
#include"ObjEnd.h"
#include"ObjFin.h"
#include"ObjMenu.h"
#include"ObjRooftop.h"
#include"ObjInstituteBoss.h"
#include"ObjHeroine.h"
#include"ObjChinaTown.h"
#include"CObjRooftopBoss.h"
#include"ObjGun.h"
#include"CObjAssBullet.h"
#include"ObjDrugCampany.h"
#include"ObjHospital.h"
#include"ObjHospital2.h"
#include"ObjHospital3.h"
#include"ObjTemplateRoom.h"
#include"ObjChinaTownBoss.h"
#include"ObjInstitute.h"
#include"ObjEventRoom.h"
#include"ObjOpeRoom.h"
#include"ObjExRoom.h"
#include"ObjXRayRoom.h"
#include"ObjInstitute1.h"
#include"ObjInstitute2.h"
#include"ObjInstitute3.h"
#include"CObjChinaTownBossBoss.h"
#include"CObjInstituteBossBoss.h"
//------------------------------------------------

//�Q�[���V�[���N���X�w�b�_------------------------
#include"SceneTitle.h"
#include"SceneMain.h"
#include"SceneGameOver.h"
#include"SceneEnd.h"
#include"SceneFin.h"
#include"SceneBlock.h"
#include"SceneRooftop.h"
#include"SceneInstituteBoss.h"
#include"SceneChinaTown.h"
#include"SceneDrugCampany.h"
#include"SceneHospital.h"
#include"SceneHospital2.h"
#include"SceneHospital3.h"
#include"SceneTemplateRoom.h"
#include"SceneInstitute.h"
#include"SceneChinaTownBoss.h"
#include"SceneEventRoom.h"
#include"SceneOpeRoom.h"
#include"SceneExRoom.h"
#include"SceneXRayRoom.h"
#include"SceneInstitute1.h"
#include"SceneInstitute2.h"
#include"SceneInstitute3.h"

//-----------------------------------------------

//�V�[���X�^�[�g�N���X---------------------------
////�Q�[���J�n���̃V�[���N���X�o�^
//#define SET_GAME_START CSceneGameOver
#define SET_GAME_START CSceneTitle 
//#define SET_GAME_START CSceneEnd 
//#define SET_GAME_START CSceneFin
//#define SET_GAME_START CSceneMain
//#define SET_GAME_START CSceneStage
//#define SET_GAME_START CSceneTemplateRoom
//-----------------------------------------------