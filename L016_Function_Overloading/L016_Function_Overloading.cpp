// **************************************************************************************
// L016_Function_Overloading.cpp:
// Перегрузка функций | Lesson 16
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

float perimeter(float a, float b, float c);
float perimeter(float a, float b, float c, float d);

int main(int arg, char* argv[])
{
	setlocale(LC_ALL, "ru");

	cout << "PERMITER TRIANGLE =  " << perimeter(12.23, 23.1, 12.2) << endl;
	cout << "PERMITER SQUARE =  " << perimeter(12.23, 23.1, 12.2, 23.2);

	/************ END ***********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();	// <iostream>
	return 0;
}

//------------- ПЕРЕЗАГРУЗКИ ---------------- 

float perimeter(float a, float b, float c) // для треугльнкиа 
{
	return a + b + c;
}


float perimeter(float a, float b, float c, float d)  // для квадртаа
{
	return a + b + c + d;
}