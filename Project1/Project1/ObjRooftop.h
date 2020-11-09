#pragma once
//使用するヘッダー
#include"GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：ブロック＆背景
class CObjRooftop :public CObj
{
public:
	CObjRooftop() {};
	~CObjRooftop() {};
	void Init(); //イニシャライズ
	void Action(); //アクション
	void Draw(); //ドロー



private:
	int m_map[25][25]; //マップ情報(仮）


};