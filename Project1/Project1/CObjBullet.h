#pragma once
//使用するヘッダー
#include"GameL/SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：弾丸
class CObjBullet : public CObj
{
public:
	CObjBullet() {};
	~CObjBullet() {};
	void Init();     //イニシャライズ
	void Action();  //アクション
	void Draw();   //ドロー
private:
};
