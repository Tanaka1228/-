#pragma once
//使用するヘッダー
#include"GameL/SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト : 敵機
class CObjHeroine : public CObj
{
public:
	CObjHeroine();//コンストラクタ位置情報	をもらう
	~CObjHeroine() {};
	void Init(); //イニシャライズ
	void Action(); //アクション
	void Draw(); //ドロー
    int Key_flag(){ return key_flag; }
private:
	int m_sp;//会話
	int m_ep;//エンターキー2回目時
	int key_flag;//会話のフラグ
	bool sp_flag;//会話のグラフィックのフラグ
};