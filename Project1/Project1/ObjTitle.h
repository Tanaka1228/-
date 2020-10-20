#pragma once
//使用するヘッダーファイル
#include"GameL\SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：ゲームタイトル
class ObjTitle : public CObj
{
	public:
		CObjTitle() {};
		~CObjTitle() {};
		void Init();
		void Action();
		void Draw();
	private:
};