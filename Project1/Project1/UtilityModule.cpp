//--UnitVec関数----
//引数1 float* vx :ベクトルのX成分のポインタ
//引数2 float* vy :ベクトルのY成分のポインタ
//戻り値 bool     :true=計算成功　false=計算失敗
//内容
//引数のベクトルを正規化しその値をvx,vy変更
#include <math.h>
bool UnitVec(float* vx, float* vy)
{

	//ベクトルの長さを求める(三平方の定理) 斜め移動するとはやくなるための対処
	float r = 0.0f;
	r = (*vx) * (*vx) + (*vy) * (*vy);
	r = sqrt(r);//rをルートを求める

	//長さが0かどうか調べる
	if (r == 0.0f)
	{
		return false;//0なら計算失敗
	}
	else
	{
		//正規化を行う。
		(*vx) = 1.0f / r * (*vx);
		 (*vy)= 1.0f / r * (*vy);
	}

	//計算成功
	return true;
}


//引数1 float pos_x      :領域外かどうかしらべるｘ位置
//引数2 float pos_y      :領域外かどうかしらべるｙ位置
//引数3 float window_x   :領域のtop位置
//引数4 float window_y   :領域のleft位置
//引数5 float window_w   :領域のright位置
//引数6 float window_h   :領域のbottom位置
//戻り値 bool            :true=領域内 false=領域外
//内容
//領域内かどうかしらべる位置pos_(x,y)がwindow_(xywh)の中か外かを調べる
bool CheckWindow(float pos_x, float pos_y,
	float window_x, float window_y, float window_w, float window_h)
{

	//領域チェック
	if (pos_x < window_x)
	{
		return false;//領域外
	}

	//領域チェック
	if (pos_x > window_w)
	{
		return false;//領域外
	}


	//領域チェック
	if (pos_y < window_y)
	{
		return false;//領域外
	}


	//領域チェック
	if (pos_y > window_h)
	{
		return false;//領域外
	}

	return true;//領域内
}

//---GetAtan2Angle関数
//引数1 float w :幅
//引数2 float h :高さ
//戻り値　float :角度(0°～360°)
//内容
//高さと幅から直角三角形があると仮定しその角度を求める。
float GetAtan2Angle(float w, float h)
{
	//atan2で角度を求める
	float r = atan2(w, h) * 180.0f / 3.14f;

	//-180°～-0°を180°～360°に変換
	if (r < 0)
	{
		r = 360 - fabsf(r);
	}

	return r;
}