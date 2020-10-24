//--UnitVec関数----
//引数1 float* vx :ベクトルのX成分のポインタ
//引数2 float* vy :ベクトルのY成分のポインタ
//戻り値 bool     :true=計算成功　false=計算失敗
//内容
//引数のベクトルを正規化しその値をvx,vy変更
#include <corecrt_math.h>
bool UnitVec(float* vx, float* vy)
{

	//ベクトルの長さを求める(三平方の定理)
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