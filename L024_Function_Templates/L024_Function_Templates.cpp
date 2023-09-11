// **************************************************************************************
// L024_Function_Templates.cpp:
// Шаблоны функций (template) | Lesson 24 
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

// ПЕРЕЗАГРУЗКИ 
// ШАБЛОН

template <typename T1, typename T2>						// T - может быть с любым именем
T2 printArr(const T1* array, int i)
{
	int count = 0;
	for (int j = 0; j < i; j++)
	{
		cout << array[j] << " ";
		count++;
	}
	cout << endl;
	return count;
}


int main(int arg, char* argv[])
{
	setlocale(LC_ALL, "ru");

	// Sizes
	const int iSize = 3, fSize = 2, dSize = 3, cSize = 6;

	// Arrays
	int i_arr[iSize] = { 23, 45, 78 };
	float f_arr[fSize] = { 12.2, 67.5 };
	double d_arr[dSize] = { 3.345, 7.567, 9.023 };
	char c_arr[cSize] = { "HI!!!" };

	// Консоль (cначала вывдится массив с тек. позииции курсора и потом возвращается кол-во со след. строки)
	cout << "\n  Массив с типом данных int: ";
	cout << "Количество элементов: " << printArr<int, int>(i_arr, iSize) << endl;
	cout << endl;

	cout << "  Массив с типом данных float: ";
	cout << "Количество элементов: " << printArr<float, int>(f_arr, fSize) << endl;
	cout << endl;

	cout << "  Массив с типом данных double: ";
	cout << "Количество элементов: " << printArr<double, int>(d_arr, dSize) << endl;
	cout << endl;

	cout << "  Массив с типом данных char: ";
	cout << "Количество элементов: " << printArr<char, int>(c_arr, cSize) << endl;
	cout << endl;


	/************ END ***********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();	// <iostream>
	return 0;
}