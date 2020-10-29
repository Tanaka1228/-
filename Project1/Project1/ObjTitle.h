#pragma once
//使用するヘッダ―
#include"GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：タイトル
class CObjTitle : public CObj
{
	public :
		CObjTitle() {};
		~CObjTitle() {};
		void Init();
		void Action();
		void Draw();
	private:
		bool m_key_flag;//キーフラグ
		float m_mou_x;//マウスの位置ｘ
		float m_mou_y;//マウスの位置ｙ
		float m_mou_r;//マウスの右ボタン
		float m_mou_l;//マウスの左ボタン


		float m_key_uy;//矢印キーの位置ｘ
		float m_key_dy;//矢印キーの位置 y
		float m_key_enter;//決定
		


		int m_x;
		int m_y;//カーソル移動
	

};