// ProgrammingLogic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Car.cpp"

int main()
{
    //Creating some cars (using the overloaded parameters)
    //in order to be printed out.
    Car nissan240sx(1992, "Nissan", "240sx", 120000);
    Car hondaCivic(2024, "Honda", "Civic");
    Car ford150(2010, "Ford", "F150", 175000);

    //Adding the cars (created above) into a collection(vector)
    std::vector<Car> inventory = {
        nissan240sx,
        hondaCivic,
        ford150
    };

    //Option 1 (lines 25-28)
    //For Range Loop (loop through each car in the inventory)
    //for (Car car : inventory) {
        //Prints the car details to the console
      //  std::cout << car.GetDetails() << std::endl;
    //}

    //Option 2 (lines )
    //For Int Loop (loop that will give a specific position)
    for (int i = 0; i < inventory.size(); i++) {
        Car car = inventory.at(i);
        
        if (car.GetYear() < 1970) {

        }
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
