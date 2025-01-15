// Strings Chars and Console IO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// TODO: Import the string data type
#include <string>

// TODO: Add the std namespace (optional)
using namespace std;

int main()
{
    // TODO: Make a char type variable
    char letter = 'A';

    // TODO: Make a char array type variable
    char word[] = "Word!";

    // TODO: Make a string type variable
    string name = "Doug";

    cout << "What's your name?" << endl;
    cout << "Name: ";

    // TODO: Capture user input from the Console using cin
    cin >> name;

    // TODO: Combine several strings together using string concatenation.
    string greeting = "Hello, " + name;

	// TODO: Write a string variable to the Console using cout
    cout << greeting << "\n" << endl;
}