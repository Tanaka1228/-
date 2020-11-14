//�g�p����w�b�_�[�t�@�C��
#include"GameL\DrawTexture.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneManager.h"
#include"GameL/SceneObjManager.h"

#include"GameHead.h"
#include"ObjRooftop.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjRooftop::Init()
{
	mx_scroll = 0.0f;
	my_scroll = 0.0f;

	//�}�b�v���
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
	//�}�b�v�f�[�^���R�s�[
	memcpy(m_map, block_data, sizeof(int) * (25 * 55));
}
//�A�N�V����
void CObjRooftop::Action()
{
	//��l���̈ʒu���擾
	CObjHero* hero = (CObjHero*)Objs::GetObj(OBJ_HERO);
	float hx = hero->GetX2();//�X�N���[��
	float hy = hero->GetY2();

	//��l���̏Փˏ�Ԋm�F�p�t���O�̏�����
	hero->SetUp(false);
	hero->SetDown(false);
	hero->SetLeft(false);
	hero->SetRight(false);

	//����X�N���[�����C���@��
	if (hx < 400)
	{
		hero->SetX2(400); //��l���̓��C���𒴂��Ȃ��悤�ɂ���
		mx_scroll -=-6.0f+hero->GetVX(); //��l���͖{�������ׂ����̒l��m_scroll�ɉ�����
		
	}

	//�O���X�N���[�����C�� ��
	if (hx > 400)
	{
		hero->SetX2(400); //��l���̓��C���𒴂��Ȃ��悤�ɂ���
		mx_scroll -=6.0f+hero->GetVX(); //��l���͖{�������ׂ����̒l��m_scroll�ɉ�����

	}

	//�X�N���[�����C���@��
	if (hy > 300)
	{
		hero->SetY2(300); //��l���̓��C���𒴂��Ȃ��悤�ɂ���
		my_scroll -= 6.0f+hero->GetVY(); //��l���͖{�������ׂ����̒l��m_scroll�ɉ�����
	
	}
	//�X�N���[�����C���@��
	if (hy < 300)
	{
		hero->SetY2(300); //��l���̓��C���𒴂��Ȃ��悤�ɂ���
		my_scroll -=-6.0f+ hero->GetVY(); //��l���͖{�������ׂ����̒l��m_scroll�ɉ�����
	}

	//m_map�̑S�v�f�ɃA�N�Z�X
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 55; j++)
		{
			if (m_map[i][j] > 0)
			{

				//�v�f�ԍ������W�ɕύX
				float x = j * 32.0f;
				float y = i * 32.0f;

				//��l���ƃu���b�N�̓����蔻��
				if ((hx +(-mx_scroll)+ 64.0f > x) && (hx +(-mx_scroll)< x + 64.0f) && (hy+(-my_scroll) + 64.0f > y) && (hy+(-my_scroll) < y + 64.0f))
				{
					//�㉺���E����

					//vector�̍쐬
					float vx = (hx +(-mx_scroll))- x;
					float vy = (hy +(-my_scroll))- y;

					//���������߂�
					float len = sqrt(vx * vx + vy * vy);//sqrt�֐��́A��������Ԃ�

					//�p�x�����߂�
					float r = atan2(vy, vx);//atan2�֐��̓A�[�N�^���W�F���g��Ԃ�
					r = r * 180.0f / 3.14f;

					if (r <= 0.0f)//abs�֐��́A�l�̐�Βl�����߂� �����𖳎������l
						r = abs(r);
					else
						r = 360.0f - abs(r);

					//len��������̒����̂��Z���ꍇ����ɓ���
					if (len <44.0f)
					{

						//�p�x�ŏ㉺���E�𔻒�
						if ((r < 45 && r >= 0) || r > 315)
						{
							//�E
							hero->SetRight(true);//��l���̍��̕������Փ˂��Ă���
							hero->SetX2(x + 32.0f+(mx_scroll));//�u���b�N�̈ʒu+��l���̕�
							hero->SetVX(0.0f);//-VX*�����W��
						}
						if (r > 45 && r < 135)
						{
							//��
							hero->SetDown(true);//��l���̉��̕������Փ˂��Ă���
							hero->SetY2(y - 32.0f+(my_scroll));//�u���b�N�̈ʒu-��l���̕�
							hero->SetVY(0.0f);//-VX*�����W��

						}
						if (r > 135 && r < 225)
						{
							//��
							hero->SetLeft(true);//��l���̉E�̕������Փ˂��Ă���
							hero->SetX2(x - 32.0f+(mx_scroll));//�u���b�N�̈ʒu-��l���̕�
							hero->SetVX(0.0f);//-VX*�����W��
						}
						if (r > 225 && r < 315)
						{
							//��
							hero->SetUp(true);//��l���̏�̕������Փ˂��Ă���
							hero->SetY2(y + 32.0f+(my_scroll));//�u���b�N�̈ʒu+��l���̕�
							hero->SetVY(0.0f);//-VX*�����W��
						}
					}
				}
			}
		}
	}
	
}
//�h���[
void CObjRooftop::Draw()
{
	//�`��J���[���
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`���\���ʒu

	//�؂���w�i�\��
	src.m_top = 0.0f ;
	src.m_left = 3.0f ;
	src.m_right = 500.0f ;
	src.m_bottom = 170.0f ;
	
	//�\���ʒu�̐ݒ�
	dst.m_top = 64.0f + my_scroll;    //y
	dst.m_left = 64.0f + mx_scroll;   //x
	dst.m_right = 1698.0f + mx_scroll;  //x
	dst.m_bottom = 705.0f + my_scroll; //y

	Draw::Draw(10, &src, &dst, c, 0.0f);
	/*dst.m_top = -100.0f + my_scroll;
	dst.m_left = -100.0f + mx_scroll;
	dst.m_right = 1500.0f + mx_scroll;
	dst.m_bottom = 1468.0f + my_scroll;*/

	

	//�}�b�v�`�b�v�ɂ��block�ݒu
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 55; j++)
		{
			
			if (m_map[i][j] == 1)//��
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 0.0f;   //y
				src.m_left = 0.0f; //x
				src.m_right = 75.0f; //x
				src.m_bottom = 75.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top    =  i*32.0f + my_scroll;
				dst.m_left   =  j*32.0f + mx_scroll;
				dst.m_right  =  j*32.0f+32.0f + mx_scroll;
				dst.m_bottom =  i*32.0f+32.0f + my_scroll;

				//�`��
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 2)//�x���`
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 15.0f;   //y
				src.m_left = 100.0f; //x
				src.m_right = 130.0f; //x
				src.m_bottom = 70.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 3)//�x���`
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 15.0f;   //y
				src.m_left = 130.0f; //x
				src.m_right = 170.0f; //x
				src.m_bottom = 70.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 4)//�x���`
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 20.0f;   //y
				src.m_left = 180.0f; //x
				src.m_right = 210.0f; //x
				src.m_bottom = 65.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 5)//�x���`
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 20.0f;   //y
				src.m_left = 210.0f; //x
				src.m_right = 245.0f; //x
				src.m_bottom = 65.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}
			if (m_map[i][j] == 6)//��
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 20.0f;   //y
				src.m_left = 260.0f; //x
				src.m_right = 293.0f; //x
				src.m_bottom = 55.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 7)//��
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 18.0f;   //y
				src.m_left = 390.0f; //x
				src.m_right = 415.0f; //x
				src.m_bottom = 40.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 8)//�Ԓd
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 15.0f;   //y
				src.m_left = 305.0f; //x
				src.m_right = 370.0f; //x
				src.m_bottom = 77.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}
			
			if (m_map[i][j] == 9)//��
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 7.0f;   //y
				src.m_left = 430.0f; //x
				src.m_right = 495.0f; //x
				src.m_bottom = 55.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 10)//��
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 85.0f;   //y
				src.m_left = 5.0f; //x
				src.m_right = 43.0f; //x
				src.m_bottom = 115.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 11)//��
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 87.0f;   //y
				src.m_left = 47.0f; //x
				src.m_right = 83.0f; //x
				src.m_bottom = 118.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 12)//��
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 77.0f;   //y
				src.m_left = 92.0f; //x
				src.m_right = 129.0f; //x
				src.m_bottom = 108.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 13)//��
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 70.0f;   //y
				src.m_left = 130.0f; //x
				src.m_right = 165.0f; //x
				src.m_bottom = 105.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			if (m_map[i][j] == 14)//��
			{
				//�؂���ʒu�̐ݒ�
				src.m_top = 105.0f;   //y
				src.m_left = 130.0f; //x
				src.m_right = 165.0f; //x
				src.m_bottom = 130.0f; //y

				//�\���ʒu�̐ݒ�
				dst.m_top = i * 32.0f + my_scroll;
				dst.m_left = j * 32.0f + mx_scroll;
				dst.m_right = j * 32.0f + 32.0f + mx_scroll;
				dst.m_bottom = i * 32.0f + 32.0f + my_scroll;

				//�`��
				Draw::Draw(13, &src, &dst, c, 0.0f);
			}

			//if (m_map[i][j] == 15)//��
			//{
			//	//�G�@�I�u�W�F�N�g�쐬
			//	CObjEnemy* obj_enemy = new CObjEnemy(800, 300); //�G�@�I�u�W�F�N�g�쐬
			//	Objs::InsertObj(obj_enemy, OBJ_ENEMY, 3); //������G�@�I�u�W�F�N�g���I�u�W�F�N�g�}�l�[�W���[�ɓo�^

			//}
		}
	}
}
