#include <iostream>
using namespace std;

class UI {
public:
	static void DisplayDivider() {
		cout << "\n----------------------------\n" << endl;
	}

	static string PromptUser(string primeMessage, string promptText) {
		string response;

		cout << primeMessage << endl;
		cout << promptText << ": ";

		cin >> response;

		return response;
	}

	static void DisplayHeader(string headerText) {
		cout << "=========================" << endl;
		cout << "\t" << headerText << endl;
		cout << "=========================\n" << endl;
	}
};