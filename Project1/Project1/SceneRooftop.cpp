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
#include "SceneRooftop.h"



//コンストラクタ
CSceneRooftop::CSceneRooftop()
{
}

//デストラクタ
CSceneRooftop::~CSceneRooftop()
{
}



//ゲームステージ初期化メソッド
void CSceneRooftop::InitScene()
{


	//外部グラフィックファイルを読み込み9番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"屋上.png", 10, TEX_SIZE_512);

	//Stageオブジェクト作成
	CObjRooftop* objb = new CObjRooftop();
	Objs::InsertObj(objb, OBJ_ROOF_TOP, 3);

}


//ゲームステージ実行中メソッド
void CSceneRooftop::Scene()
{
}
