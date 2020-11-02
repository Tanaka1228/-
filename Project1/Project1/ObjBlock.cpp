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
	int block_data[25][25] =
	{

		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,0,0},
		{0,0,15,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,15,0,0},
		{0,0,15,3,4,5,4,5,4,5,0,1,0,0,0,0,0,0,0,0,0,0,15,0,0},
		{0,0,15,3,6,7,6,7,6,7,0,1,2,0,0,0,0,0,0,0,0,0,15,0,0},
		{0,0,15,0,0,0,0,0,0,0,0,1,2,0,0,0,0,0,0,0,0,0,15,0,0},
		{0,0,15,8,8,8,8,8,8,8,8,8,2,0,0,0,0,0,0,0,0,0,15,0,0},
		{0,0,15,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,15,0,0},
		{0,0,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,0,0},
		{0,0,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,0,0},
		{0,0,15,0,0,0,0,0,0,0,0,2,9,10,2,0,2,9,10,2,0,0,15,0,0},
		{0,0,15,0,0,0,0,0,0,0,0,2,11,12,2,0,2,11,12,2,0,0,15,0,0},
		{0,0,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,0,0},
		{0,0,15,0,0,0,0,0,0,0,0,2,9,10,2,0,2,9,10,2,0,0,15,0,0},
		{0,0,15,0,0,0,0,0,0,0,0,2,11,12,2,0,2,11,12,2,0,0,15,0,0},
		{0,0,13,13,13,0,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,0,0},
		{0,0,14,14,14,0,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
								 
		

	};
	//�}�b�v�f�[�^���R�s�[
	memcpy(m_map, block_data, sizeof(int) * (25 * 25));
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
	src.m_left = 10.0f;
	src.m_right = 500.0f;
	src.m_bottom = 500.0f;
	dst.m_top = 96.0f;
	dst.m_left = 96.0f;
	dst.m_right = 704.0f;
	dst.m_bottom = 500.0f;
	Draw::Draw(9, &src, &dst, c, 0.0f);

	//�}�b�v�`�b�v�ɂ��block�ݒu
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 25; j++)
		{
			if (m_map[i][j] == 1)
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 135.0f;   //y
				src.m_left = 315.0f; //x
				src.m_right = 450.0f; //x
				src.m_bottom = 215.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i*32.0f;
				dst.m_left = j*32.0f;
				dst.m_right = dst.m_left+32.0;
				dst.m_bottom = dst.m_top+32.0;

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
				dst.m_top = i * 32.0f;
				dst.m_left = j * 32.0;
				dst.m_right = dst.m_left + 32.0;
				dst.m_bottom = dst.m_top + 32.0;

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
				dst.m_top = i * 32.0f;
				dst.m_left = j * 32.0;
				dst.m_right = dst.m_left + 32.0;
				dst.m_bottom = dst.m_top + 32.0;

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
				dst.m_top = i * 32.0f;
				dst.m_left = j * 32.0;
				dst.m_right = dst.m_left + 32.0;
				dst.m_bottom = dst.m_top + 32.0;

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
				dst.m_top = i * 32.0f;
				dst.m_left = j * 32.0;
				dst.m_right = dst.m_left + 32.0;
				dst.m_bottom = dst.m_top + 32.0;

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
				dst.m_top = i * 32.0f;
				dst.m_left = j * 32.0;
				dst.m_right = dst.m_left + 32.0;
				dst.m_bottom = dst.m_top + 32.0;

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
				dst.m_top = i * 32.0f;
				dst.m_left = j * 32.0;
				dst.m_right = dst.m_left + 32.0;
				dst.m_bottom = dst.m_top + 32.0;

				//�`��
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 8)
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 135.0f;   //y
				src.m_left = 320.0f; //x
				src.m_right = 435.0f; //x
				src.m_bottom = 315.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f;
				dst.m_left = j * 32.0;
				dst.m_right = dst.m_left + 32.0;
				dst.m_bottom = dst.m_top + 32.0;

				//�`��
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 9)
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 150.0f;   //y
				src.m_left = 10.0f; //x
				src.m_right = 140.0f; //x
				src.m_bottom = 205.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f;
				dst.m_left = j * 32.0;
				dst.m_right = dst.m_left + 32.0;
				dst.m_bottom = dst.m_top + 32.0;

				//�`��
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 10)
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 150.0f;   //y
				src.m_left = 140.0f; //x
				src.m_right = 255.0f; //x
				src.m_bottom = 205.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f;
				dst.m_left = j * 32.0;
				dst.m_right = dst.m_left + 32.0;
				dst.m_bottom = dst.m_top + 32.0;

				//�`��
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 11)
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 205.0f;   //y
				src.m_left = 10.0f; //x
				src.m_right = 140.0f; //x
				src.m_bottom = 295.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f;
				dst.m_left = j * 32.0;
				dst.m_right = dst.m_left + 32.0;
				dst.m_bottom = dst.m_top + 32.0;

				//�`��
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 12)
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 205.0f;   //y
				src.m_left = 140.0f; //x
				src.m_right = 255.0f; //x
				src.m_bottom = 295.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f;
				dst.m_left = j * 32.0;
				dst.m_right = dst.m_left + 32.0;
				dst.m_bottom = dst.m_top + 32.0;

				//�`��
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 13)
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 295.0f;   //y
				src.m_left = 200.0f; //x
				src.m_right = 265.0f; //x
				src.m_bottom = 360.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f;
				dst.m_left = j * 32.0;
				dst.m_right = dst.m_left + 32.0;
				dst.m_bottom = dst.m_top + 32.0;

				//�`��
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 14)
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 300.0f;   //y
				src.m_left = 110.0f; //x
				src.m_right = 170.0f; //x
				src.m_bottom = 365.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f;
				dst.m_left = j * 32.0;
				dst.m_right = dst.m_left + 32.0;
				dst.m_bottom = dst.m_top + 32.0;

				//�`��
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 15)
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 345.0f;   //y
				src.m_left = 325.0f; //x
				src.m_right = 380.0f; //x
				src.m_bottom = 405.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f;
				dst.m_left = j * 32.0;
				dst.m_right = dst.m_left + 32.0;
				dst.m_bottom = dst.m_top + 32.0;

				//�`��
				Draw::Draw(8, &src, &dst, c, 0.0f);
			}

		}
	}
}