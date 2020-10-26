#pragma once
//使用するヘッダー
#include"GameL/SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：弾丸
class CObjBullet : public CObj
{
public:
	CObjBullet(float x,float y);
	~CObjBullet(){};
	void Init();     //イニシャライズ
	void Action();  //アクション
	void Draw();   //ドロー
	
private:
	float m_x;  //弾丸のX方向の位置用変数
	float m_y;  //弾丸のY方向の位置用変数
	float m_vx; //弾丸のX方向の速度用変数
	float m_bvx;
};
