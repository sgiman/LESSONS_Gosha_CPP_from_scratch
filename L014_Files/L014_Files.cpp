// **************************************************************************************
// L014_Files.cpp: 
// РАБОТА с ФАЙЛАМИ | LESSON 14
// --------------------------------------------------------------------------------------
// С++ | Visual Studio 2022
// --------------------------------------------------------------------------------------
// Gosha Dudar - C++ lessons from scratch
// https://www.youtube.com/watch?v=qSHP98i9mDU&list=PL0lO_mIqDDFXNfqIL9PHQM7Wg_kOtDZsW
// Writing by sgiman @ 2022-2023
// **************************************************************************************

#include <iostream>
#include <string> 
#include <fstream>

using namespace std;

int main(int arg, char* argv[])
{
	setlocale(LC_ALL, "ru");

	char text[50];							// буфер
	//ofstream file;						// создать объект file (запись)
	//file.open("text.txt");				// открыть или создать файл 	

	/************** FILE 1 **************/

	ofstream file1("text1.txt");			// cоздать объект "file1" и открыть на запись 
	file1 << "Work with files in  C++";		// записать строку
	file1.close();							// закрыть

	ifstream file2("text1.txt");				// открыть "file2" на чтение 
	if (!file2.is_open())
		cout << "ERROR! File is not found";
	else
	{
		// file2 >> text;					// заполнить буфер "text" из файла "file2" (чтение по словам)
		// cout << text << endl;

		file2.getline(text, 50);			// считать в буфер "text" текущую строку из файла "file2" 
		cout << text << endl;
		file2.close();
	}

	/************** FILE 2 **************/
	// ЗАПИСАТЬ
	ofstream writeFile("text2.txt");
	writeFile << "Hi! Evrething works great!";
	writeFile.close();

	// СЧИТАТЬ
	ifstream readFile("text2.txt");
	if (!readFile.is_open())
		cout << "ERROR! File is not found";
	else
	{
		readFile.getline(text, 50);
		cout << text << endl;
		readFile.close();
	}

	/************** FILE 3 **************/
	ofstream addFile("text3.txt", ios_base::app);	// Запись в конец файла (флаг: "ios_base::app")
	if (!addFile.is_open())
		cout << "ERROR!";
	else
	{
		addFile << "Hi! Evrething works great!\n";
		addFile.close();
	}

	/************ END ***********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();	// <iostream>
	return 0;
}