//使用するヘッダーファイル
#include"GameL\DrawTexture.h"
#include"GameL/WinInputs.h"
#include"GameL\HitBoxManager.h"
#include"GameHead.h"
#include"ObjHero.h"
#include"CObjBullet.h"
#include"UtilityModule.h"


//使用するネームスペース
using namespace GameL;

//コンストラクタ
CObjHero::CObjHero(float x, float y)
{
	m_x = x;
	m_y = y;
}

//イニシャライズ
void CObjHero::Init()
{
	m_vx = 0.0f; //移動ベクトル
	m_vy = 0.0f; //移動ベクトル
	m_posture = 0.0f; //右向き0.0f 左向き1.0f
	m_f = true; //弾丸発射制御

	m_ani_time=0; //アニメーションフレーム動作間隔
    m_ani_frame=1; //描画フレーム

	//当たり判定用HitBoxを作成
	Hits::SetHitBox(this, m_x, m_y, 62, 82, ELEMENT_PLAYER, OBJ_HERO, 1);
}

//アクション
void CObjHero::Action()
{
	//移動ベクトルの破棄
	m_vx = 0.0f;
	m_vy = 0.0f;

	//主人公の弾丸発射
	if (Input::GetVKey('Z') == true)
	{
		if (m_f == true)
		{
			
			//弾丸オブジェクト作成
			CObjBullet* obj_b = new CObjBullet(m_x+30.0f, m_y+32.0f); //弾丸オブジェクト作成
			Objs::InsertObj(obj_b, OBJ_BULLET, 3); //作った弾丸オブジェクトをオブジェクトマネージャーに登録

			m_f = false;
		}
	}
	else
	{
		m_f = true;
	}
	

	if (Input::GetVKey(VK_RIGHT) == true) //主人公移動キー 右
	{
		m_x += 5.0f;
		m_posture = 0.0f;

	}

	if (Input::GetVKey(VK_LEFT) == true) //主人公移動キー 左
	{
		m_x -= 5.0f;
		m_posture = 1.0f;
	}


	if (Input::GetVKey(VK_UP) == true) //主人公移動キー ↑
	{
		m_y -= 5.0f;


		//float c[4] = { 1.0f,1.0f,1.0f,1.0f };
		//RECT_F src;
		//RECT_F dst;

		////切り取り位置の設定
		//src.m_top = 0.0f;   //y
		//src.m_left = 237.0f;  //x
		//src.m_right = 420.0f; //x
		//src.m_bottom = 240.0f; //y

		////表示位置の設定
		//dst.m_top = 0.0f + m_y;
		//dst.m_left = (64.0f * m_posture) + m_x;
		//dst.m_right = (64.0f - 64.0f * m_posture) + m_x;
		//dst.m_bottom = 32.0f + 50.0f + m_y;

		//Draw::Draw(0, &src, &dst, c, 0.0f);
	}

	if (Input::GetVKey(VK_DOWN) == true) //主人公移動キー ↓
	{
		m_y+= 5.0f;
	}

	//移動ベクトルの正規化
	UnitVec(&m_vy, &m_vx);

	//HitBoxの内容を更新
	CHitBox* hit = Hits::GetHitBox(this); //作成したHitBox更新用の入り口を取り出す
	hit->SetPos(m_x, m_y);                //入り口から新しい位置(主人公機の位置)情報に置き換える


	//敵機オブジェクトと接触したら主人公機削除
	if (hit->CheckElementHit(ELEMENT_ENEMY) ==true)
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
	int AniData[4] = //向き情報を登録
	{
		0,1,2,3,
	};

	

	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	//切り取り位置の設定
	src.m_top     = 0.0f;   //y
	src.m_left = 431.0f ;  //x
	src.m_right   = 599.0f; //x
	src.m_bottom = 240.0f; //y

	//表示位置の設定
	dst.m_top     = 0.0f  +  m_y;
	dst.m_left    = (64.0f*m_posture)  +  m_x;
	dst.m_right   = (64.0f - 64.0f * m_posture) +  m_x;
	dst.m_bottom  = 32.0f + 50.0f +  m_y;

	Draw::Draw(0, &src, &dst, c, 0.0f);
}