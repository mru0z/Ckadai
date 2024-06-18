
#include<iostream>
#include "Sample.h"  //クラスを宣言しているヘッダー

//メンバ変数に値を代入するメンバ関数
void Sample::Input1() {
	x = 10;
}

//メンバ変数同士の計算を行うメンバ関数
void Sample::Input2() {
	int x;
	x = 20;
}

//メンバ変数の内容を出力するメンバ関数
void Sample::Disp() {
	std::cout << x;
}