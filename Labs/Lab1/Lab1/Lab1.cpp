// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;

    cout << "Hello Full Sail!" << endl;

    cout << "What is your name? ";
    cin >> name;

    string question = "How old are you, " + name;
    string age;

    cout << question + "? ";
    cin >> age;

    string greeting = "It's very nice to meet you, " + name + "!";
    
    cout << greeting << endl;
    cout << "I'm so happy that you've lived " << age << " years!" << "\n" << endl;

    cin.get();
   
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
