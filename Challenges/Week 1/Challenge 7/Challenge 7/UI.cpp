#include <iostream>
using namespace std;

class UI {
public:
	//Method for the Header of Console App
	static void DisplayHeader(string headerText) {
		cout << "====================================" << endl;
		cout << "\t" << headerText << endl;
		cout << "====================================\n" << endl;
	}
	
	//Method to display the Sbyte range size using SCHAR_MIN and CHAR_MAX
	static void Sbyte(string lineText) {
		std::cout << " " << lineText << " " << SCHAR_MIN << " to " << CHAR_MAX << std::endl;

	}
	
	//Method to display the Byte range size using UCHAR_MAX
	static void Byte(string lineText) {
		std::cout << " " << lineText << " " << 0 << " to " << UCHAR_MAX << std::endl;
	}
	
	//Method to display the Short range size using SHRT_MIN and SHRT_MAX
	static void Short(string lineText) {
		std::cout << " " << lineText << " " << SHRT_MIN << " to " << SHRT_MAX << std::endl;
	}

	//Method to display the UShort range size using USHRT_MAX
	static void UShort(string lineText) {
		std::cout << " " << lineText << " " << 0 << " to " << USHRT_MAX << std::endl;
	}

	//Method to display the Int range size using INT_MIN and INT_MAX
	static void Integer(string lineText) {
		std::cout << " " << lineText << " " << INT_MIN << " to " << INT_MAX << std::endl;
	}

	//Method to display the UInteger range size using ULONG_MAX
	static void UInteger(string lineText) {
		std::cout << " " << lineText << " " << 0 << " to " << ULONG_MAX << std::endl;
	}

	//Method to display the Long range size using LLONG_MIN and LLONG_MAX
	static void Long(string lineText) {
		std::cout << " " << lineText << " " << LLONG_MIN << " to " << LLONG_MAX << std::endl;
	}

	//Method to display the ULONG range size using ULLONG_MAX
	static void ULong(string lineText) {
		std::cout << " " << lineText << " " << 0 << " to " << ULLONG_MAX << std::endl;
	}
};
