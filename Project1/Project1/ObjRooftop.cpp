//使用するヘッダーファイル
#include"GameL\DrawTexture.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneManager.h"
#include"GameL/SceneObjManager.h"

#include"GameHead.h"
#include"ObjRooftop.h"

//使用するネームスペース
using namespace GameL;

//イニシャライズ
void CObjRooftop::Init()
{
	mx_scroll = 0.0f;
	my_scroll = 0.0f;

	//マップ情報
	int block_data[25][55] =
	{
		{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{0,1,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,1},
		{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,12,4,5,6,4,5,6,4,5,8,9,10,11,1},
		{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{0,1,0,0,0,0,0,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,6,2,3,6,2,3,0,0,0,0,1},
		{0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
		{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{0,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
		
	};
	//マップデータをコピー
	memcpy(m_map, block_data, sizeof(int) * (25 * 55));
}
//アクション
void CObjRooftop::Action()
{
	//主人公の位置を取得
	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	float hx = hero->GetX2();//スクロール
	float hy = hero->GetY2();

	//主人公の衝突状態確認用フラグの初期化
	hero->SetUp(false);
	hero->SetDown(false);
	hero->SetLeft(false);
	hero->SetRight(false);

	//後方スクロールライン　←
	if (hx < 400)
	{
		hero->SetX2(400); //主人公はラインを超えないようにする
		mx_scroll -=-6.0f+hero->GetVX(); //主人公は本来動くべき分の値をm_scrollに加える
		
	}

	//前方スクロールライン →
	if (hx > 400)
	{
		hero->SetX2(400); //主人公はラインを超えないようにする
		mx_scroll -=6.0f+hero->GetVX(); //主人公は本来動くべき分の値をm_scrollに加える

	}

	//スクロールライン　↑
	if (hy > 300)
	{
		hero->SetY2(300); //主人公はラインを超えないようにする
		my_scroll -= 6.0f+hero->GetVY(); //主人公は本来動くべき分の値をm_scrollに加える
	
	}
	//スクロールライン　↓
	if (hy < 300)
	{
		hero->SetY2(300); //主人公はラインを超えないようにする
		my_scroll -=-6.0f+ hero->GetVY(); //主人公は本来動くべき分の値をm_scrollに加える
	}

	//m_mapの全要素にアクセス
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 55; j++)
		{
			if (m_map[i][j] > 0)
			{

				//要素番号を座標に変更
				float x = j * 32.0f;
				float y = i * 32.0f;

				//主人公とブロックの当たり判定
				if ((hx +(-mx_scroll)+ 64.0f > x) && (hx +(-mx_scroll)< x + 64.0f) && (hy+(-my_scroll) + 64.0f > y) && (hy+(-my_scroll) < y + 64.0f))
				{
					//上下左右判定

					//vectorの作成
					float vx = (hx +(-mx_scroll))- x;
					float vy = (hy +(-my_scroll))- y;

					//長さを求める
					float len = sqrt(vx * vx + vy * vy);//sqrt関数は、平方根を返す

					//角度を求める
					float r = atan2(vy, vx);//atan2関数はアークタンジェントを返す
					r = r * 180.0f / 3.14f;

					if (r <= 0.0f)//abs関数は、値の絶対値を求める 符号を無視した値
						r = abs(r);
					else
						r = 360.0f - abs(r);

					//lenがある一定の長さのより短い場合判定に入る
					if (len <44.0f)
					{

						//角度で上下左右を判定
						if ((r < 45 && r >= 0) || r > 315)
						{
							//右
							hero->SetRight(true);//主人公の左の部分が衝突している
							hero->SetX2(x + 32.0f+(mx_scroll));//ブロックの位置+主人公の幅
							hero->SetVX(0.0f);//-VX*反発係数
						}
						if (r > 45 && r < 135)
						{
							//上
							hero->SetDown(true);//主人公の下の部分が衝突している
							hero->SetY2(y - 32.0f+(my_scroll));//ブロックの位置-主人公の幅
							hero->SetVY(0.0f);//-VX*反発係数

						}
						if (r > 135 && r < 225)
						{
							//左
							hero->SetLeft(true);//主人公の右の部分が衝突している
							hero->SetX2(x - 32.0f+(mx_scroll));//ブロックの位置-主人公の幅
							hero->SetVX(0.0f);//-VX*反発係数
						}
						if (r > 225 && r < 315)
						{
							//下
							hero->SetUp(true);//主人公の上の部分が衝突している
							hero->SetY2(y + 32.0f+(my_scroll));//ブロックの位置+主人公の幅
							hero->SetVY(0.0f);//-VX*反発係数
						}
					}
				}
			}
		}
	}
	
}
//ドロー
void CObjRooftop::Draw()
{
	//描画カラー情報
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先表示位置

	//切り取り背景表示
	src.m_top = 0.0f ;
	src.m_left = 3.0f ;
	src.m_right = 500.0f ;
	src.m_bottom = 170.0f ;
	
	//表示位置の設定
	dst.m_top = 64.0f + my_scroll;    //y
	dst.m_left = 64.0f + mx_scroll;   //x
	dst.m_right = 1698.0f + mx_scroll;  //x
	dst.m_bottom = 705.0f + my_scroll; //y

	Draw::Draw(10, &src, &dst, c, 0.0f);
	/*dst.m_top = -100.0f + my_scroll;
	dst.m_left = -100.0f + mx_scroll;
	dst.m_right = 1500.0f + mx_scroll;
	dst.m_bottom = 1468.0f + my_scroll;*/

	

	//マップチップによるblock設置
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 55; j++)
		{
			
			if (m_map[i][j] == 1)//壁
			{
				//切り取り位置の設定
				src.m_top = 0.0f;   //y
				src.m_left = 0.0f; //x
				src.m_right = 75.0f; //x
				src.m_bottom = 75.0f; //y

				//表示位置の設定
				dst.m_top    =  i*32.0f + my_scroll;
				dst.m_left   =  j*32.0f + mx_scroll;
				dst.m_right  =  j*32.0f+32.0f + mx_scroll;
				dst.m_bottom =  i*32.0f+32.0f + my_scroll;

				//描画
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 2)//ベンチ
			{
				//切り取り位置の設定
				src.m_top = 15.0f;   //y
				src.m_left = 100.0f; //x
				src.m_right = 130.0f; //x
				src.m_bottom = 70.0f; //y

				//表示位置の設定
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//描画
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 3)//ベンチ
			{
				//切り取り位置の設定
				src.m_top = 15.0f;   //y
				src.m_left = 130.0f; //x
				src.m_right = 170.0f; //x
				src.m_bottom = 70.0f; //y

				//表示位置の設定
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//描画
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 4)//ベンチ
			{
				//切り取り位置の設定
				src.m_top = 20.0f;   //y
				src.m_left = 180.0f; //x
				src.m_right = 210.0f; //x
				src.m_bottom = 65.0f; //y

				//表示位置の設定
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//描画
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 5)//ベンチ
			{
				//切り取り位置の設定
				src.m_top = 20.0f;   //y
				src.m_left = 210.0f; //x
				src.m_right = 245.0f; //x
				src.m_bottom = 65.0f; //y

				//表示位置の設定
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//描画
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 6)//草
			{
				//切り取り位置の設定
				src.m_top = 20.0f;   //y
				src.m_left = 260.0f; //x
				src.m_right = 293.0f; //x
				src.m_bottom = 55.0f; //y

				//表示位置の設定
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//描画
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 7)//壁
			{
				//切り取り位置の設定
				src.m_top = 18.0f;   //y
				src.m_left = 390.0f; //x
				src.m_right = 415.0f; //x
				src.m_bottom = 40.0f; //y

				//表示位置の設定
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//描画
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 8)//花壇
			{
				//切り取り位置の設定
				src.m_top = 15.0f;   //y
				src.m_left = 305.0f; //x
				src.m_right = 370.0f; //x
				src.m_bottom = 77.0f; //y

				//表示位置の設定
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//描画
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}
			
			if (m_map[i][j] == 9)//草
			{
				//切り取り位置の設定
				src.m_top = 7.0f;   //y
				src.m_left = 430.0f; //x
				src.m_right = 495.0f; //x
				src.m_bottom = 55.0f; //y

				//表示位置の設定
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//描画
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 10)//草
			{
				//切り取り位置の設定
				src.m_top = 85.0f;   //y
				src.m_left = 5.0f; //x
				src.m_right = 43.0f; //x
				src.m_bottom = 115.0f; //y

				//表示位置の設定
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//描画
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 11)//草
			{
				//切り取り位置の設定
				src.m_top = 87.0f;   //y
				src.m_left = 47.0f; //x
				src.m_right = 83.0f; //x
				src.m_bottom = 118.0f; //y

				//表示位置の設定
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//描画
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 12)//草
			{
				//切り取り位置の設定
				src.m_top = 77.0f;   //y
				src.m_left = 92.0f; //x
				src.m_right = 129.0f; //x
				src.m_bottom = 108.0f; //y

				//表示位置の設定
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//描画
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 13)//草
			{
				//切り取り位置の設定
				src.m_top = 70.0f;   //y
				src.m_left = 130.0f; //x
				src.m_right = 165.0f; //x
				src.m_bottom = 105.0f; //y

				//表示位置の設定
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//描画
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 14)//草
			{
				//切り取り位置の設定
				src.m_top = 105.0f;   //y
				src.m_left = 130.0f; //x
				src.m_right = 165.0f; //x
				src.m_bottom = 130.0f; //y

				//表示位置の設定
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//描画
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			//if (m_map[i][j] == 15)//草
			//{
			//	//敵機オブジェクト作成
			//	CObjEnemy* obj_enemy = new CObjEnemy(800, 300); //敵機オブジェクト作成
			//	Objs::InsertObj(obj_enemy, OBJ_ENEMY, 3); //作った敵機オブジェクトをオブジェクトマネージャーに登録

			//}
		}
	}
}
