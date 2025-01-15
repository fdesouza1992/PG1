#include "Utility.cpp"
#include <iostream>
#include <string>

class HighLowGame {

    /// <summary>
    /// Method that will display the created banner with the desired title text.
    /// This can be later reused if needed with different title text.
    /// </summary>
    /// <param name="text"></param>
    static void DisplayHeader(std::string text) {
       
        std::string divider = "============================================\n";
        std::cout << divider << std::endl;
        std::cout << "               " << Utility::StringToUpper(text) << "\n" << std::endl;
        std::cout << divider;
    }

    static int GetIntFromInput(std::string promptText) {
        //Initialize placeholder value
        std::string input = "";

        //
        std::cout << promptText << ": ";

        //Capture the user input as a string     
        getline(std::cin, input);
        
        //Returns input converted into an integer
        return stoi(input);
    }

public:
    static void Start() {
        //Clear the screen
        std::cout << "\x1B[2J\x1B[H";

        //Initialize placeholder to count in how many turns user got their guess right.
        int turns = 0;
        
        //TODO: High Low Game
        //TODO: 0. Display a header and instructions for the game.
        
        DisplayHeader("High Low Game");

        //Outputs the instructions to the user
        std::cout << "Guess the random number!" << '\n' << std::endl;
        std::cout << "1. Give a high bound." << std::endl;
        std::cout << "2. Guess a number between 1 and the high number." << std::endl;
        std::cout << "3. If incorrect on the first try, keep guessing until you get it right" << "\n" << std::endl;

        //TODO: 1. It's to aks the user for a high bound.
        //Initialize placeholder values
        int highNumber = 0;

        //COnditional Statement that while the number is 1 or lower
        while (highNumber <= 1) {
            std::cout << "Pick a high number greater than 1." << std::endl;

            highNumber = GetIntFromInput("Number");

            if (highNumber <= 1) {
                std::cout << "Invalid number! Please try again ..." << std::endl;
                std::cout << "Press any key to continue ..." << std::endl;
                std::cin.get();
            }

        }
        
        //TODO: 2. It's going to generator a number between 1 and that high bound
        int randomNumber = Utility::RandomInt(1, highNumber);

        //TODO: 3. It'g going to require the user to guess the random number
        
        //Initialize Placeholders
        int guess = 0;
        
        while (guess != randomNumber) {
           //Iterates turns +1 each time that the guess is incorrect
            turns++;

           guess = GetIntFromInput("Guess");

           //TODO: 4. It'g going to tell them if it's too high or too low
           //TODO: 5. If it's not right, they can keep guessing.
           
            if (guess < randomNumber) {
                std::cout << "\n"<<"Too low! Please try again..." << std::endl;
            }
            else if (guess > randomNumber) {
                std::cout << "\n" << "Too high! Please try again..." << std::endl;
            }
        }
        //TODO: 6. If it's right, they win!        
        std::cout << "\n" << "You WON!" << std::endl;
        std::cout << "You got it in " << turns << " tries." <<"\n"<< std::endl;   
        
        //TODO: BONUS: We can calculate a score based on their performance
    }
    //TODO: 7. If wanted, user can chose to play the game again
    static bool PlayAgain() {

        bool result = false;
        std::cout << "Do you want to play again?" << std::endl;
        std::string input = "";
        std::cout << "Play again [y/n]: ";

        getline(std::cin, input);

        if (Utility::StringToLower(input) == "y") {
            result = true;
        }
        return result;
    }
    

};



