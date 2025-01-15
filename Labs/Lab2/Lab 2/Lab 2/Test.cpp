#include <random>
#include <string>
#include <vector>
#include <iostream>
#include "LabTestUtils.h"
#include "LabUI.h"
#include "Submission.cpp"
#pragma warning(disable:4244)

using namespace std;

class Test {
	static vector<int> RandomInts() {
		vector<int> numbers(5); // Placeholder vector

		random_device rd;		// Random device
		mt19937 gen(rd());		// Seed it

		// Set the range
		uniform_int_distribution<> dist(-10, 10);

		for (int& number : numbers)
		{
			number = dist(gen);
		}

		return numbers;
	}

	static vector<int> RandomUnsignedInts() {
		vector<int> numbers(5); // Placeholder vector

		random_device rd;		// Random device
		mt19937 gen(rd());		// Seed it

		// Set the range
		uniform_int_distribution<> dist(0, 10);

		for (int& number : numbers)
		{
			number = dist(gen);
		}

		return numbers;
	}

	static std::vector<double> RandomDoubles() {
		std::vector<double> numbers(5); // Placeholder vector

		std::random_device rd;      // Random device
		std::mt19937 gen(rd());     // Seed it

		// Set the range
		std::uniform_real_distribution<> dist(0.0, 999.9999999);

		for (double& number : numbers)
		{
			number = dist(gen);
		}

		return numbers;
	}

	static std::vector<float> RandomFloats() {
		std::vector<float> numbers(5); // Placeholder vector

		std::random_device rd;      // Random device
		std::mt19937 gen(rd());     // Seed it

		// Set the range
		std::uniform_real_distribution<float> dist(0.0f, 10.0f);

		for (float& number : numbers)
		{
			number = dist(gen);
		}

		return numbers;
	}

	static std::vector<long> RandomLongs() {
		std::vector<long> numbers(5); // Placeholder vector

		std::random_device rd;      // Random device
		std::mt19937 gen(rd());     // Seed it

		// Set the range
		std::uniform_int_distribution<long> dist(0, 999999999);

		for (long& number : numbers)
		{
			number = dist(gen);
		}

		return numbers;
	}

	static int Test3() {
		const vector<int> numbers = RandomInts();

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (const int number : numbers)
		{
			inputs.push_back("\""+ to_string(number) + "\"");
			expected.push_back(to_string(number));
			submitted.push_back(to_string(Submission::Test3(to_string(number))));
		}

		return LabTestUtils::Tester(3, 2, inputs, expected, submitted, 0);
	}

	static int Test4() {
		const vector<double> numbers = RandomDoubles();

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (const double number : numbers)
		{
			inputs.push_back("\"" + to_string(number) + "\"");
			expected.push_back(to_string(number));
			submitted.push_back(to_string(Submission::Test4(to_string(number))));
		}

		return LabTestUtils::Tester(4, 2, inputs, expected, submitted, 0);
	}

	static int Test5() {
		const vector<float> numbers = RandomFloats();

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (const float number : numbers)
		{
			inputs.push_back("\"" + to_string(number) + "\"");
			expected.push_back(to_string(number));
			submitted.push_back(to_string(Submission::Test5(to_string(number))));
		}

		return LabTestUtils::Tester(5, 2, inputs, expected, submitted, 0);
	}

	static int Test6() {
		const vector<int> numbers = RandomUnsignedInts();

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (const int number : numbers)
		{
			inputs.push_back("\"" + to_string(number) + "\"");
			expected.push_back(to_string(number));
			submitted.push_back(to_string(Submission::Test6(to_string(number))));
		}

		return LabTestUtils::Tester(6, 2, inputs, expected, submitted, 0);
	}

	static int Test7() {
		const vector<long> numbers = RandomLongs();

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (const long number : numbers)
		{
			inputs.push_back("\"" + to_string(number) + "\"");
			expected.push_back(to_string(number));
			submitted.push_back(to_string(Submission::Test7(to_string(number))));
		}

		return LabTestUtils::Tester(7, 2, inputs, expected, submitted, 0);
	}

	static int Test8() {
		const vector<double> numbers = RandomDoubles();

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (const double number : numbers)
		{
			inputs.push_back(to_string(number));
			expected.push_back(to_string(static_cast<float>(number)));
			submitted.push_back(to_string(Submission::Test8(number)));
		}

		return LabTestUtils::Tester(8, 2, inputs, expected, submitted, 0);
	}

	static int Test9() {
		const vector<float> numbers = RandomFloats();

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (const float number : numbers)
		{
			inputs.push_back(to_string(number));
			expected.push_back(to_string(static_cast<int>(number)));
			submitted.push_back(to_string(Submission::Test9(number)));
		}

		return LabTestUtils::Tester(9, 2, inputs, expected, submitted, 0);
	}

	static int Test10() {
		const vector<int> numbers = RandomInts();

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (const int number : numbers)
		{
			inputs.push_back(to_string(number));
			expected.push_back("\"" + to_string(number) + "\"");

			string output = (Submission::Test10(number)).empty() ? "null" : "\"" + Submission::Test10(number) + "\"";

			submitted.push_back(output);
		}

		return LabTestUtils::Tester(10, 2, inputs, expected, submitted, 0);
	}


public: 
	static void Run() {
		int labScore = 0;
		labScore += Test3();
		labScore += Test4();
		labScore += Test5();
		labScore += Test6();
		labScore += Test7();
		labScore += Test8();
		labScore += Test9();
		labScore += Test10();

		UI::DisplayDivider();
		cout << "Total Points: " << to_string(labScore) << " of 80" << endl;
		LabTestUtils::AppendDoubleWithTimestampToFile(labScore);
	}
};