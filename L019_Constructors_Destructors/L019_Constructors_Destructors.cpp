// **************************************************************************************
// L019_Constructors_Destructors.cpp:
// Контруктроры и десткруторы | Lesson 19
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

	// Модификаторы доступа : public, private, protected

private:	// Локальные
	char* model;
	int year, mounth, day;

public:		// Глобальные

	void message()
	{
		cout << "\nClass is working!!!" << endl;
	}

	void set(char* auto_model, int date_year, int date_mouth, int date_day)  // Задать значения для локальных свойств (set и get могут иметь любые имена)
	{
		model = auto_model;
		year = date_year;
		mounth = date_mouth;
		day = date_day;
	}

	void get()	// Получить значения локальных параметров (свойств)  
	{
		cout << model << ". Year of this auto - " << year << ", mouth is - " << mounth << ", day is - " << day << endl;
	}

	//----- КОНСТРУКОР-ДЕСТРУКТОР -------
	Auto()
	{
		model = (char*)"Shkoda";
		year = 2000;
		mounth = 12;
		day = 31;

		cout << "CONSTRUCTOR-1 ";
		get();
		cout << endl;
	}

	// Порегрузка
	Auto (char* auto_model, int date_year, int date_mouth, int date_day)
	{

		model = auto_model;
		year = date_year;
		mounth = date_mouth;
		day = date_day;

		cout << "CONSTRUCTOR-2: ";
		get();
		cout << endl;
	}


	// Destructor
	~Auto()
	{
		cout << "Class \"Auto\" is not working!!!" << endl;
	}

protected:	// Видны только в данном классе и в наследниках от данного класса

};

// ***** MAIN ******/

int main(int arg, char* argv[])
{
	setlocale(LC_ALL, "ru");

	Auto shkoda((char*)"Shkoda", 2015, 2, 13);	// создать объект "shkoda" с перегоузкой консруктора 
	shkoda.message();						// взять метод
	shkoda.set((char*)"Shkoda", 2005, 11, 23);		// передать параметры в объект класса
	shkoda.get();							// получить параметры из объекта класса 	

	Auto bmw;
	bmw.set((char*)"BMW", 2012, 1, 11);
	bmw.get();

	/************ END ***********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();	// <iostream>
	return 0;
}