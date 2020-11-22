#pragma once

//ƒIƒuƒWƒFƒNƒgƒl[ƒ€------------------------------
enum OBJ_NAME
{
	OBJ_NO_NAME,	//ƒIƒuƒWƒFƒNƒg–¼–³‚µ(‹Ö~)
					//ƒQ[ƒ€‚Åg‚¤ƒIƒuƒWƒFƒNƒg‚Ì–¼‘O
					//OBJ_››‚Æ•\‹L
	OBJ_MAIN,	
	OBJ_HERO, //ålŒö
	OBJ_TITLE,//ƒQ[ƒ€ƒ^ƒCƒgƒ‹
	OBJ_ENEMY,//“G‚P
	OBJ_BULLET,//’eŠÛ
	OBJ_GAME_OVER,//ƒQ[ƒ€ƒI[ƒo[
	OBJ_TITLE_BACKGROUND,//ƒQ[ƒ€ƒ^ƒCƒgƒ‹‚Ì”wŒi
	OBJ_ATTACK_ENEMY,//UŒ‚“G‹@
	OBJ_BULLET_ENEMY,//’eŠÛ“G‹@
	OBJ_HOMING_ENEMY,//—U“±“G‹@
	OBJ_SIN_ENEMY,//ƒJ[ƒu“G‹@
	OBJ_DIFFUSION_ENEMY,//
	OBJ_ANGLE_BULLET,
	OBJ_HOMING_BULLET,
	OBJ_END,
	OBJ_FIN,
	OBJ_MANU,//ƒƒjƒ…[
	OBJ_HEROINE,//ƒqƒƒCƒ“
	OBJ_GUN,//•Šíe
	OBJ_ASS_BULLET,//ƒAƒTƒ‹ƒgƒ‰ƒCƒtƒ‹‚Ì’eŠÛ

	//------ƒ}ƒbƒv-------------------------------------------
	OBJ_BLOCK,//‹’“_
	OBJ_CHINA_TOWN_BOSS,//ƒ`ƒƒƒCƒiƒ^ƒEƒ“‚Ìƒ{ƒXíƒtƒB[ƒ‹ƒh
	OBJ_CHINA_TOWN,//ƒ`ƒƒƒCƒiƒ^ƒEƒ“
	OBJ_CHINA_TOWN_BOSS_BOSS,//ƒ`ƒƒƒCƒiƒ^ƒEƒ“‚Ìƒ{ƒXíƒtƒB[ƒ‹ƒhBOSS
	

<<<<<<< HEAD
	OBJ_INSTITUTE_BOSS,//Œ¤‹†Šƒ{ƒX
	OBJ_INSTITUTE,//Œ¤‹†Š
	OBJ_INSTITUTE1,//Œ¤‹†Š•”‰®‚P
	OBJ_INSTITUTE2,//Œ¤‹†Š•”‰®2
	OBJ_INSTITUTE3,//Œ¤‹†Š•”‰®‚R
	OBJ_INSTITUTE4,//Œ¤‹†•”‰®‚S
	OBJ_INSTITUTE5,//Œ¤‹†•”‰®5
	OBJ_INSTITUTE6,//Œ¤‹†•”‰®6
	OBJ_INSTITUTE7,//Œ¤‹†•”‰®7
	OBJ_INSTITUTE8,//Œ¤‹†•”‰®8
	OBJ_INSTITUTE9,//Œ¤‹†•”‰®9
	OBJ_INSTITUTE10,//Œ¤‹†•”‰®10
	OBJ_INSTITUTE11,//Œ¤‹†•”‰®11
	OBJ_INSTITUTE12,//Œ¤‹†•”‰®12
	OBJ_INSTITUTE13,//Œ¤‹†˜L‰º13
	OBJ_INSTITUTE14,//Œ¤‹†˜L‰º14
	//--------------•a‰@---------------------
	OBJ_ROOF_TOP,//•a‰@‰®ã
	OBJ_ROOF_TOP_BOSS,//•a‰@‚Ì‰®ãBOSS
	OBJ_HOSPITAL,//•a‰@1ŠK
	OBJ_HOSPITAL2,//•a‰@2ŠK
	OBJ_HOSPITAL3,//•a‰@3ŠK
	OBJ_TEMPLATE_ROOM,//•a‰@‚Ì•”‰®
	OBJ_EVENT_ROOM,//•a‰@‚ÌƒCƒxƒ“ƒg•”‰®
	OBJ_OPE_ROOM,//•a‰@‚Ìèpº
	OBJ_EX_ROOM,//•a‰@‚Ìf@º
	OBJ_XRAY_ROOM,//•a‰@‚ÌƒŒƒ“ƒgƒQƒ“º
=======
	OBJ_INSTITUTE_BOSS,//ç ”ç©¶æ‰€ãƒœã‚¹
	OBJ_INSTITUTE,//ç ”ç©¶æ‰€
	OBJ_INSTITUTE1,//ç ”ç©¶æ‰€éƒ¨å±‹ï¼E
	OBJ_INSTITUTE2,//ç ”ç©¶éƒ¨å±E
	OBJ_INSTITUTE_BOSS_BOSS,//ç ”ç©¶æ‰€ãƒœã‚¹ãƒœã‚¹
	OBJ_INSTITUTE3,//E½E½E½E½E½E½E½E½E½E½E½R
	//--------------ç—E™¢---------------------
	OBJ_ROOF_TOP,//ç—E™¢å±‹ä¸E
	OBJ_ROOF_TOP_BOSS,//ç—E™¢ã®å±‹ä¸ŠBOSS
	OBJ_HOSPITAL,//ç—E™¢1éšE
	OBJ_HOSPITAL2,//ç—E™¢2éšE
	OBJ_HOSPITAL3,//ç—E™¢3éšE
	OBJ_TEMPLATE_ROOM,//ç—E™¢ã®éƒ¨å±E
	OBJ_EVENT_ROOM,//ç—E™¢ã®ã‚¤ãƒ™ãƒ³ãƒˆéƒ¨å±E
	OBJ_OPE_ROOM,//ç—E™¢ã®æ‰‹è¡“å®¤
	OBJ_EX_ROOM,//ç—E™¢ã®è¨ºå¯Ÿå®¤
	OBJ_XRAY_ROOM,//ç—E™¢ã®ãƒ¬ãƒ³ãƒˆã‚²ãƒ³å®¤
>>>>>>> 650aa39bf6aff5a8eae6933d9f8d2fc3f01affa8
	//----------------------------------------

	OBJ_DRUG_CAMPANY,//»–ò‰ïĞ
};
//------------------------------------------------

//“–‚½‚è”»’è‘®«----------------------------------
enum HIT_ELEMENTS
{
	ELEMENT_NULL,//‘®«–³‚µ ‘S‚Ä‚Ì‘®«‚Æ“–‚½‚è”»’è‚ªÀs‚³‚ê‚é
	//ˆÈ‰º@“¯‚¶‘®«“¯m‚Å‚Í“–‚½‚è”»’è‚ÍÀs‚³‚ê‚È‚¢
	//‘®«‚Í’Ç‰Á‰Â”\‚¾‚ªAƒfƒoƒbƒN‚ÌF‚Í‰Šúİ’è•ª‚µ‚©–³‚¢
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
//ƒZ[ƒu•ƒ[ƒh‚ÆƒV[ƒ“ŠÔ‚Ì‚â‚èæ‚è‚·‚éƒf[ƒ^
struct UserData
{
	int mSeveData;	//ƒTƒ“ƒvƒ‹ƒZ[ƒuƒf[ƒ^
	
};
//------------------------------------------------


//ƒQ[ƒ€“à‚Åg—p‚³‚ê‚éƒOƒ[ƒoƒ‹•Ï”E’è”E—ñ‹“--



//------------------------------------------------
//ƒQ[ƒ€“à‚Åg—p‚·‚éƒNƒ‰ƒXƒwƒbƒ_------------------


//------------------------------------------------

//ƒQ[ƒ€ƒV[ƒ“ƒIƒuƒWƒFƒNƒgƒwƒbƒ_------------------
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

//ƒQ[ƒ€ƒV[ƒ“ƒNƒ‰ƒXƒwƒbƒ_------------------------
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

//ƒV[ƒ“ƒXƒ^[ƒgƒNƒ‰ƒX---------------------------
////ƒQ[ƒ€ŠJn‚ÌƒV[ƒ“ƒNƒ‰ƒX“o˜^
//#define SET_GAME_START CSceneGameOver
#define SET_GAME_START CSceneTitle 
//#define SET_GAME_START CSceneEnd 
//#define SET_GAME_START CSceneFin
//#define SET_GAME_START CSceneMain
//#define SET_GAME_START CSceneStage
//#define SET_GAME_START CSceneTemplateRoom
//-----------------------------------------------