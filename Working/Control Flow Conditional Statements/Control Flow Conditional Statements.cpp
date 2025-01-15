// Control Flow Conditional Statements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*Logical Operators
>Greater than
<Less Than
>=Greater Than Equal To
<=Less Than Equal To
&& And
% Modulus (Divisible by)
/ Division
* Multiplication
+ Addition
- Subtration
|| OR
*/

#include <iostream>

int main()
{
	int num1 = 5;
	int num2 = 6;
	int num3 = 8;

	// TODO: If

		//num1 is greater than num2
	if (num1 > num2) {
		std::cout << " " << "True";
	}

	//condition: num1 is greater than equals to  num2 is less than or equal to num3
	if (num1 >= num2 <= num3) {
		std::cout << " " << "True";
	}

	//condition: num1 and num2 are not equal to 0
	if (num1 && num2 != 0) {
		std::cout << " " << "False";
	}

	// TODO: Else
	if (num1 > num2 || num < 0) {
		std::cout << " " << "True";
	else {
		std::cout << " " << "False";
	}
	}

	// TODO: If-else
	if (num1 > num2) {
		std::cout << " " << "Greater Than";
	}
	else if (num1 < num2) {
		std::cout << " " << "Less Than";

	}
	else if (num1 == num2) {
		std::cout << " " << "Equals to";
	}

	// TODO: Switch
	swtich(num1) {
		case 4:
			std::cout << "Number 4!";
			break;
		case 3:
			std::cout << "Number 3!";
			break;
		case 2:
			std::cout << "Number 2!";
			break;
		case 1:
			std::cout << "Number 1!";
			break;
		case 5:
			std::cout << "Number 5!";
			break;
		default:
			std::cout << "No Matches!";
			break;
	}
	// TODO: && and ||

	// && Means AND
	// || Means OR

	// TODO: Nested conditionals
	if (num1 > 0 && num2 > 0) {
		if (num1 > num2) {
			std::cout << " " << "Greater Than.";
		else if (num1 < num2) {
			std::cout << " " << "Less Than.";
		}
		else {
			std::cout << " " << "Equals";
		}
		}
		else {
			std::cout << " " << "Negative!";
		}
	}
}
