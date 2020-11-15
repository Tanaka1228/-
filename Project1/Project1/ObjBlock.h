#pragma once
//使用するヘッダー
#include"GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：ブロック＆背景
class CObjBlock :public CObj
{
public:
	CObjBlock() {};
	~CObjBlock() {};
	void Init(); //イニシャライズ
	void Action(); //アクション
	void Draw(); //ドロー
int GetSpeak();
	bool GetEnter();

private:
	int m_map[25][25]; //マップ情報(仮）
	int m_speak;
	int enter_flag;
	int key_bflag;
	bool m_time;//ボタン制御
};