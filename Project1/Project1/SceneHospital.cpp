//STLのデバック機能をOFFにする
#define _SECURE_SCL (0);
#define _HAS_ITERATOR_DEBUGGING (0);

//GameLで使用するヘッダー
#include"GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"
#include"GameL/DrawTexture.h"

//使用するネームスペース
using namespace GameL;

//使用するヘッダー
#include"GameHead.h"
#include "SceneHospital.h"



//コンストラクタ
CSceneHospital::CSceneHospital()
{
}

//デストラクタ
CSceneHospital::~CSceneHospital()
{
}



//ゲームステージ初期化メソッド
void CSceneHospital::InitScene()
{
	//外部グラフィックファイルを読み込み0番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"Hero.png", 0, TEX_SIZE_512);//主人公グラフィック

	//外部グラフィックファイルを読み込み1番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"ハンドガン.png", 2, TEX_SIZE_512);//ハンドガングラフィック

	//外部グラフィックファイルを読み込み3番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"弾丸＿右.png", 3, TEX_SIZE_512);//弾丸グラフィック



	//主人公オブジェクト作成
	CObjHero* obj = new CObjHero(400, 280); //主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 4); //作った主人公オブジェクトをオブジェクトマネージャーに登録


	//病院オブジェクト作成
	CObjHospital* objh = new CObjHospital(); //病院オブジェクト作成
	Objs::InsertObj(objh, OBJ_HOSPITAL, 5); //作った病院オブジェクトをオブジェクトマネージャーに登録
}


//ゲームステージ実行中メソッド
void CSceneDrugCampany::Scene()
{
}
