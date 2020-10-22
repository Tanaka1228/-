#pragma once
//使用するヘッダー
#include"GameL/SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト : 攻撃する敵機
class CObjAttackEnemy : public CObj
{
public:
	CObjAttackEnemy() {};
	~CObjAttackEnemy() {};
	void Init(); //イニシャライズ
	void Action(); //アクション
	void Draw(); //ドロー
private:
	
};
