//STLのデバック機能をOFFにする
#define _SEKURE_SCL (0);
#define _HAS_ITERATOR_DEBUGGING (0);

//GameLで使用するヘッダー
#include"GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"
#include"GameL/DrawTexture.h"

//使用するネームスペース
using namespace GameL;


//使用するヘッダー
#include"GameHead.h"
#include "SceneTyainataun.h"



//コンストラクタ
CSceneTyainataun::CSceneTyainataun()
{
}
//デストラクタ
CSceneTyainataun::~CSceneTyainataun()
{
}

//ゲームステージ初期化メソッド
void CSceneTyainataun::InitScene()
{
	//外部グラフィックファイルを読み込み0番に登録(512×512)は関係ないらしい
	Draw::LoadImage(L"Hero.pug", 0, TEX_SIZE_512);//主人公グラフィック

	//外部グラフィックファイルを読み込み1番に登録(512×512)はあまり関係ないらしい
	Draw::LoadImage(L"ハンドガン.pug", 2, TEX_SIZE_512);//ハンドガングラフィック

	//外部のグラフィックファイルを読み込み3番に登録(512×512)はあまり関係ないらしい
	Draw::LoadImage(L"弾丸_右.pug", 3, TEX_SIZE_512);//弾丸グラフィック

	//外部のグラフィックファイルを読み込み10番に登録(512×512)はあまり関係ないらしい
	Draw::LoadImage(L"チャイナタウン.pug", 10, TEX_SIZE_512);

	//主人公オブジェクト作成
	CObjHero* obj = new CObjHero(400, 280);//主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 4);//作った主人公のオブジェクトをオブジェクトマネージャーに登録

	//チャイナタウンオブジェクト作成
	CObjTyainataun* objb = new CObjTyainataun();
	Objs::InsertObj(objb, OBJ_TYAINATAUN, 3);

}

//ゲームステージ実行中メソッド
void CSceneTyainataun::Scene()
{
}
