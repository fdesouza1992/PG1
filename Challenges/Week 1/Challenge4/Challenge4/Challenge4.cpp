// Challenge4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*Challenge 4
Ask the user for an integral number and display the number divided by 1, 2, 4, and 8.

Example Output

Enter a number: 100
100 / 1 = 100
100 / 2 = 50
100 / 4 = 25
100 / 8 = 12 */

#include <iostream>
#include <string>

int main()
{
	std::cout << " " << "Enter a number: ";			//Prime user for input of a number.

	//Capture "number" from Console as string.
	std::string strIntegralNumber;
	std::cin >> strIntegralNumber;

	int number = stoi(strIntegralNumber);			//Convert "strIntegralNumber" into an integer.

	//Output the given number divided by 1, 2, 4, and 8.
	std::cout << " " << number << "/ 1 = " << (number / 1) << std::endl;
	std::cout << " " << number << "/ 2 = " << (number / 2) << std::endl;
	std::cout << " " << number << "/ 4 = " << (number / 4) << std::endl;
	std::cout << " " << number << "/ 8 = " << (number / 8) << std::endl;

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
