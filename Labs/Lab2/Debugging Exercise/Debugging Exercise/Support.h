#pragma once
#include <string>

class Support
{
	static std::string ReverseString(std::string source);

public:
	static constexpr int MAX = 199;
	static constexpr int MIN = 110;
	static int seed;
	static int GetSeed();
	static std::string GetName(std::string name);
	static int GetAge(int age);
	static int RandomInt(int low = 1, int high = 100);
};

