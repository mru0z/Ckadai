#include<iostream>
#include"Data.h"

//���C���֐�
int main() {
	//�ϐ�i�ɓK���Ȓl����������
	int i;
	std::cin >> i;

	//Data�N���X�̃C���X�^���X�����
	Data x;

	//�����o�֐����Ăяo��
	x.SetValue(i);
	x.Disp();
}