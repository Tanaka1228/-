//�g�p����w�b�_�\�t�@�C��
#include"GameL\DrawTexture.h"
#include"GameL\WinInputs.h"
#include"GameL\SceneObjManager.h"
#include"GameL\DrawFont.h"

#include"GameHead.h"
#include"ObjEnd.h"
#include"SceneTitle.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjEnd::Init()
{
	bool m_key_flag = false;
}

//�A�N�V����
void CObjEnd::Action()
{
	
	//�G���^�[�L�[�������ăV�[���F�Q�[��Title�Ɉڍs����
	if (Input::GetVKey(VK_RETURN) == true)
	{
		if (m_key_flag == true)
		{
			Scene::SetScene(new CSceneTitle());

		}

	}

	else
	{
		m_key_flag == true;
	}


}

//�h���[
void CObjEnd::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f, };
	RECT_F src;
	RECT_F dst;

	//�^�C�g�����̕\��
	Font::StrDraw(L"�d�m�c", 350, 250, 32, c);


	//�^�C�g���I�u�W�F�N�g�쐬
	CObjEnd* obj = new CObjEnd();
	Objs::InsertObj(obj, OBJ_END, 10);
}