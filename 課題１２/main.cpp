#include "Sample.h"

//メイン関数
int main()
{
	//SampleClassクラスのインスタンスを作る
	SampleClass *a;

	a = new SampleClass();

	//３つのメンバ関数を呼び出す
	a->Input();
	a->Plus();
	a->Disp();

	delete a;
}