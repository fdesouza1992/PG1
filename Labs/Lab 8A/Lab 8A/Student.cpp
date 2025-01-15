#include <string>

using namespace std;

class Student{                                                                              //Definition of Student Class
    std::string mlastName;                                                                  //Member variable to store last name of the student
    std::string mfirstName;                                                                 //Member variable to store first name of the student
    int midNumber;                                                                          //Member variable to store student's id number

public:
    
    Student() {                                                                             //Default Constructor
        mlastName = "";
        mfirstName = "";
        midNumber = 1000000;
    }
    
    Student(std::string last, std::string first, int idNo) {                                //Overloading the constructor with parameters last, first, and idNo
        this->mlastName = last;                                                             //Assigns the provided last name to the member variable mlastName
        this->mfirstName = first;                                                           //Assigns the provided first name to the member variable mfirstName
        this->midNumber = idNo;                                                             //Assigns the provided ID Number to the member variable midNumber
    }

    std::string GetLastName() {                                                             //Get method to retrieve the last name of the student
        return mlastName;
    }

    std::string GetFirstName() {                                                            //Get method to retrieve the first name of the student
        return mfirstName;
    }

    int GetIDNumber() {                                                                     //Get method to retrieve the student's ID Number
        return midNumber;
    }

    void SetLastName(std::string last) {                                                    //Set method to update the last name of the student
            this->mlastName = last;
        
    }

    void SetFirstName(std::string first) {                                                  //Set method to update the first name of the student
            this->mfirstName = first;
    }

    void SetIDNumber(int idNo) {                                                            //Set method to retrieve the student's ID Number
        std::to_string(midNumber);
        this->midNumber = idNo; 
    }

    // NOTE: The student class continues beneath this line. DO NOT close the Student
    //       class code block prematurely by adding an extra closing curly bracket.

    /* ================================================================================
     *
     * DO NOT ALTER ANYTHING BENEATH THIS LINE.
     *
     * DOING SO MAY CAUSE ISSUES WITHIN YOUR CODE.
     *
     * IF YOU ARE EXPERIENCING ERRORS IN THIS CLASS,
     * AND YOU HAVE NOT ALTERED THIS CLASS, THE ISSUES
     * EXIST WITHIN YOUR CODE. NOT HERE.
     *
     *                             ▒▒████
     *                             ████████
     *                           ██████████
     *                           ████▒▒██████
     *                         ██████    ████▒▒
     *                         ████      ▒▒████
     *                       ██████        ██████
     *                     ▒▒████    ████    ████
     *                     ████▒▒  ████████  ██████
     *                   ██████    ████████    ████
     *                   ████░░    ████████    ██████
     *                 ██████      ████████      ████▒▒
     *               ░░████        ████████      ▒▒████
     *               ██████        ████████        ██████
     *             ▒▒████          ████████          ████
     *             ████▒▒          ██████▒▒          ██████
     *           ██████              ████              ████
     *           ████                ████              ██████
     *         ██████                ████                ████▒▒
     *       ░░████                                      ▒▒████
     *       ████▓▓                                        ██████
     *     ▒▒████                    ████                    ████
     *     ████▒▒                  ████████                  ██████
     *   ██████                      ▒▒▒▒                      ████░░
     *   ████                                                  ▒▒████
     * ██████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒██████
     * ████████████████████████████████████████████████████████████████
     * ▓▓████████████████████████████████████████████████████████████▓▓
     *
     *
     */

	string ToString()
	{
		return "ID #: " + to_string(GetIDNumber()) + "\tName: " + GetLastName() + ", " + GetFirstName();
	}
};