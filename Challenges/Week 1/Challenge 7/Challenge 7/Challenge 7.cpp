// Challenge 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*Challenge 7
Print out a table of ranges for each of the system-provided integral variable types
(signed and unsigned). You may use the link provided to make this easier.

The point of this program is to introduce you to the fact that different variable types
consume different amounts of memory. The numbers themselves may seem arbitrary now,
but when you learn how much each variable type consumes, you will understand why those
numbers are what they are.

Resources
INT_MAX and INT_MIN in C/C++ and Applications - GeeksForGeeks.org
https://www.geeksforgeeks.org/int_max-int_min-cc-applications/

Example Output

Table of integral variable type ranges in C++:
---------------------------------------------
type range
---------------------------------------------
sbyte -128 to 127
byte 0 to 255
short -32768 to 32767
ushort 0 to 65535
int -2147483648 to 2147483647
uint 0 to 4294967295
long -9223372036854775808 to 9223372036854775807
ulong 0 to 18446744073709551615 */

#include <iostream>
#include <limits.h>
#include "UI.cpp"

int main()
{
    //Outputs a description of the table of values provided.
    std::cout << " " << "Table of integral variable type ranges in C++:\n" << std::endl;

    //Outputs the Header Method
    UI::DisplayHeader("   Type Range");
    
    //Outputs the Sbyte Method
    UI::Sbyte("sbyte / char          :");

    //Outputs the Byte Method
    UI::Byte("byte / unsigned char  :");
    
    //Outputs the Short Method
    UI::Short("short int             :");

    //Outputs the UShort Method
    UI::UShort("unsigned short int    :");

    //Outputs the Int Method
    UI::Integer("int                   :");

    //Outputs the UInt Method
    UI::UInteger("unsigned int          :");

    //Outputs the Long Method
    UI::Long("long int              :");

    //Outputs the ULong Method
    UI::ULong("unsigned long int     :");

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
