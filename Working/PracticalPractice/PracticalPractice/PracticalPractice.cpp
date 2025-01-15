// PracticalPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

//Creating a new method to later be used in the main body function
void SayHello(std::string name) {
    std::cout << "\n"<<"Hello, " << name << "!";
}

int main()
{
    //Initializing a vector with a size
    std::vector<int>numbers(5);

    //Late assign of vector size
    std::vector<int>numbers2;
    numbers2 = std::vector<int>(5);

    //Setting the elements of index 0 and 1
    numbers2.at(0) = 5;
    numbers2[1] = 10;
  
    for (int i = 0; i < numbers2.size(); i++) {

    }

    std::string name = "";

    bool invalid = true;

    //Validation loop to ensure empty response is not allowed
    do {
        
        std::cout << "Name: ";
        getline(std::cin, name);

        invalid = empty(name);

        if (invalid) {
            std::cout << "\n"<<"Name can not be empty!Please try again..." << std::endl;
            std::cout << "\n"<<"Press any key to continue ..." << std::endl;
            std::cin.get();
        }
    } while (invalid);

    //Displays a pre-set method
    SayHello(name);
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
