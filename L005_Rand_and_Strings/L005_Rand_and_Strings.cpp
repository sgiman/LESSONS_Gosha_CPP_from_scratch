// **************************************************************************************
// L005_Rand_and_Strings.cpp:  
// Rand and Strings (Lesson 005)
// --------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// --------------------------------------------------------------------------------------
// Gosha Dudar - C++ lessons from scratch (с нуля)
// https://www.youtube.com/watch?v=qSHP98i9mDU&list=PL0lO_mIqDDFXNfqIL9PHQM7Wg_kOtDZsW
// Writing by sgiman @ 2022-2023
//**************************************************************************************

#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*---------- RAND ----------*/
	for (size_t i = 0; i < 10; i++)
	{
		cout << "1-random nunber = " << 1 + rand() % 100 << endl;
	}
	cout << "------------------------";

	/*-------- STRINGS --------*/
	/* cout - cin: <isostrem> */
	string firstName, secondName;
	cout << "\n\nEnter your firstname: ";
	getline(cin, firstName);
	cout << "\nEnter your secondname: ";
	getline(cin, secondName);

	if (!firstName.empty() && !secondName.empty())
		cout << "\nYour name is: " << firstName + ' ' + secondName;
	else
		cout << "\nE R R O R!";

	/************ END ************/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();					// <iostream>
	return 0;
}