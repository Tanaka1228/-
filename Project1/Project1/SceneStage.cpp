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
#include "SceneStage.h"



//コンストラクタ
CSceneStage::CSceneStage()
{
}

//デストラクタ
CSceneStage::~CSceneStage()
{
}



//ゲームステージ初期化メソッド
void CSceneStage::InitCScene()
{

	//外部グラフィックファイルを読み込み7番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"", 7, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み8番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"拠点の素材.png", 8, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み9番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"床.png", 9, TEX_SIZE_512);


	//blockオブジェクト作成
	CObjBlock* objb = new CObjBlock();
	Objs::InsertObj(objb, OBJ_BLOCK, 3);

}


//ゲームステージ実行中メソッド
void CSceneStage::Scene()
{
}
