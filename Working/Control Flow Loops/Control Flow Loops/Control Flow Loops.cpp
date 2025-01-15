// Control Flow Loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void CountUp(int start, int end) {
    // TODO: For loop (forwards)
    for (int i = start; i < end; i++) {
        std::cout << i << std::endl;
    }
}

void CountDownLetters(char start, char end) {
    // TODO: For loop (backwards)
    for (char i = start; i >= end; i--) {
        std::cout << i << std::endl;
    }
}



int main()
{
    CountUp(30, 45);   

    CountDownLetters('Z', 'A');

    // TODO: For loop (other)
    //for (int i = 30; i < 45; i++) {
    //    std::cout << (char)i << std::endl;
    //}

    
   // for (int i = 90; i > 63; i--) {
    //    std::cout << (char)i << std::endl;
   // }

    // TODO: While Loop
    //example 1

    std::string name = "";
    bool invalid = true;
    
    while (invalid) {
        std::cout << "Name: ";

        getline(std::cin, name);

        invalid = empty(name);

        if (invalid) {
            std::cout << "\nInvalid input. Please try again!\n";
        }
    }
        

    //Example 2
    int number1 = 10;
    int number2 = 5;

    while (number2 < number1) {
        std::cout << "Looping";

        number2++;
    }


    // TODO: Do-while loop
    do {
        std::cout << "Name: ";

        getline(std::cin, name);

        invalid = empty(name);

        if (invalid) {
            std::cout << "\nInvalid input. Please try again!\n";
        }
    } while (invalid);

}
    

    

