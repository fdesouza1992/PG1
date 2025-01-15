// Methods.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

#include "UI.cpp"

// TODO: Create a method to reorganize some of your code

int main()
{
	UI::DisplayHeader("Welcome!");

	string name = UI::PromptUser("What is your name?", "Name");

	UI::DisplayDivider();

	string age = UI::PromptUser("How old are you?", "Age");

	UI::DisplayDivider();

	cout << "Hello, " << name << " who is " << age << " years old!";

	// TODO: Call a method you created that doesn't need data and doesn't return anything

	// TODO: Call a method you created that accepts data but doesn't return anything

	// TODO: Call a method you created that does return a value
}
