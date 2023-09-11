// **************************************************************************************
// L021_Friend_Classes.cpp:
// ДРУЖЕСИВЕННЫЕ КЛАССЫ | LESSON 21
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

class Person;				// объявление нижнего класса "Person" для компилятора

class Dog
{
	friend class Person;	// дружественный класс "Person"

private:
	int health = 100;
};


class Person
{
public:
	void Damage(Dog& d)	// с адресом объетка класса "Dog" (без копирования объекта) - для хренения текущих данных - РАНИТЬ! 
	{
		d.health -= 20;
		cout << "Health of the animal is " << d.health << endl;
	}

	void Kill(Dog& d)	// с адресом объетка класса "Dog" - УБИТЬ!  
	{
		d.health = 0;
		cout << "Health of the animal is " << d.health << endl;
	}

	void Heal(Dog& d)	// с адресом объетка класса "Dog" - ЛЕЧИТЬ!
	{
		d.health += 30;
		cout << "Health of the animal is " << d.health << endl;
	}

};


int main(int arg, char* argv[])
{
	setlocale(LC_ALL, "ru");

	Dog skybby;
	Person boy;

	// Все значения сохраняются для определённого объекта класса

	// For Dog Skybby
	cout << endl;
	cout << "SKYBBY: " << endl;
	boy.Damage(skybby);				// ранить
	boy.Kill(skybby);				// убить
	boy.Damage(skybby);				// ранить	
	boy.Heal(skybby);				// лечить

	// For Dog Haski
	cout << endl;
	cout << "HASKI: " << endl;
	Dog haski;
	boy.Damage(haski);				// ранить


	/************ END ***********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();	// <iostream>
	return 0;
}