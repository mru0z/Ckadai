#include "Sample.h"

//���C���֐�
int main()
{
	//SampleClass�N���X�̃C���X�^���X�����
	SampleClass *a;

	a = new SampleClass();

	//�R�̃����o�֐����Ăяo��
	a->Input();
	a->Plus();
	a->Disp();

	delete a;
}