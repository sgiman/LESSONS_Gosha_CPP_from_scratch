// **************************************************************************************
// L018_Classes_Objects.cpp:
// (Введение в ООП) Классы и объекты. | LESSON 18
// --------------------------------------------------------------------------------------
// С++ | Visual Studio 2022
// --------------------------------------------------------------------------------------
// Gosha Dudar - C++ lessons from scratch
// https://www.youtube.com/watch?v=qSHP98i9mDU&list=PL0lO_mIqDDFXNfqIL9PHQM7Wg_kOtDZsW
// Writing by sgiman @ 2022-2023
// **************************************************************************************

#include <iostream>

using namespace std;

// ***** CLASS AUTO ******/

class Auto
{

/*
 * Модификаторы доступа : public, private, protected
 */

private:	// Локальные
	int year, mounth, day;

public:		// Глобальные

	void message()
	{
		cout << "\nClass is working!!!" << endl;
	}

	void set(int date_year, int date_mouth, int date_day)  // Задать значения для локальных свойств (set и get могут иметь любые имена)
	{
		year = date_year;
		mounth = date_mouth;
		day = date_day;
	}

	void get()	// Получить значения локальных параметров (свойств)  
	{
		cout << "Year of this auto - " << year << ", mouth is - " << mounth << ", day is - " << day << endl;
	}

	Auto();
	~Auto();

protected:	// Видны только в данном классе и в наследниках от данного класса

};

// Cnstructor 
Auto::Auto()
{
}

// Destructor
Auto::~Auto()
{
}

// ***** MAIN ******/

int main(int arg, char* argv[])
{
	setlocale(LC_ALL, "ru");

	Auto shkoda;				// создать объект shkoda
	shkoda.message();			// взять метод
	shkoda.set(2005, 11, 23);	// передать параметры в объект класса
	shkoda.get();				// получить параметры из объекта класса 	

	Auto bmw;
	bmw.set(2012, 1, 11);
	bmw.get();

	/************ END ***********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();	// <iostream>
	return 0;
}