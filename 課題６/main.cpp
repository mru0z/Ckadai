#include "Calclation.h"
//プロトタイプ宣言
void SetX(float a, float b);
void SetY(float a, float b);
//グローバル変数

//メイン関数
int main()
{
	//インスタンスＸの処理
	SetX(5.0, 10.0);
	
	//インスタンスＹの処理
	SetY(8.0, 3.0);
	
}
//インスタンスＸのアクセス関数を呼ぶ
void SetX(float a, float b)
{
	Calclation* x;
	x = new Calclation();
	x->SetA(a);
	x->SetB(b);
	x->Disp();
	delete x;
}
//インスタンスＹのアクセス関数を呼ぶ
void SetY(float a, float b)
{
	Calclation* y;
	y = new Calclation();
	y->SetA(a);
	y->SetB(b);
	y->Disp();
	delete y;
}
