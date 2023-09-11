// **************************************************************************************
// L007_Exceptions.cpp: 
// Exceptions | Lesson 007
// --------------------------------------------------------------------------------------
// С++ | Visual Studio 2022
// --------------------------------------------------------------------------------------
// Gosha Dudar - C++ lessons from scratch (с нуля)
// https://www.youtube.com/watch?v=qSHP98i9mDU&list=PL0lO_mIqDDFXNfqIL9PHQM7Wg_kOtDZsW
// Writing by sgiman @ 2022-2023
// **************************************************************************************

#include <iostream>

using namespace std;

int main()
{
	float num1, num2;

	cout << "Enter num1: ";
	cin >> num1;

	cout << "Enter num2: ";
	cin >> num2;

	cout << "num1 + num2 = " << num1 + num2 << endl;

	cout << "num1 / num2 = ";

	/********** try - catch **********/
	try
	{
		if (num2 == 0)
			throw 123;	// code error
		else
			cout << num1 / num2 << endl; // OK!
	}
	catch (int i)
	{
		cout << "ERROR №" << i << "divide by 0!!!" << endl;
	}

	/************ END **********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();			// <iostream>
	return 0;
}