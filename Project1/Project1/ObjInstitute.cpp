//�g�p����w�b�_�[�t�@�C��
#include"GameL\DrawTexture.h"
#include"GameL/DrawFont.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneManager.h"
#include"GameL\SceneObjManager.h"

#include"GameHead.h"
#include "ObjInstitute.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjInstitute::Init()
{
	mx_scroll = 0.0f;
	my_scroll = 0.0f;

	//�}�b�v���
	int block_data[25][25] =
	{


	};
	//�}�b�v�f�[�^���R�s�[
	memcpy(m_map, block_data, sizeof(int) * (25 * 25));

}
//�A�N�V����
void CObjInstitute::Action()
{

}
//�h���[
void CObjInstitute::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`���\���ʒu

	//�w�i�\��
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 0.0f;
	src.m_bottom = 0.0f;

	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 0.0f;
	dst.m_bottom = 0.0;
	Draw::Draw(10, &src, &dst, c, 0.0f);

	//�}�b�v�`�b�v�ɂ��block�ݒu
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 25; j++)
		{

		}
	}
}