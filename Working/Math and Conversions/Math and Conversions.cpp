// Math and Conversions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
	// TODO: Initialize various number variables
	int number = 5;
	int sum = number + 3;
	int multiply = number * 3;

	sum += multiply;
	sum /= 2;
	sum %= 2;

	// TODO: Initialize a float using a float literal
	float floatingPointNumber = 2.75;
	sum += floatingPointNumber;

	// TODO: Initialize some signed and unsigned variables
	signed int number2 = -100;
	unsigned int number3 = -56;

	// TODO: Perform some implicit conversion using number data types
	float floatingPointNumber2 = 2.657;
	double biggerFloatingPointNumber = floatingPointNumber2;

	// TODO: Create a float variable and cast it's value to an integer variable
	floatingPointNumber2 = (float) biggerFloatingPointNumber;
	int newNumber = (int) floatingPointNumber2;

	// TODO: Use the stoi() method to parse a literal string to an integer
	int number4 = std::stoi("9");

	// TODO: Prompt the user for input and parse the result to an integer variable

	//Prime the user, and prompt them for their age
	std::cout << "How old are you?" << std::endl;		
	std::cout << "Age: ";								

	//Capture age from the Console, as a string 
	std::string strAge;
	std::cin >> strAge;

	//Convert string "age" into an integer
	int age = std::stoi(strAge);

	//Output the integer "age" converted into days
	std::cout << "Wow! You're " << strAge << " years old!" << std::endl;
	std::cout << "That's " << (age * 365) << " days old!" << std::endl;
}