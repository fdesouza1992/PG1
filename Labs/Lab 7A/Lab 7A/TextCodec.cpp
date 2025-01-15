#define TEXT_CODEC
#include <string>

class TextCodec {														//Defining a class named TextCodec
	short int mOffset;


public:
	TextCodec(short int offset) {										// Constructor that initializes the offset value
		this->mOffset = offset;
	}

	std::string Encode(std::string message)								//Getter function to encode a given message using the offset value
	{
		std::string result = message;									//Initialize the result with the original message

		for (int i = 0; i < message.length(); i++)						//Encoding the message by adding the offset value to each character
		{
			result[i] = (char)(result[i] + mOffset);					
		}
		return result;
	}

	std::string Decode(std::string message) {							//Getter function to decode a given encoded message using the offset value
		{
			std::string result = message;								//Initialize the result with the encoded message

			for (int i = 0; i < message.length(); i++)					//Decoding the message by subtracting the offset value from each character
			{
				result[i] = (char)(result[i] - mOffset);
			}

			return result;
		}
	}
};