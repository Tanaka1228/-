#pragma once
//使用するヘッダー
#include"GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;


//オブジェクト：ブロック&背景
class CObjChinaTown :public CObj
{
public:
	CObjChinaTown() {};
	~CObjChinaTown() {};
	void Init();//イニシャライズ
	void Action();//アクション
	void Draw();//ドロー
private:
	int m_map[25][55];//マップ情報(仮)
};