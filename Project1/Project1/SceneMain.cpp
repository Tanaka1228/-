//STLデバッグ機能をOFFにする
#define _SECURE_SCR (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include"GameL\DrawTexture.h"
#include"GameL\SceneObjManager.h"

//使用するネームスペース
using namespace GameL;

//使用ヘッダー
#include"SceneMain.h"
#include"GameHead.h"



//コンストラクタ
CSceneMain::CSceneMain()
{

}

//デストラクタ
CSceneMain::~CSceneMain()
{

}

//ゲームメイン初期化メソッド
void CSceneMain::InitScene()
{
	//外部グラフィックファイルを読み込み0番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"Hero.png", 0, TEX_SIZE_512);//主人公グラフィック

	//外部グラフィックファイルを読み込み1番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"Enemy1.png", 1, TEX_SIZE_512);//敵グラフィック

	//外部グラフィックファイルを読み込み3番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"弾丸＿右.png", 3, TEX_SIZE_512);//弾丸グラフィック

	//主人公オブジェクト作成
	CObjHero* obj = new CObjHero(50,280); //主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 1); //作った主人公オブジェクトをオブジェクトマネージャーに登録

	//敵機オブジェクト作成
	CObjEnemy* obj_enemy = new CObjEnemy(800,300); //敵機オブジェクト作成
	Objs::InsertObj(obj_enemy, OBJ_ENEMY, 1); //作った敵機オブジェクトをオブジェクトマネージャーに登録

	//攻撃する敵機オブジェクト作成
	CObjAttackEnemy* obj_attack_enemy = new CObjAttackEnemy(700,220); //攻撃する敵機オブジェクト作成
	Objs::InsertObj(obj_attack_enemy, OBJ_ATTACK_ENEMY, 1); //攻撃する敵機オブジェクトをオブジェクトマネージャーに登録

	//誘導敵機オブジェクト作成
	CObjHomingEnemy* obj_homing_enemy = new CObjHomingEnemy(700, 50); //誘導敵機オブジェクト作成
	Objs::InsertObj(obj_homing_enemy, OBJ_HOMING_ENEMY, 1); //誘導敵機オブジェクトをオブジェクトマネージャーに登録

	//Sin敵機オブジェクト作成
	CObjSinEnemy* obj_sin_enemy = new CObjSinEnemy(700, 300); //Sin敵機オブジェクト作成
	Objs::InsertObj(obj_sin_enemy, OBJ_SIN_ENEMY, 1); //Sin敵機オブジェクトをオブジェクトマネージャーに登録

	//拡散敵機オブジェクト作成
	CObjDiffusionEnemy* obj_diffusion_enemy = new CObjDiffusionEnemy(500, 300); //Sin敵機オブジェクト作成
	Objs::InsertObj(obj_diffusion_enemy, OBJ_DIFFUSION_ENEMY, 1); //Sin敵機オブジェクトをオブジェクトマネージャーに登録


	CObjMain* p = new CObjMain();
	Objs::InsertObj(p, OBJ_MAIN,1);

}

//ゲームメイン実行中メソッド
void CSceneMain::Scene()
{

}