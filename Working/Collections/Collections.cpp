// Collections.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
    // TODO: Create an array with a size, but no data
    int numbers[4];

    // TODO: Add data to an array
    numbers[0] = 5;
    numbers[1] = 1;
    numbers[2] = 10;
    numbers[3] = 7;

    // TODO: Retrieve data from an array
    std::string names[] = { "Doug", "John", "Jim", "Mary" };

    // TODO: Initialize an array with data
    std::string name = names[0];

    std::cout << name << std::endl;

    // TODO: Create a vector with no size or data
    std::vector<int> numbers2;

    int number2 = 11;

    // TODO: Add data to a vector using the push_back() method
    numbers2.push_back(5);
    numbers2.push_back(0);
    numbers2.push_back(7);
    numbers2.push_back(0);
    numbers2.push_back(9);
    numbers2.push_back(number2);

    std::cout << "\n" << numbers2[0];

    // TODO: Retrieve data from a vector using array syntax
    std::cout << "\n" << numbers2[0];

    numbers2[1] = 10;


    // TODO: Retrieve data from a vector using the at() method
    std::cout << numbers2.at(1) << std::endl;


    // TODO: Use the size() method to retrieve the size of the vector
    std::cout << "\n" << "The size of numbers2 is: " << numbers2.size() << "\n" << std::endl;


    // TODO: Use a for loop, along with the size() method, to loop through a vector
    for (int index = 0; index < numbers2.size(); index++) {

        if (numbers2.at(index) == 0) {
            numbers2.at(index) = 100;
        }

        std::cout << "Position: " << index << " " << numbers2.at(index) << std::endl;

    }

    // TODO: Use a for loop range as a for-each loop to loop through a vector
    std::cout << "\n" << "For each loop example: " << "\n" << std::endl;

    for (int number : numbers2) {
        std::cout << number << std::endl;
    }

    // Banner for Recursion Example
    std::cout <<"\n"<< "====================================================" << std::endl;
    std::cout << "       Recursion Example 1: Rows and Colums " << std::endl;
    std::cout << "====================================================\n" << std::endl;

    //TODO: 2D Vectors
    std::vector<std::vector<std::string>> newNames;
    std::vector<std::string> set1 = { "Kate", "Matt", "Dave", "Mary" };
    std::vector<std::string> set2 = { "Mark", "Kris", "Hope", "Eliz" };
    std::vector<std::string> set3 = { "Lipe", "Rose", "Bill", "Adam" };

    newNames.push_back(set1);
    newNames.push_back(set2);
    newNames.push_back(set3);

    //Displays Hope which is at position (1,2)
   // std::cout<< "\n"<< newNames.at(1).at(2) << std::endl;

    //Start off by iterating through the exterior set
    for (int row = 0; row < newNames.size(); row++) {

        // Assign each inner set to a placeholder identifier
        std::vector<std::string> interiorRow = newNames.at(row);

        //Iterate through interior collection
        for (int column = 0; column < interiorRow.size(); column++) {

            // Assign each interior item to a placeholder identifier
            std::string item = interiorRow.at(column);

            //Write the interior item to the console and end the line
            if (column == (interiorRow.size() - 1)) {
                std::cout << item << std::endl;
            }
            //Otherwise, write item to the console and adds a " " before going to the next iteration
            else {
                std::cout << item << " " ;
            }
            
        }
    }
}


 