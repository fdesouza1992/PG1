// Challenge 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Challenge 6
Ask the user for a temperature in Celsius, and then convert it to Fahrenheit.
Ask the user for a temperature in Fahrenheit, and then convert it to Celsius.
Use variables of type double. Here are the 2 equations you will need:
C = (F - 32.0) * (5.0 / 9.0)
F = (C * 9.0) / 5.0 + 32.0

Example Output

Temperature in F: 100
Temperature in C: 37.7777777777778
Temperature in C: 37
Temperature in F: 98.6
*/

#include <iostream>

int main()
{
    //Prompt user for the input of a temperature in Fahrenheit.
    std::cout << " " << "Enter your Temperature in Fahrenheit (F): ";
    double fahrenheit;
    std::cin >> fahrenheit;

    //Outputs the provided Fahrenheit Temp converted into Celsius.
    std::cout << " " << "This is your Temperature in Celsius (C): " << (fahrenheit - 32.0) * (5.0 / 9.0) << " (C)" << std::endl;

    //Prompt user for the input of a temperature in Celsius.
    std::cout << '\n' << " " << "Enter your Temperature in Celsius (C): ";
    double celsius;
    std::cin >> celsius;

    //Outputs the provided Celsius Temp converted into Fahrenheit.
    std::cout << " " << "This is your Temperature in Fahrenheit (F): " << (celsius * 9.0) / 5.0 + 32.0 << " (F)" << std::endl;

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
