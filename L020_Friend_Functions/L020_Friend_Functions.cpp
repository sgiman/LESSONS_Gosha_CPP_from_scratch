// **************************************************************************************
// L020_Friend_Functions.cpp:
// ДРУЖЕСТВЕННЫЕ ФУНКЦИИ | LESSON 20
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

class b; // объявение второго нижнего класса "b" для видимости компилятором 

//--------- Класс "a" ---------
class a
{
	friend int sum(a, b);	// дружеивенная фукнция "sum" (не принадлежит классу и областям видимости) 

private:
	int i;

public:
	a() { // коструктор для класса "a"
		cout << "Enter i: ";
		cin >> i;
	}
};

//--------- Класс "b" ---------
class b
{
	friend int sum(a, b);	// дружеивенная фукнция "sum"

private:
	int y;

public:
	b() { // коструктор для класса "b"
		cout << "Enter y: ";
		cin >> y;
	}

};

int sum(a first, b second)
{
	return (first.i + second.y);
}


/************* MAIN *************/

int main(int arg, char* argv[])
{
	setlocale(LC_ALL, "ru");

	a first;
	b second;
	cout << "SUM = " << sum(first, second) << endl;

	/************ END ***********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();	// <iostream>
	return 0;
}