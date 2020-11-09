#pragma once
//使用するヘッダー
#include"GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：ブロック＆背景
class CObjInstituteBoss :public CObj
{
public:
	CObjInstituteBoss() {};
	~CObjInstituteBoss() {};
	void Init(); //イニシャライズ
	void Action(); //アクション
	void Draw(); //ドロー



private:
	int m_map[25][25]; //マップ情報(仮）


};