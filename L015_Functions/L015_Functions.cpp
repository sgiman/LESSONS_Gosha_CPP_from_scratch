// **************************************************************************************
// L015_Functions.cpp:
// ФУНКЦИИ || LESSON 15
// --------------------------------------------------------------------------------------
// С++ | Visual Studio 2022
// --------------------------------------------------------------------------------------
// Gosha Dudar - C++ lessons from scratch
// https://www.youtube.com/watch?v=qSHP98i9mDU&list=PL0lO_mIqDDFXNfqIL9PHQM7Wg_kOtDZsW
// Writing by sgiman @ 2022-2023
// **************************************************************************************

#include <iostream>

using namespace std;

// Портотипы функций (описания)
void func(int num);
float sum(float x, float y);


/************ MAIN ************/
int main(int arg, char* argv[])
{
	setlocale(LC_ALL, "ru");

	int num = 234;
	func(num);
	cout << "SUM = " << sum(23.23, 54.1);


	/************ END ***********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();	// <iostream>
	return 0;
}


/*--------- func ---------*/
void func(int num)
{
	cout << "Parameter - " << num << endl;
}


/*---------- sum ---------*/
float sum(float x, float y)
{
	float result;
	result = x + y;
	return result;
}