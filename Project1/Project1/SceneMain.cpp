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
	//外部グラフィックファイルを読み込み0番に登録(800×600ピクセル)
	Draw::LoadImage(L"Hero.png", 0, TEX_SIZE_800);

	//主人公オブジェクト作成
	CObjHero* obj = new CObjHero(); //主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 1); //作った主人公オブジェクトをオブジェクトマネージャーに登録
}

//ゲームメイン実行中メソッド
void CSceneMain::Scene()
{

}