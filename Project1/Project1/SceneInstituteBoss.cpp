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
#include "SceneInstituteBoss.h"



//コンストラクタ
CSceneInstituteBoss::CSceneInstituteBoss()
{
}

//デストラクタ
CSceneInstituteBoss::~CSceneInstituteBoss()
{
}



//ゲームステージ初期化メソッド
void CSceneInstituteBoss::InitScene()
{
	//外部グラフィックファイルを読み込み0番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"Hero.png", 0, TEX_SIZE_512);//主人公グラフィック

	//外部グラフィックファイルを読み込み1番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"ハンドガン.png", 2, TEX_SIZE_512);//ハンドガングラフィック

	//外部グラフィックファイルを読み込み3番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"弾丸＿右.png", 3, TEX_SIZE_512);//弾丸グラフィック

	//外部グラフィックファイルを読み込み12番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"研究所のボス戦フィールド.png", 12, TEX_SIZE_512);

	//外部グラフィックファイルを読み込み15番に登録(512×512ピクセル)あまり関係ないらしい
	Draw::LoadImage(L"研究所ボス戦フィールドの素材.png", 15, TEX_SIZE_512);


	//主人公オブジェクト作成
	CObjHero* obj = new CObjHero(400, 280); //主人公オブジェクト作成
	Objs::InsertObj(obj, OBJ_HERO, 4); //作った主人公オブジェクトをオブジェクトマネージャーに登録

	//銃オブジェクト作成
	CObjGun* objg = new CObjGun();
	Objs::InsertObj(objg, OBJ_GUN, 5);

	//研究所のボス戦フィールドオブジェクト作成
	CObjInstituteBoss* objb = new CObjInstituteBoss();
	Objs::InsertObj(objb, OBJ_INSTITUTE_BOSS, 4);

}


//ゲームステージ実行中メソッド
void CSceneInstituteBoss::Scene()
{
}
