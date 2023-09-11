// **************************************************************************************
// L025_Class_Templates.cpp:
// Шаблоны классов | Lesson 24 (final) 
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

const int arr_length = 3;

// ШАБЛОН КЛАССА (для разных типов данных)
template <class Type>
class Arr
{

private:
	Type arr[arr_length];

public:

	// Cкопировать массив по шаблону типа "Type" 
	Arr(Type* a)
	{
		for (int i = 0; i < arr_length; i++)
		{
			arr[i] = a[i];
		}
	}

	// Вернуть элемент массива "arr" по шаблону типа "Type" 
	Type getElement(int i)
	{
		return arr[i];
	}
};


int main(int arg, char* argv[])
{
	setlocale(LC_ALL, "ru");

	int arr_1[] = { 12, 23, 45, 6 };
	Arr<int> obj_1(arr_1);						// cоздать объект "obj" класса "Arr" c типом "int" и передать массив "arr" (шаблон класса "Arr") 
	cout << obj_1.getElement(2) << endl;		// вывести элемет с индексом 2

	char arr_2[] = { "Mars" };
	Arr<char> obj_2(arr_2);
	cout << obj_2.getElement(0) << endl;

	/************ END ***********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();	// <iostream>
	return 0;
}