
#include<iostream>
#include "Sample.h"  //�N���X��錾���Ă���w�b�_�[

//�����o�ϐ��ɒl�������郁���o�֐�
void Sample::Input1() {
	x = 10;
}

//�����o�ϐ����m�̌v�Z���s�������o�֐�
void Sample::Input2() {
	int x;
	x = 20;
}

//�����o�ϐ��̓��e���o�͂��郁���o�֐�
void Sample::Disp() {
	std::cout << x;
}