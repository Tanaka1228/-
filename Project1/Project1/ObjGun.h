#pragma once
//使用するヘッダー
#include"GameL/SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：弾丸
class CObjGun : public CObj
{
public:
	CObjGun();
	~CObjGun() {};
	void Init();     //イニシャライズ
	void Action();  //アクション
	void Draw();   //ドロー

private:
	int m_gun;
	int m_ani_frame;
};
