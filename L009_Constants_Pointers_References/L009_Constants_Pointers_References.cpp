// **************************************************************************************
// L009_Constants_Pointers_References.cpp:
// Constants, Pointers, References | Lesson 009
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
	/*
		УКАЗАТЕЛИ - предназнчаены для динамического управления объектами и данными с небольшим копированием.
		ССЫЛКИ - обеспечивают прямой доступ к объекту.
	*/

	setlocale(LC_ALL, "ru");

	// КОНСТАНТЫ
	const float PI = 3.14;	// не изменяется! 
	// PI = 2.14; // error


	// ПРОСТЫЕ УКАЗАТЕЛИ - оптимизируют производительность т.к. пори этом не нужно длительное копирование данных 
	int value = 8;					// данные (содержимое ячейки памяти)
	int* ptrvalue = &value;			// указатель (адрес ячейки памяти с данными) 

	cout << "Enter *ptrvalue: ";
	cin >> *ptrvalue;
	cout << "value - *ptrvalue: " << value << " - " << *ptrvalue << endl;
	cout << "&value - ptrvalue: " << &value << " - " << ptrvalue << endl;


	// УКАЗАТЕЛИ НА УКАЗАТЕЛИ
	int** ptr_ptrvalue = &ptrvalue;	// указатель на указатель (ссылка на адрес в ячейке памяти)

	cout << "\n**ptrvalue: ";
	cin >> **ptr_ptrvalue;
	cout << "Value: " << value << endl;


	// CCЫЛКИ 
	int& ref = value; // ccылка ref на переменную value

	cout << "\nref for value: ";
	cin >> ref;
	cout << "value - ref\t" << value << " - " << ref << endl;



	/************ END **********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();	// <iostream>
	return 0;
}