#include <string>

// TODO: Uncomment this line after you create your MathOperator enum
#define MATH_OPERATOR

using namespace std;

/*
* This lab is NOT interactive - that means there should be no
* calls to the Console class (no cout/cin)
*
*
* This is Lab 4 - it is intended for you to demonstrate your
* understanding of selection statements (if and switch). This means
* you are required to use either a switch or if statement for all
* Test solutions (Test6 is an exception to this rule). For Test6, you
* are permitted to simply 'pass through' the value returned by the
* Equals method.
*
*
* Note: Once you have completed your MathOperator enum, uncomment the
* definition on line 4 in order to run Tests 1 and 2.
*
* Additional reminders. In PG1:
*      1. Methods are not permitted to use more than 1 return statement
*      2. You are not allowed to use the Convert class
*      3. You are not allowed to use var in place of a known data type
*/


// Before beginning Tests 1 and 2, you need to define an enum named
// MathOperator with five values: Add, Subtract, Multiply, Divide and
// Modulo.


class Submission
{



public: // <----- Your enumerator must be below this line

	// TODO: CREATE YOUR ENUMERATOR HERE

	// ENumerator created holding 5 values in the provided order.
	enum MathOperator {
		ADD,
		SUBTRACT,
		MULTIPLY,
		DIVIDE,
		MODULO
	};

#ifdef MATH_OPERATOR
	/* TODO: Test 1 - Create an enum
	* =================================
	 * Create an enumerator named MathOperator five values (in order):
	 * Add, Subtract, Multiply, Divide and Modulo.
	 *
	 * After creating the enum, you are to return a MathOperator
	 * value based on the value of the parameter provided:
	 *
	 * 0 = MathOperator.Add
	 * 1 = MathOperator.Subtract
	 * 2 = MathOperator.Multiply
	 * 3 = MathOperator.Divide
	 * 4 = MathOperator.Modulo
	 *
	 * Tips:
	 * - You do not need to worry about/handle any other possible
	 *   input values (the only values passed to the method
	 *   will be 0, 1, 2, 3 or 4)
	*/

	static MathOperator Test1(int input)
	{
		//Initializing the "operation" variable with "MathOperator::ADD" as the default value.
		// :: Scope Resolution Operator in C++
		MathOperator operation = MathOperator::ADD;


		//Check the input value and assign the correspoding MathOperator enum value to it.
		if (input == 0) {
			operation = MathOperator::ADD;					//Assigns the ADD enum
		}
		else if (input == 1) {
			operation = MathOperator::SUBTRACT;				//Assigns the SUBTRACT enum
		}
		else if (input == 2) {
			operation = MathOperator::MULTIPLY;				//Assigns the MULTIPLY enum
		}
		else if (input == 3) {
			operation = MathOperator::DIVIDE;				//Assigns the DIVIDE enum
		}
		else if (input == 4) {
			operation = MathOperator::MODULO;				//Assigns the MODULO enum
		}
		//Outputs the determined MathOperator enum value.
		return operation;
	}

    /* TODO: Test 2
	* =====================
	* Use the MathOperator enum you developed for Test1 to decide what
	* operation to perform on the two int values provided. Return the result of
	* performing the indicated operation on the int values.
	*
	* Example input:
	* - 5
	* - 2
	* - MathOperator.Add
	*
	* Expected output:
	* - 7
	*/
	
	static int Test2(int number1, int number2, MathOperator operation)
	{
		// Initializing an int variable named "result" with a default value of 0
		int result = 0;

		// Using a switch statement to determine the operation based on the MathOperator enum value passed
		switch (operation) {
		case 0:
			// If operation is Add (0), perform addition
			result = number1 + number2;
			break;
		case 1:
			// If operation is Subtract (1), perform subtraction
			result = number1 - number2;
			break;
		case 2:
			// If operation is Multiply (2), perform multiplication
			result = number1 * number2;
			break;
		case 3:
			// If operation is Divide (3), perform division
			result = number1 / number2;
			break;
		case 4:
			// If operation is Modulo (4), perform modulo division
			result = number1 % number2;
			break;
			//default case where no assignment of "result" is made
		default:
			break;
		}
		// Return the result of the operation
		return result;
	}

#endif

    /* TODO: Test 3
	* ==================
	* Given a bool parameter, return a string indicating
    * the related term. When the bool is true return "Proven", 
    * when the bool is false return "Denied".
    *
    * Tips:
    * - Again remember all identifiers are case sensitive.
	* - The case of your response must match exactly.
	*
	* Example input:
	* - true
	*
	* Expected output:
	* - "Proven"
	*/

	static string Test3(bool input)
	{
		//// Declare and initialize a string variable "userChoice" with "Denied" set as value
		string userChoice = "Denied";

		//Conditional Statement to see if the Boolean is True
		if (input == true) {
			userChoice = "Proven";					//If True, "Proven" will be assigned
		}
		//Conditional Statement to see if the Boolean is False.
		else {
			userChoice = "Denied";					//If False, "Denied" will be assigned
		}
		//Outputs final value of "userChoice"
		return userChoice;
	}

    /* TODO: Test 4
    * ==================
    * Given a weight in either kilograms or pounds and a bool,
    * you will either convert kilograms to pounds (when the
    * bool is true) or pounds to kilograms (when the bool is false).
    *
    * Tips: 
    *  - The conversions are:
    *    1 kg = 2.2 lb
    *    1 lb = 0.45 kg
    *
    * Example input:
    * - 2.75
    * - true
    *
    * Expected output:
    * - 6.05
    */
	static double Test4(double input, bool kiloToLb)
	{
		//Declare a double variable with a pre-defined value to store the
		//converted weight value.
		double weightConversion = 0;

		//Conditional statement that will check if kiloToLb is True.
		if (kiloToLb == true) {
			weightConversion = input * 2.2;						//Converts Kg to Lb
		}

		else {
			weightConversion = input * 0.45;					//COnverts Lb to Kg
		}

		//Return the converted weight value
		return weightConversion;
	}

    /* TODO: Test 5
	* ==================
	* Given an int that represents the severity of an employee infraction,
	* return the associated action required as a string.
	*
	*   Infraction Severity            Required Action
	*         Level 1                   Verbal Reprimand
	*         Level 2                   Formal Reprimand
	*         Level 3                   Suspension
	*         Level 4                   Termination
	*
	*  Tips:
	*  - Keep in mind, action required must be spelled correctly
	*    (exactly as above)
	*
	* Example input:
    * - 3
    *
    * Expected output:
    * - "Suspension"
	*/

	static string Test5(int input)
	{
		//Declare a string variable named "infraction" to hold the type of infraction
		string infraction;

		//Conditional Statement that determines the type of infraction based on the input value
		switch (input) {

			//Since I wasn't sure if it would work putting straight to case 1, I've decided to include
			//case 0 performing no change to the value in infraction
		case 0:
			infraction;
			break;

			//Assigns "Verbal Reprimand" as a value for "infraction"
		case 1:
			infraction = "Verbal Reprimand";
			break;

			//Assigns "Formal Reprimand" as a value for "infraction"
		case 2:
			infraction = "Formal Reprimand";
			break;

			//Assigns "Suspension" as a value for "infraction"
		case 3:
			infraction = "Suspension";
			break;

			//Assigns "Termination" as a value for "infraction"
		case 4:
			infraction = "Termination";
			break;

			//default case where no assignment of "infraction" is made
		default:
			break;
		}

		//Return the final value of the infraction.
		return infraction;
	}

    /* TODO: Test 6
	* ==================
	* Given an integer variable year, determine if the year is
	* a leap year. If it is, return true, otherwise return false.
	*
	* Tips:
	* - A leap year is a year visible by 4, but not divisible by 100.
	* - However, years divisible by 400 are also consider to be leap years.
	*
	* Example input:
	* - 1979
	*
	* Example output:
	* - false
	*/

	static bool Test6(int year)
	{
		//Return the Conditional statement that check if int "year" is a divisible 
		//by 4 and NOT by 100 OR if the year is divisible by 400.
		return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
	}

	/* TODO: Test 7
    * ==================
    * Given the three sides of a Triangle, determine if the triangle
    * is a Right Triangle. A triangle where the sum of the squares
    * of the two shortest sides (a and b) is equal to the square of
    * longest side (c) is a 'Right' triangle. The third parameter
    * (c) will always be the longest side given.
    */

	static bool Test7(int a, int b, int c)
	{
		//Declare int variable "rightTriangle" with the Pathegorean Theory formula as the value
		int rightTriangle = ((a * a) + (b * b) == (c * c));			//Right Triangle = a^2 + b^2 = c^2

		//Return the final value of "rightTriangle"
		return rightTriangle;

	}

    /* TODO: Test 8
	* ==================
	* Given the grade variable, which indicates a student's numeric grade,
	* determine which letter grade they should receive. Return the proper
	* letter (char) as the result of this test. Do not worry about rounding
	* the grade. Use the following table to indicate which letter corresponds
	* to provided grades.
	*
	* Remember only one return statement is allowed
	*   >= 90 and <= 100 	'A'
	*   >= 80 and< 90 	    'B'
	*   >= 73 and< 80    	'C'
	*   >= 70 and< 73 	    'D'
	*   >= 0 and< 70 	    'F'
	*   < 0 or> 100 	    '?'
	*
	* Tips:
	* - Use if and if-else for this test
	*
	* Example input:
	* - 80.5
	*
	* Example output:
	* - 'B'
    */
    static char Test8(double grade)
    {
		char letterGrade;

		//Conditional statement with conditions ">= 90 and <= 100" to assign letter "A"
		if (grade >= 90 && grade <= 100) {
			letterGrade = 'A';
		}
		//Conditional statement with conditions ">= 80 and < 90" to assign letter "B"
		else if (grade >= 80 && grade < 90) {
			letterGrade = 'B';
		}
		//Conditional statement with conditions ">= 73 and < 80" to assign letter "C"
		else if (grade >= 73 && grade < 80) {
			letterGrade = 'C';
		}
		//Conditional statement with conditions ">= 70 and < 73 " to assign letter "D"
		else if (grade >= 70 && grade < 73) {
			letterGrade = 'D';
		}
		//Conditional statement with conditions ">= 0 and < 70  " to assign letter "F"
		else if (grade >= 0 && grade < 70) {
			letterGrade = 'F';
		}
		//Conditional statement with conditions "< 0 or > 100 " to assign letter "?"
		else if (grade < 0 || grade > 100) {
			letterGrade = '?';
		}
		//Return the final value of "letterGrade"
		return letterGrade;
	}
};