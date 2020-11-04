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

	float GetX();     //位置情報X取得用
	float GetY();     //位置情報Y取得用
	void SetX(float x);//位置情報X変更用
	void SetY(float y);//位置情報Y変更用

	float GetX2() { return m_x; }   //位置情報X2取得用　当たり判定
	float GetY2() { return m_y; }   //位置情報Y2取得用
	float GetVX() { return m_vy; }   //位置情報VX取得用
	float GetVY() { return m_vx; }   //位置情報VY取得用

	//m_x,m_yはアクションゲーム指南書で言う、m_px,m_pyです。


	void SetX2(float x)  { m_x = x; }
	void SetY2(float y)  { m_y = y; }
	void SetVY(float vy) { m_vy = vy; }
	void SetVX(float vx) { m_vx = vx; }
	
	void SetUp(bool b) { m_hit_up = b; }
	void SetDown(bool b) { m_hit_down = b; }
	void SetLeft(bool b) { m_hit_left = b; }
	void SetRight(bool b) { m_hit_right = b; }

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
	int m_hp;//主人公のHP
	int m_gun;//銃の向き
	int m_bullet;//弾丸の弾数
	int test;
	
	//blockとの衝突状態確認用
	bool m_hit_up;
	bool m_hit_down;
	bool m_hit_left;
	bool m_hit_right;
};