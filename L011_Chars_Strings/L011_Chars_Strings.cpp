// **************************************************************************************
// L011_Chars_Strings.cpp:
// Символы и строки | Lesson 11
// --------------------------------------------------------------------------------------
// С++ | Visual Studio 2022
// --------------------------------------------------------------------------------------
// Gosha Dudar - C++ lessons from scratch
// https://www.youtube.com/watch?v=qSHP98i9mDU&list=PL0lO_mIqDDFXNfqIL9PHQM7Wg_kOtDZsW
// Writing by sgiman @ 2022-2023
// **************************************************************************************

#include <iostream>
#include <clocale>
#include <Windows.h>
#include <string> 

using namespace std;

int main()
{
	//setlocale(LC_ALL, "ru");				// <clocale> или
	// setlocale(LC_CTYPE, "Russian");		// <clocale>
	setlocale(LC_CTYPE, "rus");				// <clocale>
	SetConsoleCP(1251);						// кодировка win-cp 1251 <Windows.h> - только для Windows
	SetConsoleOutputCP(1251);				// кодировка win-cp 1251 для вывода текста на консоль

	// char ch = 'a';										// один симлол
	// char string[6] = "Hello";							// массив символов (строка) - (5 + 1) = 6 симвлов с нулём-терминатором '/0'. ИЛИ
	// char string[6] = { 'H', 'e', 'l', 'l', 'o', '/0' };	// стандарная инициализация массива 
	// char string[] = "Hello World!";						// рекомендуется!

	char string[500];
	cout << "Введите строку: ";
	gets_s(string);				// gets - удалена и С++ в 2017
	cout << string << endl;


	/************ END **********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();	// <iostream>
	return 0;
}