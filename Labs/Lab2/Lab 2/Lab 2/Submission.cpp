#include <string>
#pragma warning(disable:4244)

using namespace std;

class Submission {
public:

	/* Test 3
	 * =========
	 * Given a string, using the stoi() method, convert the string 
	 * to an integer. Return the integer.
	*/
	static int Test3(string input) {
		
		int result = 0;					// Creating an integer variable

		result = stoi(input);			// Converting string into integer

		return result;					
	}

	/* Test 4
	 * =========
	 * Given a string, using the stod() method, convert the string
	 * to a double. Return the double.
	*/
	static double Test4(string input) {
		
		double result = 0;				

		result = stod(input);			// Converting string into double

		return  result;
	}

	/* Test 5
	 * =========
	 * Given a string, using the stof() method, convert the string
	 * to a float. Return the float.
	*/
	static float Test5(string input) {
		
		float floatresult = 0;

		floatresult = stof(input);		// Converting string into float

		return floatresult;
	}

	/* Test 6
	 * =========
	 * Given a string, using the stoul() method, convert the string
	 * to an unsigned integer. Return the unsigned integer.
	*/
	static unsigned int Test6(string input) {
		
		unsigned int unsignedresult = 0;

		unsignedresult = stoul(input);			// Converting string into unassinged integer

		return unsignedresult;
	}

	/* Test 7
	 * =========
	 * Given a string, using the stoull() method, convert the string
	 * to an unsigned long. Return the unsigned long.
	*/
	static unsigned long Test7(string input) {

		unsigned long unsignedlongresult = 0;

		unsignedlongresult = stoull(input);			// Converting string into unassigned long

		return unsignedlongresult;
	}

	/* Test 8
	 * =========
	 * Given a double, using a cast, convert the double
	 * to a float. Return the float.
	*/
	static float Test8(double input) {
		
		static float staticfloatresult = 0;

		staticfloatresult = (float) input;		// Casting a double into float

		return staticfloatresult;
	}

	/* Test 9
	 * =========
	 * Given a float, using a cast, convert the float
	 * to an integer. Return the integer.
	*/
	static int Test9(float input) {
		
		int intresult = 0;

		intresult = (int) input;				// Converting float into integer

		return intresult;
	}

	/* Test 10
	 * =========
	 * Given an integer, convert the integer
	 * to a string using the to_string() method.
	 *
	 * Return the string.
	 *
	 * References:
	 * - https://cplusplus.com/reference/string/to_string/
	 * - https://www.geeksforgeeks.org/stdto_string-in-cpp/
	*/
	static string Test10(int input) {
		
		string result = to_string(input);		// Converting integer input into a string using to_string

		return result;
	}
};