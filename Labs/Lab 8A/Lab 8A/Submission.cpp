#include "Student.cpp"
#include <string>
#include <vector>

/*
 * Complete the Student class before attempting to complete any of Tests
 * 
 * Notes:
 * 
 * -	Identifiers (method names and variables) are case sensitive. For example,
 *      SetIdNumber is not the same as SetIDNumber. If a specific name is provided, 
 *      you must use the exact name provided.\
 * -	For Tests 4 and 5, before attempting to access a Student class method from 
 *      an array element, you must ensure the array element contains a Student 
 *      object. If the element is null and you attempt to call a member method, the 
 *      program will throw an Exception and crash. To verify the element is not 
 *      empty, compare the element to null � if the element is not null, then it 
 *      contains a valid Student object.
 *       
*/

class Submission
{

public:
    static vector<Student> enrollment;

    /* Test 1 - Member fields and Constructors
     * =========================================
     * For this test you will add member fields and constructors to the Student class.
     *
     * The private member fields to add are a string to represent a last name, a string
     * to represent a first name and an int to represent an identification number.
     *
     * You will provide the default (no parameter) constructor and one overloaded constructor.
     * - The default constructor will set last and first names to empty strings ("") and set
     *   the id number to 1000000 (1 million).
     * - The overloaded constructor that will accept two strings (last name, first name) and
     *   one int (id number) and update the member fields the received values.
     *
     * After making the specified additions in the Student class, create and then return a
     * new Student object using the provided parameters.
     *
     * Tips:
     * - The application will not compile until the Test 1 and 2 are both completed.
     */

    static Student Test1(string last, string first, int idNo)												//Test1 function creates a new student with provided parameters
	{
		Student sampleStudent = Student(last, first, idNo);													//Initializes sampleStudent using the parameters last, first, and idNo

        return sampleStudent;																				//Returns sampleStudent object
    }

    /* Test 2 - Getters and Setters
	 * =========================================
	 * For this test, you must add public getters and setters for the Student class
	 * member fields.
	 *
	 * The methods must be named:
	 * - GetFirstName
	 * - GetLastName
	 * - GetIDNumber
	 * - SetFirstName
	 * - SetLastName
	 * - SetIDNumber
	 *
	 * After making the specified additions in the Student class, create and then
	 * return a new Student object using the default constructor.
	 *
	 * Tips:
	 * - The application will not compile until the Test 1 and 2 are both completed.
	 * - Note: Identifiers (method names and variables) are case-sensitive. For example,
	 *   SetIdNumber is not the same as SetIDNumber. If a specific name is provided,
	 *   you must use the exact name provided.
	 */
    static Student Test2()																					//Test2 function creates a new default student
    {
		Student sampleStudent2 = Student();																	//Initiates sampleStudent2 with a value of the default constructor
		
		return sampleStudent2;																				//Returns sampleStudent2
    }

	/* Test 3 - Insert into collection
	 * =========================================
	 * Given a student object, enrolled, and a vector of students,
	 * search the students vector to find an open space. If an
	 * opening is located, place the enrolled student into that
	 * position and return true. If no openings are found, return
	 * false.
	 *
	 * Tips:
	 * - An open space is identified by locating a space with a "default"
	 *   student.
	 * - "Default" students will always have an ID number of 1000000
	 * - As this a boolean true, the value displayed in the console may not
	 *   accurately represent your points for this test.
	 */
    static bool Test3(vector<Student> students, Student enrolled)											//Test3 function replaces a student with ID 1000000 with a new student
    {
		bool invalid = false;																				//Initialize a flag to indicate whether any replacement occurred

		for (int i = 0; i < students.size(); i++) {															//Loop through the vector of students 

			Student newStudent = students[i];																//Creates a newStudent object with the value of student at index i

			if (newStudent.GetIDNumber() == 1000000) {														//Conditional statement that checks if the current student has ID number 1000000
				students.at(i) = enrolled;																	//If found, replaces the student at index i with the enrolled student
				invalid = true;																				//Updates invalid to true to indicate that a replacement occurred
				break;																						//Exit the loop after the replacement is complete
			}
		}
			return invalid;																					//Returns invalid indicating whether any replacement happened
    }

	/* Test 4 - Remove from collection
	 * =========================================
	 * Given an integer idNumber and a vector of students,
	 * search the students vector for a student whose ID number
	 * matches the idNumber parameter. If the ID number is found
	 * replace the student in that position with a student created
	 * using the default constructor and return true. If no student
	 * with the given ID number is found, return false.
	 *
	 * Tips:
	 * - As this a boolean true, the value displayed in the console may not
	 *   accurately represent your points for this test.
	 */
	static bool Test4(int idNumber, vector<Student> students)												//Test4 function replaces a student with the given ID number with a new student										
    {
		bool invalid = false;																				//Initialize a flag to indicate whether the replacement occurred

		for (int i = 0; i < students.size(); i++) {															//Loop through the vector of students

			Student newStudent = Student();																	//Creates a new default student object

			if (students.at(i).GetIDNumber() == idNumber) {													//COnditional Statement that checks if the student at index i has the specified ID number
				students.at(i) = newStudent;																//If found, replaces the value of student at index i with the value of newStudent
				invalid = true;																				//Updates invalid to true to indicate that a replacement occurred
				break;																						//Exit the loop after the replacement is complete
			}
		}
		return invalid;																						//Returns invalid indicating whether any replacement happened
    }

	/* TODO: Test 5 - Retrieve from collection
	 * =========================================
	 * Given an integer idNumber and a vector of students,
	 * search the students vector for the first student whose ID number
	 * matches the idNumber parameter. If the ID number is found,
	 * return the student with that ID number. If no student with
	 * that ID number is found, return a student created with the
	 * default constructor.
	 *
	 * Tips:
	 * - Given the nature of the returned result, the value displayed
	 *   in the console may not accurately represent your points for
	 *   this test.
	 */
    static Student Test5(int idNumber, vector<Student> students)											//Test5 function finds and return a student with the specified ID number
    {
		Student newStudent = Student();																		//Initiates newStudent with a value of the default constructor

		for (int i = 0; i < students.size(); i++) {															//Loop through the vector of students

			if (students.at(i).GetIDNumber() == idNumber) {													//Conditional Statement that checks if the student at index i has the specified ID number
				newStudent = students.at(i);																//If found, replaces the value of newStudent with the value of student at index i  
				break;																						//Exit the loop after the replacement is complete
			}
		}
		return newStudent;																					//Return the student with the specified ID number (or default student if not found)
    }
};