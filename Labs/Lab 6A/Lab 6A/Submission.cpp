#include <string>
#include <vector>

using namespace std;

class Submission
{
public:

	/* TODO: Test 1
	* ========================
	* Given an array of integers, and an integer index, 
	* return the item at the given index of the array.
	* 
	* Example input:
	* - [ 2, 4, 6, 8, 10 ]
	* - 3
	* 
	* Example output:
	* - 8
	*/
	static int Test1(int numbers[], int index)
	{
		int result = numbers[index];				//Retrieves the value at the specified index and stores in result

		return result;								//Returns the final value for result.		return 0;
	}

	/* TODO: Test 2
	* ========================
	* Given an array of integers, and an integer index,
	* replace the item at the given index with a 0.
	*
	* Tips:
	* - This method has a void return type. This is 
	*   because arrays are a reference-type variable, 
	*   meaning that any changes made to the array within
	*   the method will also be made to the original array
	*   outside of the method.
	* 
	* Example input:
	* - [ 2, 4, 6, 8, 10 ]
	* - 3
	*
	* Example output:
	* - [ 2, 4, 6, 0, 10 ]
	*/
	static void Test2(int numbers[5], int index)
	{
		for (int i = 0; i <= index; i++) {			//Loop through the array up to the specified index
			if (i == index) {						//Conditional statement to check if the current index matches the specified index
				numbers[index] = 0;					//Update the value at the specified index to 0 
			}
		}
	}

	/* TODO: Test 3
	* ========================
	* Given a vector of strings, determine whether or
	* not the vector contains duplicate strings. If it
	* does, return true. Otherwise, return false.
	*
	* Example input:
	* - { "Mario", "Mario", "Miss Fortune", "Echo" }
	*
	* Example output:
	* - true
	*/
	static bool Test3(vector<string> names) {
		bool valid = true;

		for (int i = 0; i < names.size(); ++i) {		//Loop through each element starting with position index1
			for (int j = i+1; j <= i; j++) {
				if (names[i] == names[j]) {
					valid = true;
				}

			}	

		}
		return valid;									//Returns the final value for result.
	}


	/* TODO: Test 4
	* ========================
	* Given an vector of integers, and an integer index,
	* return the item at the given index of the array using
	* the at() method.
	*
	* Example input:
	* - { 2, 4, 6, 8, 10 }
	* - 3
	*
	* Example output:
	* - 8
	*/
	static int Test4(vector<int> numbers, int index)
	{
		int result = 0;

		for (int i = 0; i <= index; i++) {			//Loop through the vector up to the specified index
			if (i == index) {						//Conditional statement to check if the current index equals to index
				result = numbers.at(index);			//Update the value for result with the specified index value 
			}
		}
		return result;								//Returns the final value for result.
	}

	/* TODO: Test 5
	* ========================
	* Given 5 integers, place each into an integer vector 
	* using the push_back() method and return the created 
	* vector.
	*
	* Example input:
	* - 5
	* - 7
	* - 9
	* - 10
	* - 15
	* 
	* Example output:
	* - { 5, 7, 8, 10, 15 }
	*/
	static vector<int> Test5(int number1, int number2, int number3, int number4, int number5)
	{
		vector <int> result;						//Initiated a vector named "result" to store the values in it

													
		result.push_back(number1);					//Assigning the numbers to the "result" vector created one by one.
		result.push_back(number2);
		result.push_back(number3);
		result.push_back(number4);
		result.push_back(number5);

		return { result };							//Return the "result" vector containing all 5 numbers as values.
	}

	/* TODO: Test 6
	* ========================
	* Given 4 strings, place each into a string vector
	* in order without using the push_back() method and 
	* return the created vector.
	*
	* Example input:
	* - Mario
	* - Master Chief
	* - Tracer
	* - Ezio Auditore
	*
	* Example output:
	* - { "Tracer", "Mario", "Ezio Auditore", "Master Chief" }
	*/
	static vector<string> Test6(string word2, string word4, string word1, string word3)
	{
		vector <string> result(4);					//Initialize a vector of strings "result" with size 4 

		result[0] = word1;							//Overrides value on Index 0 with "word1"
		result[1] = word2;							//Overrides value on Index 0 with "word2"
		result[2] = word3;							//Overrides value on Index 0 with "word3"
		result[3] = word4;							//Overrides value on Index 0 with "word4"

		return { result };							//Return "result" vector containing all 4 words in the specified order.
	}

	/* TODO: Test 7
	* ========================
	* Convert a given char array into an integer vector
	*
	* Example input:
	* -  [ t, c, q, v, j ]
	*
	* Example output:
	* - { 116, 99, 113, 118, 106 }
	*/
	static vector<int> Test7(char letters[])
	{
		vector <int> result;							//Initialize a vector of integers to store the Char values			

		for (int i = 0; i < 5; ++i) {					//Loop through the 5 values of "letters"
			if (i < 5) {								//Conditional Statement that If i is less than 5 value
				result.push_back(int(letters[i]));		//then char value will be converted into its integer value
			}
		}
		return {result};								//Return "result" vector converted into integers.
	}
	
	/* TODO: Test 8
	* ========================
	* Given an array of capital letters,
	* change the array so that every other
	* letter is lowercase.
	* 
	* Tips:
	* - There are several solutions to this
	*   test. For example, one involves subtraction
	*   while another requires using the tolower() method.
	*   You may use either solution.
	* 
	* References:
	* - https://cplusplus.com/reference/locale/tolower/
	* - https://www.geeksforgeeks.org/tolower-function-in-cpp/
	*
	* Example input:
	* - [ L, V, F, D, C ]
	*
	* Example output:
	* - [ L, v, F, d, C ]
	*/
	static void Test8(char letters[])
	{
		for (int i = 1; i <= 5; i +=2) {				//Loop through values in "letters" with a starting index of 1
			letters[i] = tolower(letters[i]);			//Converts the value at that index from uppercase to lowercase
		}
	}

	/* TODO: Test 9
	* ========================
	* Given 3 integer vectors, return a single 2D vector.
	*
	* Example input:
	* - [ 4, 0, 9, 7, 6 ]
	* - [ 43, 31, 48, 29, 40 ]
	* - [ 2, 5, 5, 2, 1 ]
	*
	* Example output:
	* - 4 43 2
	*   0 31 5
	*   9 48 5
	*   7 29 2
	*   6 40 1
	*/
	static vector<vector<int>> Test9(vector<int> mins, vector<int> maxes, vector<int> seeds)
	{
	
		vector<vector<int>> Results;								//Initializing a vector of vectors "Results"
		
		for (size_t i = 0; i < mins.size(); ++i) {					//Iterate over the mins using mins.size() as a limit.

			vector<int>Row = { mins[i], maxes[i],seeds[i]};			//Initialize vector "row" with values from min, maxes and seeds.

			Results.push_back(Row);									//Adds "row" as a new value for "Results"
			}
		
		return {Results};											//Return the updated "Results" value
	}

	/* TODO: Test 10
	* ========================
	* Given a 2D vector int integers, 
	* return a new 2D vector transposed.
	*
	* Example input:
	* - 5 1 5
	*   4 9 6
	*
	* Example output:
	* - 5 4
	*   1 9
	*   5 6
	*/
	static vector<vector<int>> Test10(vector<vector<int>> numbers)
	{
		size_t rows = numbers.size();								//Gathering the size that will be needed for rows
		size_t cols = numbers[0].size();							//Gathering the size that will be needed for columns

		vector<vector<int>> result(cols, vector<int>(rows));		//Initializes the result vector with dimensions of the transposed matrix

		for (size_t row = 0; row < rows; ++row) {					//Nested loop to iterate through each value of the vector and assign it
			for (size_t column = 0; column < cols; ++column) {		//to the corresponding position in the transposed matrix
				result[column][row] = numbers[row][column];
			}
		}
		return result;												//Returns the transposed matrix.
	}
};