#include<iostream>
#include"Calclation.h"

//�n���ꂽ�l�������o�ϐ��ɑ������֐��i�A�N�Z�X�֐��j
void Calclation::SetA(float a) {
	A = a;
}

void Calclation::SetB(float b) {
	B = b;
}

//�����o�ϐ��̓��e���o�͂��郁���o�֐�
void Calclation::Disp()
{
	std::cout << A << " + "<< B <<" = "<< A + B << "\n";
	std::cout << A << " - " << B << " = " << A - B << "\n";
}