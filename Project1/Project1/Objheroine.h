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
private:
	bool m_sp;//会話
	
};