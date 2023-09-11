// **************************************************************************************
// L013_Enum.cpp:
// ПЕРЕЧИСЛЕНИЯ (ENUMERATION - ENUM) | LESSON 13
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

//enum tree { tree_1 = 1, tree_2 = 45, tree_3 };

enum mall { parking = -1, hall, many_shops, roof };		// торговый центр

int main(int arg, char* argv[])
{
	setlocale(LC_ALL, "ru");

	/*
	cout << tree_1 << endl;
	cout << tree_2 << endl;
	cout << tree_3 << endl;
	*/

	int floor;				// этаж
	bool exit = false;		// по умолчанию "false" 

	while (!exit)
	{
		cout << "Enter your foor (frm -1 to 2): ";
		cin >> floor;

		switch (floor)
		{

		case parking:
			cout << "We on the -1 floor in the parking.\n" << endl;
			break;

		case hall:
			cout << "We on the 0 floor in the hall.\n" << endl;
			break;

		case many_shops:
			cout << "We on the 1 floor in the many shops.\n" << endl;
			break;

		case roof:
			cout << "We on the 2 floor in the roof.\n" << endl;
			break;

		default:
			cout << "Floors only from -1 to 2\n" << endl;
			break;
		}

		/* EXIT */
		cout << "If you want to play again press \"0\" or press \"1\" on exit this game: ";
		cin >> exit; // 1 (true) - start, 0 (false) - exit
	}

	/************ END ***********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();	// <iostream>
	return 0;
}