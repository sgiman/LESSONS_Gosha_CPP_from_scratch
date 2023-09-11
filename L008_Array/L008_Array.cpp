// **************************************************************************************
// L008_Array.cpp:
// Array | Lesson 008
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
	setlocale(LC_ALL, "ru");

	/* ОДНОМЕРНЫЙ МАССИВ */
	int arr_1D[] = { 0, 1, 2, 3, 4 };

	cout << "\nОДНОМЕРНЫЙ МАССИВ:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Элемент " << i << ":\t" << arr_1D[i] << endl;
	}

	/* ДВУМЕРНЫЙ МАССИВ */
	int arr_2D[][2] = { {10,20}, {30,40}, {50,60}, {70,80}, {90,100} };

	cout << "\nДВУМЕРНЫЙ МАССИВ: ";
	for (int i = 0; i < 5; i++)
	{
		cout << "\nЭлемент " << i << ": ";
		for (int j = 0; j < 2; j++)
		{
			cout << "\t" << arr_2D[i][j];
		}
	}

	/************ END **********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();			// <iostream>
	return 0;
}