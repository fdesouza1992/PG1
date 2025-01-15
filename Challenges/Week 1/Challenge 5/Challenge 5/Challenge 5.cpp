// Challenge 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*Challenge 5
Ask the user for 3 numbers and then use them to compute 2 separate but similar-looking equations.
Here are the 2 equations you will compute:
 
 a + 1 * b + 2 - c

 (a + 1) * (b + 2) - c

The point of this program is to highlight operator precedence and the importance of parentheses.

Example Output

Please enter 3 numbers.
Enter value for a: 10
Enter value for b: 15
Enter value for c: 7

a + 1 * b + 2 - c = 20
(a + 1) * (b + 2) - c = 180
*/

#include <iostream>

int main()
{
    //Prime user for input of 3 numbers
    std::cout << " " << "Please enter 3 numbers." << std::endl;

    //Prompt user for the input of the first number and stores the number provided.
    std::cout << " " << "Enter value for A: ";
    int inputA;
    std::cin >> inputA;

    //Prompt user for the input of the second number and stores the number provided.
    std::cout << " " << "Enter value for B: ";
    int inputB;
    std::cin >> inputB;

    //Prompt user for the input of the third number and stores the number provided.
    std::cout << " " << "Enter value for C: ";
    int inputC;
    std::cin >> inputC;

    //Outputs two strings displaying the equations but the result is an integer value.
    std::cout << '\n' << " " << "A + 1 * B + 2 - C = " << inputA + 1 * inputB + 2 - inputC << std::endl;
    std::cout << '\n' << " " << "(A + 1) * (B + 2) - C = " << (inputA + 1) * (inputB + 2) - inputC << std::endl;

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
