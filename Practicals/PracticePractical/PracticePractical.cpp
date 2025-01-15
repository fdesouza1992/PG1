// PracticePractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <math.h>
#include <string>
#include "Utility.cpp"

/* TODO: BEFORE YOU WRITE ANY CODE:
 * ====================================
 * Read through all of the TODOs. This will give you an overview
 * of how the program will be put together.
 *
 * Notes:
 * - The string, math, and iostreams headers have been included for you.
 * - The vector header HAS NO been provided for you. You will need to add it.
 * - Using the namespace std is optional, and not provided for you by default.
*/

//  Write a method called FindAverage that takes an vector of doubles and returns a double

    // In the FindAverage method compute the average (the sum of all values divided by the number of values)
	//       of the values in the array parameter and return it.

double FindAverage(std::vector<double>numbers) {  //Method to find the average of a double
    double sum = 0.0;
    for (double value : numbers) {               //Summing up all the values in "numbers"
        sum += value;
    }
    double average = sum / numbers.size();      //Initiated a double "average" with value of the    
                                                //average calculation result
    return average;                             //Returns the final value of "average"
}

int main()
{
    std::string greetings[] = {"Hello there!", "Welcome to the practice!", "Hi, user!",
                        "Hey, I am a program.", "You're running the best program ever!" };

    /* Display a random string from the Greetings array.
     * ========================================================
     * Notes:
     * - You may use the RandomInts() method within the provided Utility class.
     * - The correct usage is Utility::RandomInt(rangeLow, rangeHigh)
     *
     * For example:
     * - Utility::RandomInt(6,10);    will return a number between, and including, 6 and 10
     */

    int randomIndex = Utility::RandomInt(0, 4);             //Random Index initiated to host the index coordinates
    std::cout << greetings[randomIndex] << std::endl;       //Print the "greetings" string and the randomIndex int to 
                                                            //generate random greetings each time the console runs

    std::cin.get();
    std::cout << "\x1B[2J\x1B[H"; //Special string that clears the screen and moves the cursor to the top-left

	/* Ask the user for a positive number and then print the square of that number.
	 * ===================================================================================
	 * Notes:
	 * - Make sure your program does not crash if the user enters bad input.
	 * - Make sure the user can keep entering input until they enter good input.
	 *
	 * References:
     * - https://www.geeksforgeeks.org/sqrt-sqrtl-sqrtf-cpp/
     * - https://cplusplus.com/reference/cmath/sqrt/
     * - https://www.geeksforgeeks.org/type-conversion-in-c/
	 */

    double userInput;
    
    //Conditional statement to gather a positive number from user. 
    //If input provided is 0 or - it will display a message to user to try again.
    while (true) {
        std::cout << "Enter a positive number: ";                           //If condition is true, message is displayed asking 
        std::cin >> userInput;                                              //for user input of positive number
        
        double squaredInput = sqrt(userInput);                              //Initialize a double variable to hold the result of
                                                                            //the square root calculation

        if (userInput > 0) {                                                //Contional statement to check if user input is greater than 0
            std::cin.get();                                                 //Pause the console
            //Outputs the result of the square root calculation.
            std::cout << "The Square Root of " << userInput << " is " << squaredInput << std::endl;
            break;                                                          //Exits the loop due to valid input
        }
        else {                                                              //Displays error message if input is less than 0 or negative
            std::cout << "Invalid input. Please enter a positive number and try again!" << std::endl;
            std::cin.clear();                                               //Clears the error state of cin to continue with input
        }
    }

    std::cin.get();
    std::cout << "\x1B[2J\x1B[H"; //Special string that clears the screen and moves the cursor to the top-left

   

     /* Create an vector of doubles. Use a random number (in the range of 3 to 6) for the size.
      * ==============================================================================================
      * For each element of the vector, ask the user to enter a value and store
      * it in the vector. The input does not have to be error checked.
      */

    int vectorSize = Utility::RandomInt(3, 6);                              //Generates a random integer between 3 and 6 for the vector size
    std::vector<double>numbers(vectorSize);                                 //Initiate a vector of doubles with the random specified size

    for (int i = 0; i < vectorSize; i++) {                                  //Iterate through the vector values
        std::cout << "Enter value for index " << i << ": ";                 //Prompts the user to enter a value for the current index
        std::cin >> numbers[i];                                             //Reads user input and assigns it to the designated index 
    }    

    //Call the FindAverage method (See above) passing in the vector of doubles and display the return value to the screen.
    
    double average = FindAverage(numbers);                                  //Calculate the average value of the numbers in vector and stores the result
    std::cout << "Average of Numbers: " << average << std::endl;            //Displays the calculated average

}
