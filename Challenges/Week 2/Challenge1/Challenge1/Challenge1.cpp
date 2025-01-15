// Challenge1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

/*
Practice 1
Write a stern program that asks the user to enter a number within some range.  
If the user tries to joke around and input something incorrect, ask again, and again, and again, until they learn to get it right. 
Use input validation in a loop until the user enters correct input.

Example Output
Please enter a number (1-10): -1
Please enter a number (1-10): 0
Please enter a number (1-10): 11
Please enter a number (1-10): ldkfjdlj
Please enter a number (1-10): true
Please enter a number (1-10): 3.8
Please enter a number (1-10): 7
You entered: 7 (finally)
*/

int main()
{
    int choice = 0;

    while (choice < 1 || choice>10 ||empty(choice)) {

    }
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
