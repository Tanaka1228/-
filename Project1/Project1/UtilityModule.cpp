//--UnitVec�֐�----
//����1 float* vx :�x�N�g����X�����̃|�C���^
//����2 float* vy :�x�N�g����Y�����̃|�C���^
//�߂�l bool     :true=�v�Z�����@false=�v�Z���s
//���e
//�����̃x�N�g���𐳋K�������̒l��vx,vy�ύX
#include <corecrt_math.h>
bool UnitVec(float* vx, float* vy)
{

	//�x�N�g���̒��������߂�(�O�����̒藝)
	float r = 0.0f;
	r = (*vx) * (*vx) + (*vy) * (*vy);
	r = sqrt(r);//r�����[�g�����߂�

	//������0���ǂ������ׂ�
	if (r == 0.0f)
	{
		return false;//0�Ȃ�v�Z���s
	}
	else
	{
		//���K�����s���B
		(*vx) = 1.0f / r * (*vx);
		 (*vy)= 1.0f / r * (*vy);
	}

	//�v�Z����
	return true;
}