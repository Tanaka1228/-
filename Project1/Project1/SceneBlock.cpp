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
#include "SceneBlock.h"



//コンストラクタ
CSceneBlock::CSceneBlock()
{
}

//デストラクタ
CSceneBlock::~CSceneBlock()
{
}



//ゲームステージ初期化メソッド
void CSceneBlock::InitScene()
{
	//外部グラフィックファイルを読み込み0番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"Hero.png", 0, TEX_SIZE_512);//主人公グラフィック

	//外部グラフィックファイルを読み込み1番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"ハンドガン.png", 2, TEX_SIZE_512);//ハンドガングラフィック

	//外部グラフィックファイルを読み込み3番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"弾丸＿右.png", 3, TEX_SIZE_512);//弾丸グラフィック

	//外部グラフィックファイルを読み込み3番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"女の子正面.png", 5, TEX_SIZE_512);//女の子

	//外部グラフィックファイルを読み込み8番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"拠点の素材.png", 8, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み9番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"床.png", 9, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み10番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"会話.png", 10, TEX_SIZE_512);

	//主人公オブジェクト作成
	CObjHero* obj = new CObjHero(400, 280); //主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 4); //作った主人公オブジェクトをオブジェクトマネージャーに登録

	//blockオブジェクト作成
	CObjBlock* objb = new CObjBlock();
	Objs::InsertObj(objb, OBJ_BLOCK, 3);

	//ヒロインオブジェクト作成
	CObjHeroine* objh=new CObjHeroine();
	Objs::InsertObj(objh, OBJ_HEROINE, 4);

	//銃オブジェクト作成
	CObjGun* objg = new CObjGun();
	Objs::InsertObj(objg, OBJ_GUN, 4);

}


//ゲームステージ実行中メソッド
void CSceneBlock::Scene()
{
}
