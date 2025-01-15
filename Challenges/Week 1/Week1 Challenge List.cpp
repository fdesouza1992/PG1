/*
Instructions
We suggest you make each program a separate project inside a single solution file, to give you practice creating new projects and switching between them, as opposed to making a single project for all lab programs and commenting code in/out.


Note: Some of the challenges are a bit out of date. If a resource is listed and it is no longer available, your options are to skip that challenge or you can improvise and find an adequate substitute for the unavailable resource.

Challenge 1
Write a "Hello, World!" program.

Example Output

Hello, World!

Challenge 2
Write a more involved "Hello, World!" program using our library's online research databases. 
Use the NexusUni online database to look up a specific company of your choice, 
then code a simple program which outputs some information about that company on separate lines.

To find the Nexus database on Full Sail One:

Navigate your browser to http://one.fullsail.edu

Select Organizations, then Library

Select Library Research Databases

Select Library Research Databases (Again)

Select Nexus Uni

At the bottom-right, you will see a drop-down menu labeled "Get Company Info". Use it to enter a company name (e.g. Activision, or any other company, etc.).

Write a simple program to output some of that information.

Example Output

Hello! My name is Alan Turing.

I researched Activision Blizzard.

They currently have 7300 employees.

Challenge 3
Ask the user for their name and read it in as a string. 
Next, ask the user for their age (in years) and read it as a string. 
Finally, compute (roughly) how many days old the user is, and output a message indicating their age in days. Note that in C++, 
Console input is usually read in as a string, so you must convert it to a numeric variable type before working with it. 
Once the program works correctly, try entering text for the age and see how it crashes the program. 
Don't worry about fixing that for now.

The point of this program is to expose you to reading and working with user input other than text.

Example Output

Please enter your name: Edsger Dijkstra

Please enter your age: 85

Edsger Dijkstra, did you know you’re at least 31025 days old?



Challenge 4
Ask the user for an integral number and display the number divided by 1, 2, 4, and 8.

Example Output

Enter a number: 100

100 / 1 = 100

100 / 2 = 50

100 / 4 = 25

100 / 8 = 12

Challenge 5
Ask the user for 3 numbers and then use them to compute 2 separate but similar-looking equations. 
Here are the 2 equations you will compute:

a + 1 * b + 2 - c

(a + 1) * (b + 2) - c

The point of this program is to highlight operator precedence and the importance of parentheses.

Example Output

Please enter 3 numbers.

Enter value for a: 10

Enter value for b: 15

Enter value for c: 7

a + 1 * b + 2 - c = 20

(a + 1) * (b + 2) - c = 180



Challenge 6
Ask the user for a temperature in Celsius, and then convert it to Fahrenheit. 
Ask the user for a temperature in Fahrenheit, and then convert it to Celsius. 
Use variables of type double. Here are the 2 equations you’ll need:

C = (F - 32.0) * (5.0 / 9.0)

F = (C * 9.0) / 5.0 + 32.0


Example Output

Temperature in F: 100

Temperature in C: 37.7777777777778

Temperature in C: 37

Temperature in F: 98.6



Challenge 7
Print out a table of ranges for each of the system-provided integral variable types (signed and unsigned). 
You may use the link provided to make this easier.

The point of this program is to introduce you to the fact that different variable types consume different amounts of memory. 
The numbers themselves may seem arbitrary now, but when you learn how much each variable type consumes, you will understand why those numbers are what they are.

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

ulong 0 to 18446744073709551615

Challenge 8
Define a variable of type uint and assign it the maximum value it can hold. 
Output the variable. Now output the variable + 1. This is called variable overflow.

Define a variable of type uint and assign it the minimum value it can hold. 
Output the variable. Now output the variable – 1. This is called variable underflow.

The point of this program is to introduce you to variable overflow and underflow. 
It doesn’t matter which variable type you use, the result is the same. Try this with other data types as well.

Example Output

Max value of uint: 4294967295

Max value of uint+1: 0

Min value of uint: 0

Min value of uint-1: 4294967295

Challenge 9
Ask the user for a number and store it in an int. 
Ask the user for another number and store it in an int as well. 
Add the two numbers together and store the result in an int. 
Output the result. 
Now, what happens when you try to add the numbers 1,000,000,000 and 2,000,000,000? Why?

Example Output

Please enter a number: 1000000000

Please enter a number: 1701

1000000000 + 1701 = 1000001701

Challenge 10
Gentle Jerry's Generic Goods only sells swords, shields, and potions. 
Write a program to display the prices of each, and ask the user for the amount they'd like to purchase. 
The number of swords and shields will use integers. 
But the potion is sold by ounce and will use a floating-point variable type. 
Finally, display the individual costs of the selected items and the total purchase cost.

Example Output

Welcome to Gentle Jerry's Generic Goods!

Sword - 5 gold each

Shield - 8 gold each

Potion - 3 gold per ounce

How many Swords would you like? 2

How many Shields would you like? 1

How many ounces of Potion, sir? 20.5

2 Swords = 10 gold

1 Shields = 8 gold

20.5 Ounces of Potion = 61.5 gold

------------------------------

Total Cost = 79.5 gold

Challenge 11
Write a program to compute the hypotenuse of a right triangle. 
Use the Pythagorean theorem. Use double variable types in your program. 
Use sqrt() to compute a square root.

Resources:

sqrt - cplusplus.com
https://cplusplus.com/reference/cmath/sqrt/
Example Output

Please enter side a: 3

Please enter side b: 4

The hypotenuse c is: 5

Challenge 12
Write a program to swap the values of two variables. 
Ask the user for two separate inputs. 
Then devise an algorithm to put the value of the first variable into the second and the value of the second variable into the first, without losing any one of the two values.
 Hint: you’ll probably need to use another variable.

Example Output

Please enter your first name: Cave

Please enter your last name: Johnson

The value of the first variable: Cave

The value of the last variable: Johnson

Swapping...

The value of the first variable: Johnson

The value of the last variable: Cave



Challenge 13
Write a program that first checks the user’s age before continuing. 
If the user is not old enough to run your program (say 16), then exit gracefully; otherwise, let them be scarred for life! Don’t get too crazy.

Example Output

How old are you? 13

I’m sorry, but you’re too young to play this game. Bye!

How old are you? 25

redrum redrum redrum!!



Challenge 14
Ask the user for the current Pacific time and convert it to Eastern time (+3 hours). 
First, use an if statement to error check and verify that the number entered was between 1 and 12. 
Next, convert the user’s input to Eastern time. 
Finally, make sure to roll the time over if it exceeds 12 o'clock.

Example Output

Enter the hour to convert from Pacific to Eastern: 10

That would be 1 Eastern.

Enter the hour to convert from Pacific to Eastern: 16

That is not a valid time!



Challenge 15
Create a simple trivia game. Ask the user three true-false questions, storing their answer into a char variable. 
Use if statements to determine if the user is correct or not. 
Increase a separate score variable for each correct answer they get. 
The questions should allow both uppercase and lowercase answers.

Example Output

True or False Exam - Enter T(t) or F(f)

Question 1: 'elseif' is a keyword in C++: F

CORRECT! Your score is 1.

Question 2: Algorithms are usually written in C++: t

INCORRECT! Algorithms are language independent!

Question 3: A switch's 'default' handles any unmatched values: x

ERROR! You did not input T or F!

Final Score: 1 of 3



Challenge 16
Create a program to ask for and verify an even number. 
Check to see if the number they entered is in fact even, meaning the number is evenly divisible by 2 (i.e. no remainder).

Example Output

Please enter an even number: 20

Nice!

Please enter an even number: 21

Boo!



Challenge 17
Create a program to ask for a divisor, then randomly generate 3 numbers and check each one to see if it is evenly divisible by the divisor. 
Remember, the Utility.cs file contains a function for getting random numbers.

Example Output

Please enter a divisor: 7

130947868 - no

2083942967 - no

901599951 - yes!



Challenge 18
Create a quote machine. Present the user with a menu of people (living, dead or fictional). 
Then ask the user to select someone from the menu. 
Finally, output an appropriate quote based on their selection. 
Use a switch statement in your code.

Example Output

Quotes on Demand!

--------------------------

1 – Mark Twain

2 – Jiddu Krishnamurti

3 – Graham Priest

--------------------------

Choose wisely: 2

"Constant assertion of belief is an indication of fear." - Jiddu Krishnamurti

Quotes on Demand!

--------------------------

1 – Philip J. Fry

2 – Bender 'Bending' Rodriguez

3 – Hermes Conrad

--------------------------

Choose wisely: 1

"The less fortunate get all the breaks!" – Philip J. Fry



Challenge 19
Create a program to ask the user which color Popsicle™ they would like. 
Use a switch statement to process their input.
Display an appropriate message for the desired color.

Example Output

What color Popsicle do you want from the freezer?

1) Red

2) Green

3) Blue

13) Aquamabrown

> 1

Ah! Red cherry, good choice!

What color Popsicle do you want from the freezer?

1) Red

2) Green

3) Blue

13) Aquamabrown

> 13

Uh... I don't know how long that's been in there...



Challenge 20
Create a Magic 8-Ball program. Ask the user to first think of a yes/no question and then press any key to continue. 
Once they press a key, generate a random number between 0-6 (inclusive), and use a switch statement to print out one of the following statements. 
Feel free to use an enum to make your program read easier.

• Absolutely NOT!

• No

• I don’t think so…

• Hmmm… maybe?

• I believe so…

• Yes

• Hell YES!

Example Output

Think of a yes/no question.

Press any key to continue...

Absolutely NOT!



Challenge 21
Create a program to simulate level difficulty. 
Each level of difficulty of your game will have a different number of enemies, though that number is random. Ask the user which level of difficulty they would like to play. 
Use a switch to process their choice. 
Generate a random number of enemies for your game, but generate a number in a higher range for harder levels of gameplay. 
The exact ranges are up to you.

Example Output

Difficulty Levels

1) Easy

2) Medium

3) Hard

What’ll it be? 1

You’ll have to fight 6 enemies!

Difficulty Levels

1) Easy

2) Medium

3) Hard

What’ll it be? 3

You’ll have to fight 27 enemies!



Challenge 22
Improve the Gentle Jerry's Generic Goods program by adding a menu, making it easier to use (some patrons have been complaining lately). 
Additionally, the regional province where Jerry’s shop is located recently started collecting sales tax (5%), so you must deal with that as well.

Example Output

Welcome to Gentle Jerry's Generic Goods!

1) Sword - 5 gold

2) Shield – 8 gold

3) Potion - 3 gold/ounce

What would you like to buy? 1

How many? 3

3 Swords 15 gold

------------------------------

Subtotal 15 gold

5% sales tax 0.75 gold

------------------------------

Total 15 gold, 75 silver



Challenge 23
Write a program to roll a random character. Declare an enum with all the different character types in your game. 
Then generate a random number between the min and max values of your enum (e.g. if you have 4 character classes, then enum values are 0, 1, 2, 3). 
Finally, depending on the character class that was randomly selected, generate some character stats, either randomly or hardcoded.

Example Output

Press enter to roll a random character...

Type: Warrior

HP: 93

MP: 1



Challenge 24
Create a simplified, turn-based “screen saver” program. At a random location in the console window, print a string of text. 
Then wait for the user to press the enter key (std::cin.get()), clear the console window (std::cls), and repeat the process at a new random location. 
Do this 5 times. 
The program should simulate a basic screen saver program, only dependent upon user input to progress.

Note: the Console class offers lots of interesting functions, such as the ability to change the foreground color, background color, etc. You could use this to make the program more interesting.
*/