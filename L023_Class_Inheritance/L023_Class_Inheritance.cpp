// **************************************************************************************
// L023_Class_Inheritance.cpp:
// Наследование классов | Lesson 23
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

// М о д и ф и к а т о р ы   д о с т у п а: 
//  private - доступно только в текщуем классе  
//  public - доступно везде  
//  protected  - доступно в текущем классе и в классах наследниках

/*--------- CLASS FIRST (main class) ---------*/
class First						// главный класс
{

protected:
	int value1 = 1;
	int value2 = 2;

	First(int value)			// конструктор
	{
		this->value2 = value;	// "value" from main class "First"
		cout << "\n*First:  value1 = " << value1 << endl;
		cout << "*First:  value2 = " << value2 << endl;
		cout << "----------------------------";
	}

};

/*--------- CLASS SECOND ---------*/
class Second : public First		// класс наследник, public - наследовать всё (кроме модификатора private)
{

public:
	Second(int v1, int v2) : First(v2) 	// констркутор c вызовом конструктора !!!
	{
		value1 = v1;			// "value1" from main class "First" (присвоить непосредственно) !
		cout << "\nSecond (=):  value1 = " << value1 << endl;
		cout << "Second (set):  value2 = " << value2 << endl;
	}
};

/*--------- CLASS THIRD ---------*/
class Third : public First		// класс наследник, public - наследовать всё (кроме модификатора private)
{

public:
	Third(int v1, int v2) : First(v2) 		// констркутор c вызовом конструктора !!!
	{
		value1 = v1;						// "value1" from main class "First" (присвоить непосредственно) !
		cout << "\nThird (=):  value1 = " << value1 << endl;
		cout << "THird (set):  value2 = " << value2 << endl;
	}
};


/*************** MAIN ***************/
int main(int arg, char* argv[])
{
	setlocale(LC_ALL, "ru");

	Second objct1(11, 22);		// первый наследник
	Third  objct2(33, 44);		// насделник первого наследника итд...


	/************ END ***********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();	// <iostream>
	return 0;
}