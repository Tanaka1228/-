#pragma once
//使用するヘッダーファイル
#include"GameL\SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン：ゲームタイトル
class CSeneTitle :public CScene
{
	public :
		CSceneTitle();
		~CSceneTitle();
		void InitScene();
		void Scene();
	private:
};