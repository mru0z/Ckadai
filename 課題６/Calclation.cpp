#include<iostream>
#include"Calclation.h"

//渡された値をメンバ変数に代入する関数（アクセス関数）
void Calclation::SetA(float a) {
	A = a;
}

void Calclation::SetB(float b) {
	B = b;
}

//メンバ変数の内容を出力するメンバ関数
void Calclation::Disp()
{
	std::cout << A << " + "<< B <<" = "<< A + B << "\n";
	std::cout << A << " - " << B << " = " << A - B << "\n";
}