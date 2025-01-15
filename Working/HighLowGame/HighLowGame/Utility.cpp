#include <random>

class Utility {
public:
	static int RandomInt(int low, int high) {
		std::random_device rd;				//Random Device
		std::mt19937 gen(rd());				//Seed it

		//Set the Range
		std::uniform_int_distribution<> dist(low, high);

		return dist(gen);
	}

	/// <summary>
	/// Method to convert Title text into Upper Letters.
	/// </summary>
	/// <param name="text"></param>
	/// <returns></returns>
	static std::string StringToUpper(std::string text) {

		//Initialize a placeholder string
		std::string result = "";

		//Loop through every individual characher
		for (int i = 0; i < text.length(); i++) {
			char character = text[i];
			char newChar = character;

			//If the character is NOT a space
			if (character != ' ') {
				
				//Convert it to uppercase
				newChar = toupper(character);
			}
			//Add it to the placeholder
			result += newChar;
		}
		//Return the result 
		return result;
	}

	/// <summary>
	/// Method to convert Title text into Upper Letters.
	/// </summary>
	/// <param name="text"></param>
	/// <returns></returns>
	static std::string StringToLower(std::string text) {

		//Initialize a placeholder string
		std::string result = "";

		//Loop through every individual characher
		for (int i = 0; i < text.length(); i++) {
			char character = text[i];
			char newChar = character;

			//If the character is NOT a space
			if (character != ' ') {

				//Convert it to lowercase
				newChar = tolower(character);
			}
			//Add it to the placeholder
			result += newChar;
		}
		//Return the result 
		return result;
	}

};