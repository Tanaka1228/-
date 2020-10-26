#pragma once
//使用するヘッダー
#include"GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト : 主人公
class CObjHero : public CObj
{
public:
	CObjHero(float x,float y);
	~CObjHero() {};
	void Init();        //イニシャライズ
	void Action();      //アクション
	void Draw();        //ドロー
	void SetX(float x);//位置情報X変更用
	void SetY(float y);//位置情報Y変更用
	float GetX();      //位置情報X取得用
	float GetY();      //位置情報Y取得用
	float GetB();
private:
	float m_x;  //主人公機のx方向移動用変数
	float m_y;  //主人公機のy方向移動用変数
	float m_vx; //移動ベクトル
	float m_vy; //移動ベクトル
	float m_posture; //横姿勢
	bool m_f; //弾丸発射制御用

	int m_ani_time=0; //アニメーションフレーム動作間隔
	int m_ani_frame=0; //描画フレーム
};