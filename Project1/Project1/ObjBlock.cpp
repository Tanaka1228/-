//�g�p����w�b�_�[�t�@�C��
#include"GameL\DrawTexture.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneManager.h"

#include"GameHead.h"
#include"ObjBlock.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjBlock::Init()
{

//�}�b�v���
	int block_data[10][10] =
	{
		{0,4,5,4,5,0,1,0,0,0},
		{3,6,7,6,7,0,1,2,0,0},
		{0,0,0,0,0,0,1,0,0,0},
		{8,8,8,8,8,8,1,2,0,0},
		{2,2,2,2,2,2,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,2,1,1,2},
		{0,0,0,0,0,0,2,1,1,2},
		{0,0,0,0,0,0,0,0,0,0},
	};
	//�}�b�v�f�[�^���R�s�[
	memcpy(m_map, block_data, sizeof(int) * (10 * 10));
}
//�A�N�V����
void CObjBlock::Action()
{

}
//�h���[
void CObjBlock::Draw()
{
	//�`��J���[���
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`���\���ʒu

	//�w�i�\��
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 800.0f;
	src.m_bottom = 600.0f;
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;
	Draw::Draw(9, &src, &dst, c, 0.0f);

	//�}�b�v�`�b�v�ɂ��block�ݒu
	

	

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (m_map[i][j] == 1)
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 0.0f;   //y
				src.m_left = 5.0f; //x
				src.m_right = src.m_left + 50.0f; //x
				src.m_bottom = 140.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i*64.0f;
				dst.m_left = j*64.0f;
				dst.m_right = dst.m_left+64.0;
				dst.m_bottom = dst.m_top+64.0;

				//�`��
				Draw::Draw(8, &src, &dst, c, 0.0f);			
			}
			if (m_map[i][j] == 2)
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 0.0f;   //y
				src.m_left = 220.0f; //x
				src.m_right =  280.0f; //x
				src.m_bottom = 60.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 64.0f;
				dst.m_left = j * 64.0;
				dst.m_right = dst.m_left + 64.0;
				dst.m_bottom = dst.m_top + 64.0;

				//�`��
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 3)
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 60.0f;   //y
				src.m_left = 220.0f; //x
				src.m_right = 280.0f; //x
				src.m_bottom = 115.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 64.0f;
				dst.m_left = j * 64.0;
				dst.m_right = dst.m_left + 64.0;
				dst.m_bottom = dst.m_top + 64.0;

				//�`��
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 4)
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 0.0f;   //y
				src.m_left = 350.0f; //x
				src.m_right = 380.0f; //x
				src.m_bottom = 45.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 64.0f;
				dst.m_left = j * 64.0;
				dst.m_right = dst.m_left + 64.0;
				dst.m_bottom = dst.m_top + 64.0;

				//�`��
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 5)
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 0.0f;   //y
				src.m_left = 380.0f; //x
				src.m_right = 420.0f; //x
				src.m_bottom = 45.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 64.0f;
				dst.m_left = j * 64.0;
				dst.m_right = dst.m_left + 64.0;
				dst.m_bottom = dst.m_top + 64.0;

				//�`��
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 6)
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 45.0f;   //y
				src.m_left = 350.0f; //x
				src.m_right = 380.0f; //x
				src.m_bottom = 80.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 64.0f;
				dst.m_left = j * 64.0;
				dst.m_right = dst.m_left + 64.0;
				dst.m_bottom = dst.m_top + 64.0;

				//�`��
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 7)
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 45.0f;   //y
				src.m_left = 380.0f; //x
				src.m_right = 420.0f; //x
				src.m_bottom = 80.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 64.0f;
				dst.m_left = j * 64.0;
				dst.m_right = dst.m_left + 64.0;
				dst.m_bottom = dst.m_top + 64.0;

				//�`��
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 8)
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 0.0f;   //y
				src.m_left = 70.0f; //x
				src.m_right = 210.0f; //x
				src.m_bottom = 60.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 64.0f;
				dst.m_left = j * 64.0;
				dst.m_right = dst.m_left + 64.0;
				dst.m_bottom = dst.m_top + 64.0;

				//�`��
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
		}
	}
}