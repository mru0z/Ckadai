#include "Calclation.h"
//�v���g�^�C�v�錾
void SetX(float a, float b);
void SetY(float a, float b);
//�O���[�o���ϐ�

//���C���֐�
int main()
{
	//�C���X�^���X�w�̏���
	SetX(5.0, 10.0);
	
	//�C���X�^���X�x�̏���
	SetY(8.0, 3.0);
	
}
//�C���X�^���X�w�̃A�N�Z�X�֐����Ă�
void SetX(float a, float b)
{
	Calclation* x;
	x = new Calclation();
	x->SetA(a);
	x->SetB(b);
	x->Disp();
	delete x;
}
//�C���X�^���X�x�̃A�N�Z�X�֐����Ă�
void SetY(float a, float b)
{
	Calclation* y;
	y = new Calclation();
	y->SetA(a);
	y->SetB(b);
	y->Disp();
	delete y;
}
