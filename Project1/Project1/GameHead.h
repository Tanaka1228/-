#pragma once

//オブジェクトネーム------------------------------
enum OBJ_NAME
{
	OBJ_NO_NAME,	//オブジェクト名無し(禁止)
					//ゲームで使うオブジェクトの名前
					//OBJ_○○と表記
	OBJ_MAIN,	
	OBJ_HERO, //主人公
	OBJ_TITLE,//ゲームタイトル
	OBJ_ENEMY,//敵１
	OBJ_BULLET,//弾丸
	OBJ_GAME_OVER,//ゲームオーバー
	OBJ_TITLE_BACKGROUND,//ゲームタイトルの背景
	OBJ_ATTACK_ENEMY,//攻撃敵機
	OBJ_BULLET_ENEMY,//弾丸敵機
	OBJ_HOMING_ENEMY,//誘導敵機
	OBJ_SIN_ENEMY,//カーブ敵機
	OBJ_DIFFUSION_ENEMY,//
	OBJ_ANGLE_BULLET,
	OBJ_HOMING_BULLET,
	OBJ_STAGE,//
	OBJ_BLOCK,//拠点
	OBJ_END,
	OBJ_FIN,
	OBJ_MANU,//メニュー
	OBJ_ROOF_TOP,//病院屋上
	OBJ_INSTITUTE_BOSS,//研究所ボス
	OBJ_HEROINE,//ヒロイン
};
//------------------------------------------------

//当たり判定属性----------------------------------
enum HIT_ELEMENTS
{
	ELEMENT_NULL,//属性無し 全ての属性と当たり判定が実行される
	//以下　同じ属性同士では当たり判定は実行されない
	//属性は追加可能だが、デバック時の色は初期設定分しか無い
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
//セーブ＆ロードとシーン間のやり取りするデータ
struct UserData
{
	int mSeveData;	//サンプルセーブデータ
	
};
//------------------------------------------------


//ゲーム内で使用されるグローバル変数・定数・列挙--



//------------------------------------------------
//ゲーム内で使用するクラスヘッダ------------------


//------------------------------------------------

//ゲームシーンオブジェクトヘッダ------------------
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

//ゲームシーンクラスヘッダ------------------------
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

//シーンスタートクラス---------------------------
////ゲーム開始時のシーンクラス登録
//#define SET_GAME_START CSceneGameOver
#define SET_GAME_START CSceneTitle 
//#define SET_GAME_START CSceneEnd 
//#define SET_GAME_START CSceneFin
//#define SET_GAME_START CSceneMain
//#define SET_GAME_START CSceneStage
//-----------------------------------------------