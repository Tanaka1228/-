//STLデバッグ機能をOFFにする
#define _SECURE_SCL	(0)  
#define _HAS_ITERATOR_DEBUGGING	(0)  

//GameLで使用するヘッダー
#include"GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"
#include"GameL/DrawTexture.h"

//使用するネームスペース
using namespace GameL;

//使用ヘッダー
#include"SceneMain.h"
#include"GameHead.h"

//コンストラクタ
CSceneTitle::CSceneTitle()
{

}

//デストラクタ
CSceneTitle::~CSceneTitle()
{

}

//ゲームメイン初期化メソッド
void CSceneTitle::InitScene()
{


	float c[4] = { 1.0f,1.0f,1.0f,1.0f, };
	RECT_F src;
	RECT_F dst;

	CObjTitle* p = new CObjTitle();
	Objs::InsertObj(p, OBJ_TITLE, 1);

	//タイトル名の表示
	Font::StrDraw(L"ARTIFICIAL HUMAN ", 270, 100, 32, c);
	Font::StrDraw(L" ～無人世界の旅～", 250, 150, 32, c);

	//カーソル選択位置
	//mainに移行
	Font::StrDraw(L"◆  ニューゲーム", 250, 350, 32, c);

	//ロード画面に移行
	Font::StrDraw(L"◆     ロード    ", 250, 400, 32, c);

	//設定画面に移行
	Font::StrDraw(L"◆      設定     ", 250, 450, 32, c);

	//シャットダウン
	Font::StrDraw(L"◆ シャットダウン", 250, 500, 32, c);

	//タイトルオブジェクト作成
	CObjTitle* obj = new CObjTitle();
	Objs::InsertObj(obj, OBJ_TITLE, 10);

	//外部グラフィックファイルを読み込み0番に登録(512×512ピクセル)
	Draw::LoadImage(L"Sifi_town3_4n-480x270.png", 4, TEX_SIZE_512);//titleバックグリーン
	Draw::LoadImage(L"メニュー画面 - コピー - コピー.png", 6, TEX_SIZE_512);//カーソル	
	//Draw::LoadImage(L"メニュー画面 - コピー.png", 5, TEX_SIZE_512);//カーソル	
	
	//オブジェクト作成
	CObjTitleBackground* back = new CObjTitleBackground();
	Objs::InsertObj(back, OBJ_TITLE_BACKGROUND, 4), (back, OBJ_TITLE_BACKGROUND, 6)/*,(back, OBJ_TITLE_BACKGROUND, 5)*/;



}

//ゲームメイン実行中メソッド
void CSceneTitle::Scene()
{

}