// **************************************************************************************
// L003_Variables_Calcultor.cpp:  
// Variables Calcultor (Lesson 003)
// --------------------------------------------------------------------------------------
// С++ | Visual Studio 2022
// --------------------------------------------------------------------------------------
// Gosha Dudar - C++ lessons from scratch (с нуля)
// https://www.youtube.com/watch?v=qSHP98i9mDU&list=PL0lO_mIqDDFXNfqIL9PHQM7Wg_kOtDZsW
// Writing by sgiman @ 2022-2023
//**************************************************************************************

/*-------------------------------
int
unsigned int
short int
float
char
string
bool
--------------------------------*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	// vars
	int num = 10;
	float pi = 3.14;
	cout << "PI is " << pi << endl;

	// input-output
	char sym;
	cout << "Input symbol: ";
	cin >> sym;
	cout << "User wrote is " << sym;

	/* CALCULATOR*/
	int num1, num2;

	/* SUMA */
	cout << "\n\n------- SUMA -------\n";
	cout << "Enter Number 1: ";
	cin >> num1;

	cout << "Enter Number 3: ";
	cin >> num2;

	cout << "SUMMA = " << num1 + num2;

	/* DIVIDE */
	float dnum1, dnum2;

	cout << "\n\n------- DIVIDE -------\n";
	cout << "Enter Number 1: ";
	cin >> dnum1;

	cout << "Enter Number 3: ";
	cin >> dnum2;

	cout << "DIVIDE = " << dnum1 / dnum2;


	/************ END ************/
	cout << "\n\nHELLO WORLD!\n";
	system("pause");			// <iostream>
	return 0;
}