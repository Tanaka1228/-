#pragma once
//使用するヘッダー
#include"GameL/SceneObjManager.h"
#include"GameL/DrawTexture.h"
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
	float m_vy; //弾丸のY方向の位置用変数
	//--------------------------------------
	float ass_m_x;  //アサルト弾丸のX方向の位置用変数
	float ass_m_y;  //弾丸のY方向の位置用変数
	float ass_m_vx; //弾丸のX方向の速度用変数
	float ass_m_vy; //弾丸のY方向の位置用変数

	int m_Xpos;//弾丸向きX
	int m_Ypos;//弾丸向きY

	
	int m_ani;//着弾アニメーション用
	int m_ani_time;//着弾アニメーション間隔タイム
	bool m_del;//削除チェック
	RECT_F m_eff;//着弾エフェクト描画用
};
