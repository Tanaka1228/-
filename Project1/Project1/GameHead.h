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
	

<<<<<<< HEAD
	OBJ_INSTITUTE_BOSS,//�������{�X
	OBJ_INSTITUTE,//������
	OBJ_INSTITUTE1,//�����������P
	OBJ_INSTITUTE2,//����������2
	OBJ_INSTITUTE3,//�����������R
	OBJ_INSTITUTE4,//���������S
	OBJ_INSTITUTE5,//��������5
	OBJ_INSTITUTE6,//��������6
	OBJ_INSTITUTE7,//��������7
	OBJ_INSTITUTE8,//��������8
	OBJ_INSTITUTE9,//��������9
	OBJ_INSTITUTE10,//��������10
	OBJ_INSTITUTE11,//��������11
	OBJ_INSTITUTE12,//��������12
	OBJ_INSTITUTE13,//�����L��13
	OBJ_INSTITUTE14,//�����L��14
	//--------------�a�@---------------------
	OBJ_ROOF_TOP,//�a�@����
	OBJ_ROOF_TOP_BOSS,//�a�@�̉���BOSS
	OBJ_HOSPITAL,//�a�@1�K
	OBJ_HOSPITAL2,//�a�@2�K
	OBJ_HOSPITAL3,//�a�@3�K
	OBJ_TEMPLATE_ROOM,//�a�@�̕���
	OBJ_EVENT_ROOM,//�a�@�̃C�x���g����
	OBJ_OPE_ROOM,//�a�@�̎�p��
	OBJ_EX_ROOM,//�a�@�̐f�@��
	OBJ_XRAY_ROOM,//�a�@�̃����g�Q����
=======
	OBJ_INSTITUTE_BOSS,//研究所ボス
	OBJ_INSTITUTE,//研究所
	OBJ_INSTITUTE1,//研究所部屋！E
	OBJ_INSTITUTE2,//研究部屁E
	OBJ_INSTITUTE_BOSS_BOSS,//研究所ボスボス
	OBJ_INSTITUTE3,//�E��E��E��E��E��E��E��E��E��E��E�R
	//--------------痁E��---------------------
	OBJ_ROOF_TOP,//痁E��屋丁E
	OBJ_ROOF_TOP_BOSS,//痁E��の屋上BOSS
	OBJ_HOSPITAL,//痁E��1隁E
	OBJ_HOSPITAL2,//痁E��2隁E
	OBJ_HOSPITAL3,//痁E��3隁E
	OBJ_TEMPLATE_ROOM,//痁E��の部屁E
	OBJ_EVENT_ROOM,//痁E��のイベント部屁E
	OBJ_OPE_ROOM,//痁E��の手術室
	OBJ_EX_ROOM,//痁E��の診察室
	OBJ_XRAY_ROOM,//痁E��のレントゲン室
>>>>>>> 650aa39bf6aff5a8eae6933d9f8d2fc3f01affa8
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
<<<<<<< HEAD
#include"ObjInstitute4.h"
#include"ObjInstitute5.h"
#include"ObjInstitute6.h"
#include"ObjInstitute7.h"
#include"ObjInstitute8.h"
#include"ObjInstitute9.h"
#include"ObjInstitute10.h"
#include"ObjInstitute11.h"
#include"ObjInstitute12.h"
#include"ObjInstitute13.h"
#include"ObjInstitute13.h"
=======
#include"CObjInstituteBossBoss.h"
>>>>>>> 650aa39bf6aff5a8eae6933d9f8d2fc3f01affa8
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
#include"SceneInstitute4.h"
#include"SceneInstitute5.h"
#include"SceneInstitute6.h"
#include"SceneInstitute7.h"
#include"SceneInstitute8.h"
#include"SceneInstitute9.h"
#include"SceneInstitute10.h"
#include"SceneInstitute11.h"
#include"SceneInstitute12.h"
#include"SceneInstitute13.h"
#include"SceneInstitute14.h"

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