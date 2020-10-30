#pragma once
//使用するヘッダー
#include"GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：ブロック＆背景
class CObjhospitalRooftop :public CObj
{
public:
	CObjhospitalRooftop() {};
	~CObjhospitalRooftop() {};
	void Init(); //イニシャライズ
	void Action(); //アクション
	void Draw(); //ドロー



private:
	int m_map[10][10]; //マップ情報(仮）


};
