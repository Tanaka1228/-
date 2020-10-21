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
};