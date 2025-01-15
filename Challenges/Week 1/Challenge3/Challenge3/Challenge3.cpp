// Challenge3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Challenge 3
Ask the user for their name and read it in as a string.
Next, ask the user for their age (in years) and read it as a string.
Finally, compute (roughly) how many days old the user is, and output a message
indicating their age in days. Note that in C++, Console input is usually read in as a string,
so you must convert it to a numeric variable type before working with it. Once the program works
correctly, try entering text for the age and see how it crashes the program.
Don't worry about fixing that for now.

The point of this program is to expose you to reading and working with user input other than text.

Example Output

Please enter your name: Edsger Dijkstra
Please enter your age: 85
Edsger Dijkstra, did you know you are at least 31025 days old?
*/

#include <iostream>
#include <string>

int main()
{
	int days = 365;

	std::cout << " " << "Please enter your name: ";			//Prime user for input of their "Name".
	
	//Capture Name from Console as string.
	std::string strName;
	std::cin >> strName;

	std::cout << " " << "Please enter your age: ";				//Prime user for input of their "Age".

	//Capture Age from Console as string.
	std::string strAge;
	std::cin >> strAge;

	int age = std::stoi(strAge) * days;						//Convert "strAge" into an integer then multiply by number of days in the year.
	
	//Output the "Age" as days after converting it from string to integer.
	std::cout << " " <<strName << ", did you know you are at least " << age << " days old?\n";

	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
