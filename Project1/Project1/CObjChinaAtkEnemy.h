#pragma once
//使用するヘッダー
#include"GameL/SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト : 攻撃する敵機
class CObjChinaAtkEnemy : public CObj
{
public:
	CObjChinaAtkEnemy(float x, float y);
	~CObjChinaAtkEnemy() {};
	void Init(); //イニシャライズ
	void Action(); //アクション
	void Draw(); //ドロー


private:
	float m_x; //攻撃する敵機のx方向の位置
	float m_y; //攻撃する敵機のy方向の位置
	float m_vx; //攻撃する敵機のベクトルx
	float m_vy; //攻撃する敵機のベクトルy

	int m_time;//攻撃敵機用弾丸発射タイミング用

	
};