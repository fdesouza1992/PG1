// OOPDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.cpp"
#include <vector>

int main()
{
    Car hondaCivic(2013, "Honda", "Civic");
    Car defaultCar;
    Car fordF150(2020, "Ford", "F150");
    Car kiaForte(2010, "KIA", "Forte");

    std::vector<Car>cars = { hondaCivic, fordF150, kiaForte, defaultCar };
    
    //For Range loop
    for (Car car : cars) {
        std::cout << car.GetDescription() << "\n"<<std::endl;
    }

    //For Loop
    for (int i = 0; i < cars.size(); i++) {
        Car currentCar = cars.at(i);

        if (currentCar.GetYear() < 0) {
            std::cout << "Default car found in position " << i << "."<< std::endl;
            break;
        }
        else {
            std::cout << "Non-default car found in position " << i << "." << std::endl;
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
