#include <iostream>
#include <string>
/// <summary>
/// Utility class that contains user interface components
/// </summary>
class UI{

    /// <summary>
    ///Clears console and returns the cursor to the first position.
    /// </summary>
    static void ClearConsole() {
        std::cout << "\x1B[2J\x1b[H";       
    }
    /* Please Note: "x1B[2J\x1b[H" translates into ANSI/VT100 
    Escape Sequence "\003[2J\003[H", which stands for:
    \003 - ASCII escape character
    [H - move the cursor to the home position
    {J - erases the screen fromt the current line down to the bottom
    of the screen.*/
    
    ///<summary>
    ///Show "Press any key prompt" and wait for the enter to continue.
    ///</summary>
    static void ShowPressAnyKey() {
        std::cout << "\nPress the Enter Key to continue ..." << std::endl;
        std::cin.get();                     // Pause the console before moving on.
    }

public:
    /// <summary>
    /// Shows a given message in a dialogue box component
    /// </summary>
    static void ShowDialogue(std::string message) {
        ClearConsole();
        std::string divider = "==========================================\n";
        std::cout << divider << std::endl;
        std::cout << " " << message << '\n' << std::endl;
        std::cout << divider << std::endl;
        ShowPressAnyKey();
    }

    /// <summary>
    /// Primes a user with instructions, prompts them for input, and returns their input.
    /// </summary>
    static std::string PromptUser(std::string primeText, std::string promptText) {
        ClearConsole();
        std::string result = "";            // Initialize a placeholder return variable
        
        std::cout << " " << primeText << "\n\n";
        std::cout << " " << promptText << ": ";
        
        getline(std::cin, result);

        if (empty(result)) {
            std::cout
                << "\n\n" << " " << "\n"
                << promptText << " can not be empty! Please try again...";
            ShowPressAnyKey();
        }

        return result;                      // Return the result variable
    }
};
