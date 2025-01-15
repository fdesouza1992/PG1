#include <vector>
#include <string>
using namespace std;

class Submission
{
public:
    /*
     * This lab is NOT interactive - that means there should be no
     * calls to the Console class (no Write/WriteLine/ReadLine/ReadKey)
     *
     * You cannot use multiple return statements any of these methods.
     * Additionally the use of var is not permitted
     *
    */

    // Test 1 – How many multiples
    // ============================
    // Given three integers, start, end and factor, using a loop, count how 
    // multiples of factor occur between start and end (inclusive)
    //
    // Example input:
    // - 14, 51, 6
    //
    // Expected output:
    // - 6

    static int Test1(int start, int end, int factor) {

        int result = 0;                                                                     //Initialize a variable named result.
        
        for (int counter = start; counter <= end; counter++) {                              //Loops through numbers from "start" to "end".

            if (counter % factor == 0) {                                                    //Conditional Statement checks if "counter" is divisible by factor

                result++;                                                                   //Increment the count by 1 if the number is divisible by factor
            }
        }                                                                                   //Return the final value for result.
        return result;
    }

    // Test 2 - Factorial
    // ===================
    // Given an int, number, calculate the factorial for number. A factorial 
    // is the result of multiplying all integers between 1 and the target 
    // (number) (so 3 factorial, 3!, is 3 X 2 X 1 = 6)
    //
    // Example input:
    // - 6
    //
    // Expected output:
    // - 720

    static int Test2(int number)
    {
        int result = 1;                                                                      //Initialize a "result" variable with a value of 1
                                                                                             
        for (int i = 2; i <= number; i++) {                                                 //Loop to multiply numbers from 2 to "number"   
            result *= i;                                                                    //Multiplies the "counter" value with the result
        }
                                                                                            //Return the final value for "result"
        return result;
    }

    // Test 3 - Raise to a power
    // =============================
    // Given two integers, root and exponent, use a loop to raise root to 
    // exponent. You are not allowed to use pow() to compute the answer – 
    // you must use a loop. Additionally, exponent will be greater than or 
    // equal to 0 (no negative exponents)
    //
    // Example input:
    // - 5, 2
    //
    // Expected output:
    // - 25

    static int Test3(int root, int exponent)
    {
        int answer = root;                              //initialize "answer" with the value of "root"
        int increment = root;                           //initialize "increment" with the vaue of "root"
        int num1, num2;                                 //Declare num1 and num2 as loop counters
        
        for (num1 = 1; num1 < exponent; num1++) {       //Nested Loop - Outer loop is for the exponent
                                                        
            for (num2 = 1; num2 < root; num2++) {       //Nested Loop - Inner Loop to multiply the answer by the value of "root"

                answer += increment;                    //Increment the value of "answer" by the value of "increment"
            }
            increment = answer;                         //Update the "increment" value to "answer" value for the next iteration
        }
        return answer;                                  //Return the final value of "answer"
    }

    // Test 4 - Consumable
    // =====================
    // Given two integers (onHand and consume) that represent the amount of
    // an on - hand resource(onHand) and the amount of the help that is
    // consumed per cycle (think a time period). Determine how
    // many cycles (time periods) are before the on-hand amount is empty.
    //
    // For example, if you have 7 eggs (onHand) and use 2 egg per day(consume),
    // determine when you expect to run out of eggs (3 days). Return the
    // number representing when the on-hand amount reaches 0 without
    // consuming more than is available.
    //
    // Example input:
    // - 25, 4
    //
    // Expected output:
    // - 6

    static int Test4(int onHand, int consume)
    {
        int result = 1;                                         //Initiate "result" variable with a value of 1

        for (int i = 0; i < consume; i++) {                     //Loop to divide "onHand" by "consume" for "consume" times.
            result = onHand / consume;                          //Performs the division and stores value in "result" variable.
        }
        return result;                                          //Returns the final value for "result"
    }

    // Test 5 - Prime number
    // =======================
    // Given an integer, number, determine if number is a prime number. Recall 
    // prime numbers are numbers that are divisible on by 1 and themselves. 
    // By definition negative values, 0 and 1 are not prime numbers (2 is 
    // the smallest prime number). If number is prime, return true, 
    // otherwise return false.
    //
    // Example input:
    // - 3
    //
    // Expected output:
    // - true

    static bool Test5(int number)
    {
        bool valid = true;                                  //Initialize a boolean variable "valid" with a True value.

        if (number <= 1) {                                  //Conditional to check if number is less than or equal to 1.
            valid = false;                                  //If it is, value for "valid" is updated to false.
        }
        for (int i = 2; i <= (number / 2); i++) {           //Loop through numbers from 2 up to half of "number"
            if (number % i == 0) {                          //Conditional to check if "number" is divisible by "i"
                valid = false;                              //If it is, value for "valid" is set to false.
            }
        }
        return valid;                                       //Returns the final value for "valid"
    }

    // Test 6 - Build a string
    // =========================
    // Given a char, starter, and an integer, number, create a string that is made
    // up of starter and the next number of characters (in order).
    //
    // Example input:
    // - A, 5
    //
    // Expected output:
    // - ABCDE

    static string Test6(char starter, int number)
    {
        string result = "";                                     //Initialize an empty string "result" to store results

        for (int i = 0; i < number; i++) {                      //Loop for "number" times
            result += ((char)(starter + i));                    //Append a character to the result string by casting int to char
        }
        return result;                                          //Return the char characters generated into a string.
    }

    // Test 7
    // ==================================
    // Given two integers, factor and qty, find the first qty multiples of 
    // factor (including factor as the first multiple) and add each to 
    // a string (separate each multiple with a single space).
    //
    // Tips:
    // - You will need to use the std::to_string() method in order
    //   to convert integer values into strings.
    // - Pay close attention to the expected output as it may contain
    //   extra spaces.
    // - The expected output is shown with quotation marks to mimic a string.
    //   You do not need to (read: should not) add quotation marks to your results.
    //
    // References:
    // - https://cplusplus.com/reference/string/to_string/
    // - https://www.geeksforgeeks.org/stdto_string-in-cpp/
    //
    // Example input:
    // - 7, 4
    //
    // Expected output:
    // - "7 14 21 28 "
    static string Test7(int factor, int qty)
    {
        string result = "";                                     //Initialize an empty string "result" to store results

        for (int i = 1; i <= qty; i++) {                        //Loop from 1 to "qty"
            result += to_string(factor * i) + " ";              //Multiply "factor" by "i", converts the integer into a string 
        }                                                       //updates the value for "result"

        return result;                                          //Returns generated string with numbers as value.
    }

    // Test 8 – Sum of values
    // =======================
    // Given two integers, start and end, find the sum of all values between 
    // start and end (inclusive).
    //
    // Example input:
    // - 11, 19
    //
    // Expected output:
    // - 135
    static int Test8(int start, int end)
    {
        int result = 0;                                             //Initiates a variable "result" with a value of "0"
        
        for (int i = start; i <= end; i++) {                        //loop from "start" to "end"
            result += i;                                            //Adds 1 to the current value of "i" and sets a the value for "result"
        }  
        return result;                                              //Returns the final value for "valid"
    }
};
