#include <string>

//Name of the class that is being created
class Car {

	//Attributes, Properties, Member Fields or Member Variables
	int year;
	std::string make;
	std::string model;

	//Constructors Method is a special type of method that will allow us
	//to create an instance of an object from our class.
	//2 key differences about Constructors
	//		--They will always be named the same as your class
	//			--Example: the identifier of Class Type would be "car"
	//		--Returns the data type of your class

public:
	//Default Constructor
	Car() {
		year = -1;
		make = "";
		model = "";
	}

	//Overloaded a Constructor
	Car(int year, std::string make, std::string model) {
		this->year = year;
		this->make = make;
		this->model = model;
	}

	//Accessor, Getter
	int GetYear() {
		return year;
	}

	std::string GetMake() {
		return make;
	}

	std::string GetModel() {
		return model;
	}

	std::string GetDescription() {
		return std::to_string(year) + " " + make + " " + model;
	}

	//Mutator, Setter
	void SetYear(int year) {

		//If the year passed is greater than or equal to 1970
		if (year >= 1970) {
			this->year;
		}
	}

};

