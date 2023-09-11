// **************************************************************************************
// L012_Structures.cpp:
// СТРУКТУРЫ | LESSON 12
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

struct Date {
	int year;
};

struct Auto {		// Сруктура - новый тип данных 
	int wheel;
	float speed;
	char color;
	Date yearIssue;
};

int main()
{
	setlocale(LC_ALL, "ru");

	// Old style
	Auto shkoda;
	shkoda.color = 'r';
	shkoda.speed = 315.23;
	shkoda.wheel = 4;
	shkoda.yearIssue.year = 1999;

	// New style
	Auto audi = { 4, 300.23, 'b', 2001 };

	cout << "Audio speed = " << audi.speed << "\tYear: " << audi.yearIssue.year << endl;
	cout << "Shkoda speed = " << shkoda.speed << "\tYear: " << shkoda.yearIssue.year << endl;

	/************ END ***********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();	// <iostream>
	return 0;
}