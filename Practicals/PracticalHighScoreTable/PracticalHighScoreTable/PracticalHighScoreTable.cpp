#include <iostream>
#include <vector>
#include <string>
#include "Utility.h"

/// <summary>
/// This procedure takes an vector of ints and sorts them in place.
/// After a call to this procedure the vector of ints passed in will be
/// sorted from highest to lowest.
/// </summary>
/// <param name="numbers">an array of ints to sort</param>
void SortVectorHighToLow(std::vector<int>& numbers) {                                                       // Function to sort a vector of integers in high to low order
    int tmp;

    for (int i = 1; i < numbers.size(); i++)                                                                //Go through the vector to sort from high to low
    {
        for (int j = i; j > 0 && numbers[j] > numbers[j - 1]; j--)
        {
            tmp = numbers[j];
            numbers[j] = numbers[j - 1];
            numbers[j - 1] = tmp;
        }
    }
}

// Create your own PrintVector method that will display the contents of
// a given vector to the console.

static void PrintVector(std::vector<int>& vector) {                                                         // Function to print a vector of integers
    for (int i = 0; i < vector.size(); ++i)                                                                  // Loop through the vector and print each element
    {
        std::cout << " "<< vector.at(i) << " ";
        std::cout << "\n";
    }
}

int input = 0;                                                                                              //Initialize placeholder value

static int GetHighScoreInput(std::string promptText) {                                                      // Get input for the number of high scores to be entered                           
    
    std::cout << promptText << ": ";                                                                         // Display prompt and get user input
    input = Utility::ReadInt();
        
    return input;
}

// Ask the user how many high scores they want.
// Then read in their input.
//
// ====> Support error checking (input validation).
//
//       **************************************************************
//       ***********                                        ***********
//       ***********     The stoi() method                  ***********
//       ***********     DOES NOT VALIDATE INPUT            ***********
//       ***********                                        ***********
//       **************************************************************
//
// ====> The user should only be able to input a POSITIVE
//       integer value (greater than 0).
//       To validate the user input, use the provided Utility methods 
//       as outlined within the Practical Overview video.

int main()
{
    GetHighScoreInput(" How many High Score(s) would you like to enter");                                   // Get user input for the number of high scores
    Utility::ReadInt();

    while (input <= 1 || input == 0) {                                                                      // Validate user input
        std::cout << " Invalid input! Please try again!\n" << std::endl;
        GetHighScoreInput(" New Input");
        Utility::ReadInt;
        std::cin.get();
    }
    if (input > 1) {
        std::cout << " You chose to enter " << input << " High Score(s).\n" << std::endl;
        Utility::IsReadGood;
    }

    // Define an vector of ints, which will hold the high scores.
    // Make the vector the exact size indicated by the user above.
    
    static std::vector<int> highScore;                                                                      //Initiated a vector of integers with the user input as a size
    highScore = std::vector<int>(input);
  

    // Ask the user for each high score, and read in their inputs.
    // Make sure to read in as many high scores are in the vector.
    // If the high score vector is size 5, then read in 5 inputs.
    // You DO NOT NEED to support error checking for each score;
    // assume each input will be an integer.
    int score;                                                                                              //Initialize placeholder value

    for (int i = 0; i < input; i++) {
        std::cout << " Enter High Score " << (i + 1) << ": ";                                               // Loop to get input for each high score
        std::cin >> score;
        highScore.at(i) = score;
    }


    // Uncomment the following lines
    
    std::cout << "\n" << " High Scores - Unsorted" << std::endl;                                            // Display unsorted high scores

    // Call **your** PrintVector method (which you must write
    // above - it's a separate TODO before the main() method)
    // passing the vector of high scores.
    
    PrintVector(highScore);                                                                                 //Calling forth the PrintVector Method

    // Call the SortVectorHighToLow method (already written above so
    // don't attempt to change/re-write it). Pass the vector of high 
    // scores, to sort them.

    SortVectorHighToLow(highScore);                                                                         // Sort high scores in high to low order

    // Uncomment the following line
    std::cout << "\n" << " High Scores - Sorted" << std::endl;                                              // Display sorted high scores

    // Call **your** PrintVector method (which you must write above)
    // passing the vector of high scores.
    
    PrintVector(highScore);                                                                                 // Calling forth the PrintVector Method

    std::cout << "\n" << " Press any key to exit . . . " << std::endl;                                      // Displaying the exit message.
    std::cin.get();                                                                                         
}