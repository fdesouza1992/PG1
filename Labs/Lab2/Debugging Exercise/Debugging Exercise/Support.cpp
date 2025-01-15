#include "Support.h"

#include <random>
#include <vector>

using namespace std;

int Support::seed = RandomInt();

int Support::GetSeed()
{
	return seed;
}

string Support::GetName(string name)
{
	name = ReverseString(name);
	return name;
}

int Support::GetAge(int age)
{
	return age - 100;
}

string Support::ReverseString(string source)
{
	string result = "";

	for(int i = source.size() - 1; i >= 0; i--)
	{
		result += source.at(i);
	}

	return result;
}

int Support::RandomInt(int low, int high)
{
	random_device rd;		// Random device
	mt19937 gen(rd());		// Seed it

	// Set the range
	uniform_int_distribution<> dist(low, high);

	return dist(gen);

}
