// Pokemon_Red_Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "UI.cpp"

int main()
{
    UI::ShowDialogue("Welcome to the Wonderful World of POKEMON!");   
    UI::ShowDialogue("My name is OAK! People call me POKEMON PROF.!");
    UI::ShowDialogue("This world is inhabited by creatures called POKEMON! \n For some people, POKEMON are pets. \n Others use them for fights. \n Myself...I study POKEMON as a profession.");
    
    std::string playerName = UI::PromptUser("First, What's your name?", "Name");
    UI::ShowDialogue("Welcome, " + playerName + "!");
   
    UI::ShowDialogue("This is my grandson. He's been your rival since you were a baby.");
    
    std::string rivalName = UI::PromptUser("Erm, what is his name again?", "Rival Name");
    UI::ShowDialogue("That's right! I remember now! His name is " + rivalName + "!");

    UI::ShowDialogue(playerName + "! Your very own POKEMON legend is about to unfold! \n A world of dreams and adventures with POKEMON awaits!" + " Lets's go!");

    UI::ShowDialogue(playerName + " wakes up in their room.");
    UI::ShowDialogue("What do you want to do with your day?");

    std::cout << "Choice: \n" ;
    std::cout << "[1] Play video games." << std::endl;
    std::cout << "[2] Go back to sleep." << std::endl;
    std::cout << "[3] Go downstairs and touch some grass." << std::endl;

    std::string userInput = "";
    int choice = 0;

    getline(std::cin, userInput);

    choice = stoi(userInput);

    switch (choice) {
    case 1: 
        UI::ShowDialogue(playerName + " sits in their room all day playing video games.");
        break;
    case 2:
        UI::ShowDialogue(playerName + " goes back to bed. \n  Today just ain't their day.");
        break;
    case 3:
        UI::ShowDialogue(playerName + " decides to finally go outside and touch some grass.");
        break;
    default:
        break;
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
