// **************************************************************************************
// L022_this.cpp:
// 022 - Указатель this | Lesson 22
// --------------------------------------------------------------------------------------
// С++ | Visual Studio 2022
// --------------------------------------------------------------------------------------
// Gosha Dudar - C++ lessons from scratch
// https://www.youtube.com/watch?v=qSHP98i9mDU&list=PL0lO_mIqDDFXNfqIL9PHQM7Wg_kOtDZsW
// Writing by sgiman @ 2022-2023
// **************************************************************************************

#include <iostream>
#include <string> 

using namespace std;

class Test
{
private:
	int a, b, c;

public:
	// this  - указывает на переменные из области видимости свойств private
	// void set (int a_a, int b_b, int c_c)		// SET
	void set(int a, int b, int c)				// SET
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}

	void get()									// GET
	{
		cout << "\n a = " << a << ", b = " << b << ", c = " << c << endl;
	}
};


int main(int arg, char* argv[])
{
	setlocale(LC_ALL, "ru");

	Test test;
	test.set(12, 23, 1);
	test.get();

	/************ END ***********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();	// <iostream>
	return 0;
}