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
#include "GameHead.h"
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
void CSceneStage::InitScene()
{


	
	//Stageオブジェクト作成
	CObjStage* objb = new CObjStage();
	Objs::InsertObj(objb, OBJ_STAGE, 3);

	//外部グラフィックファイルを読み込み9番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"屋上.png", 10, TEX_SIZE_512);

	
}


//ゲームステージ実行中メソッド
void CSceneStage::Scene()
{
}
