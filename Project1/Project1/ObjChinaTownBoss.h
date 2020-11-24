#pragma once
//使用するヘッダー
#include"GameL\SceneObjManager.h"
#include"GameL\SceneManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：ブロック＆背景
class CObjChinaTownBoss :public CObj
{
public:
	CObjChinaTownBoss() {};
	~CObjChinaTownBoss() {};
	void Init(); //イニシャライズ
	void Action(); //アクション
	void Draw(); //ドロー

	void SetScroll3(float s) { mx_scroll = s; }
	float GetScroll3() { return mx_scroll; }//X

	void SetScroll4(float s) { my_scroll = s; }
	float GetScroll4() { return my_scroll; }//Y



private:

	int m_map[100][100]; //マップ情報

	float mx_scroll; //左右スクロール用
	float my_scroll; //左右スクロール用

};
