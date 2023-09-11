// **************************************************************************************
// L017_Math_Operations.cpp:
// Локальные и глобальные переменные. Математические операции. | Lesson 17   
// --------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// --------------------------------------------------------------------------------------
// Gosha Dudar - C++ lessons from scratch
// https://www.youtube.com/watch?v=qSHP98i9mDU&list=PL0lO_mIqDDFXNfqIL9PHQM7Wg_kOtDZsW
// Writing by sgiman @ 2022-2023
// **************************************************************************************

#include <iostream>
#include <cmath>

using namespace std;

int value = 15;	// глабальная переменная 

void func();

int main(int arg, char* argv[])
{
	setlocale(LC_ALL, "ru");

	//--------------- VARS ---------------

	cout << "***** VARIABLES *****\n";

	int value = 10;		// локальная переменная 

	cout << "Main: LOCAL VAR (value) = " << value << endl;
	cout << "Main: GLOBAL VAR (value) = " << ::value << endl;

	func();

	//--------------- MATH ---------------

	cout << "\n***** MATHEMATIC *****\n";

	cout << "  pow (2, 2)\t " << pow(2, 2) << endl;
	cout << "  abs (-23)\t" << abs(-23) << endl;
	cout << "  sin (10)\t" << sin(10) << endl;
	cout << "  cos (10)\t" << cos(10) << endl;
	cout << "  sqrt (4)\t" << sqrt(4) << endl;
	cout << "  ceil (23.67)\t" << ceil(23.67) << endl;		// округление до большего
	cout << "  floor (23.67)\t" << floor(23.67) << endl;	// округление до меньшего
	cout << "  exp (1)\t" << exp(1) << endl;				// степень экспоненты
	cout << "  log (3)\t" << log(4) << endl;				// нат. логарифм (основа эскпонента)
	cout << "  log10 (3)\t" << log10(4) << endl;			// десятичный логарифм 


	/************ END ***********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();	// <iostream>
	return 0;
}


void func()
{
	cout << "GLOBAL VAR (value) = " << value << endl;
}