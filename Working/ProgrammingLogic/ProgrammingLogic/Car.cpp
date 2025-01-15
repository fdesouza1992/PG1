#include <string>

//Defines the class Car
class Car {
	//Member fields/Attributes/Properties
	int year;
	std::string make;
	std::string model;
	int mileage;

public:
	//Default Constructor
	Car() {
		make = "";
		model = "";
		year = 1969;
		mileage = -1;
	}

	//Overloaded Constructor
	Car(int year, std::string make, std::string model, int mileage = 0) {
		this->year = year;
		this->make = make;
		this->model = model;
		this->mileage = mileage;
	}
	
	//Accessors - Getters
	
	/// <summary>
	/// Returns the details of the car by returning it's year, make, and model
	/// as a string.
	/// </summary>
	/// <returns></returns>
	std::string GetDetails() {
		return std::to_string(year) + " " + make + " " + model;
	}

	int GetYear() {
		return year;
	}
};