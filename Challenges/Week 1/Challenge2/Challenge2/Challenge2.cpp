// Challenge2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/* Challenge 2
Write a more involved "Hello, World!" program using our library's online research databases. 
Use the NexusUni online database to look up a specific company of your choice, 
then code a simple program which outputs some information about that company on separate lines.

To find the Nexus database on Full Sail One:
Navigate your browser to http://one.fullsail.edu
Select Organizations, then Library
Select Library Research Databases
Select Library Research Databases (Again)
Select Nexus Uni
At the bottom-right, you will see a drop-down menu labeled "Get Company Info". Use it to enter a company name (e.g. Activision, or any other company, etc.).
Write a simple program to output some of that information.

Example Output

Hello! My name is Alan Turing.
I researched Activision Blizzard.
They currently have 7300 employees.*/

#include <iostream>
#include <string>

int main()
{
    std::cout << " " << "Hello! My name is Felipe de Souza\n";
    std::cout << " " << "I researched Apple Inc.\n";

    std::string totalNumberOfEmployees = "161000";

    std::cout << "They currently have " + totalNumberOfEmployees + " employees.\n";

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
