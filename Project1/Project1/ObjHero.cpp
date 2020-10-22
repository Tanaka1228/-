//使用するヘッダーファイル
#include"GameL\DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL\HitBoxManager.h"
#include"GameHead.h"
#include"ObjHero.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjHero::Init()
{
	m_x = 0;
	m_y = 0;

	//当たり判定用HitBoxを作成
	Hits::SetHitBox(this, m_x, m_y, 82, 82, ELEMENT_PLAYER, OBJ_HERO, 1);
}

//アクション
void CObjHero::Action()
{
	//主人公の弾丸発射
	if (Input::GetVKey('Z') == true)
	{
		//弾丸オブジェクト作成
		//テスト用：弾丸オブジェクト作成
	    CObjBullet* obj_b = new CObjBullet(m_x,m_y); //弾丸オブジェクト作成
	    Objs::InsertObj(obj_b, OBJ_BULLET, 1); //作った弾丸オブジェクトをオブジェクトマネージャーに登録
	}




	if (Input::GetVKey(VK_RIGHT) == true) //主人公移動キー 右
	{
		m_x += 1.0f;
	}

	if (Input::GetVKey(VK_LEFT) == true) //主人公移動キー 左
	{
		m_x -= 1.0f;
	}

	if (Input::GetVKey(VK_UP) == true) //主人公移動キー ↑
	{
		m_y -= 1.0f;
	}

	if (Input::GetVKey(VK_DOWN) == true) //主人公移動キー ↓
	{
		m_y+= 1.0f;
	}

	//HitBoxの内容を更新
	CHitBox* hit = Hits::GetHitBox(this); //作成したHitBox更新用の入り口を取り出す
	hit->SetPos(m_x, m_y);                //入り口から新しい位置(主人公機の位置)情報に置き換える

	//敵機オブジェクトと接触したら主人公機削除
	if (hit->CheckObjNameHit(OBJ_ENEMY) != nullptr)
	{
		this->SetStatus(false); //自身に削除命令を出す。
		Hits::DeleteHitBox(this);//主人公機が所有するHitBoxに削除する。

		//主人公消滅でゲームオーバーに移行する
		Scene::SetScene(new CSceneGameOver());
	}

}

//ドロー
void CObjHero::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	//切り取り位置の設定
	src.m_top     = 0.0f;   //y
	src.m_left    = 0.0f;  //x
	src.m_right   = 223.0f; //x
	src.m_bottom = 240.0f; //y

	//表示位置の設定
	dst.m_top     = 0.0f  +  m_y;
	dst.m_left    = 0.0f  +  m_x;
	dst.m_right   = 32.0f+50.0f +  m_x;
	dst.m_bottom  = 32.0f + 50.0f +  m_y;

	Draw::Draw(0, &src, &dst, c, 0.0f);
}