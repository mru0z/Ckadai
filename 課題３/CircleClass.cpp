/*
	CircleClass.cpp
	CircleClassクラスの各メンバ関数を定義
*/

//ヘッダーをインクルード
#include<iostream>
#include"CircleClass.h"

//円の半径を取得する関数
void CircleClass::Input()
{
	std::cout << "半径は？";
	std::cin >> r;
}

void CircleClass::Calc()
{
	area = r * r * 3.14f;
}

//円の面積を出力する関数
void CircleClass::Disp()
{
	std::cout << "円の面積＝" << area << "\n";
}