#include "Test.h"
#include "LabTestUtils.h"
#include "Submission.cpp"
#include "UI.h"
#include <string>
#include <vector>
#include <random>
#include <cstdlib>
#include <ctime>
#include <cmath>

#pragma warning(disable:4244)

using namespace std;

vector<int> Test::GenerateTriangle() {

	int base = RandomInt(1, 10);
	int height = RandomInt(1, 10);
	double hypot = RandomInt(1, 10);

	int randomizer = RandomInt(1, 50);

	if (randomizer % 3 == 0) {
		// To ensure it is a right triangle, set the third side length using Pythagorean theorem
		hypot = sqrt((double)(base * base + height * height));
	}

	if(hypot == floor(hypot)){
		return { base, height, (int) hypot };
	} else {
		return Test::GenerateTriangle();
	}
}


void Test::Run() {
	double labScore = 0;
#ifdef MATH_OPERATOR
	labScore += Check1();
	labScore += Check2();
#endif
	labScore += Check3();
	labScore += Check4();
	labScore += Check5();
	labScore += Check6();
	labScore += Check7();
	labScore += Check8();

	LabTestUtils::AppendDoubleWithTimestampToFile(labScore);

	UI::DisplayScore(labScore, 100.0, true);
}

#ifdef MATH_OPERATOR
double Test::Check2() {
	const vector<string> response = { "Add", "Subtract", "Multiply", "Divide", "Modulo"};
	const vector<int> opers = RandomSmallInts();
	const vector<int> numbers1 = RandomInts(1, 10);
	const vector<int> numbers2 = RandomInts(1, 10);
	vector<string> inputs;
	vector<string> expected;
	vector<string> submitted;

	for (int i = 0; i < opers.size(); i++)
	{

		int num1 = numbers1.at(i);
		int num2 = numbers2.at(i);
		int oper = opers.at(i);
		int r = 5;

		switch(oper)
		{
			case 0:
				r = num1 + num2;
				break;
			case 1:
				r = num1 - num2;
				break;
			case 2:
				r = num1 * num2;
				break;
			case 3:
				r = num1 / num2;
				break;
			case 4:
				r = num1 % num2;
				break;
		}


		inputs.push_back(to_string(num1) + ", " + to_string(num2) + ", " + response.at(oper));
		expected.push_back(to_string(r));
		submitted.push_back(to_string(Submission::Test2(num1, num2, static_cast<Submission::MathOperator>(oper))));
	}

	return LabTestUtils::Tester(2, 2.5, inputs, expected, submitted, 0);
}

double Test::Check1() {
	const vector<string> response = { "Add", "Subtract", "Multiply", "Divide", "Modulo" };
	const vector<int> opers = RandomSmallInts();
	vector<string> inputs;
	vector<string> expected;
	vector<string> submitted;

	for (const int oper : opers)
	{
		inputs.push_back(to_string(oper));
		expected.push_back(response.at(oper));
		submitted.push_back(response.at(Submission::Test1(oper)));
	}

	return LabTestUtils::Tester(1, 2.5, inputs, expected, submitted, 0);
}

#endif

double Test::Check3() {
	vector<bool> bools = RandomBools();
	vector<string> inputs;
	vector<string> expected;
	vector<string> submitted;

	for (auto&& i : bools)
	{
		inputs.emplace_back((i ? "true" : "false"));
		expected.emplace_back((i ? "Proven" : "Denied"));
		submitted.push_back(Submission::Test3(i));
	}

	return LabTestUtils::Tester(3, 2.5, inputs, expected, submitted, 0);
}

double Test::Check4() {
	vector<bool> bools = RandomBools();
	const vector<double> doubles = RandomDbls();
	vector<string> inputs;
	vector<string> expected;
	vector<string> submitted;

	for (int i = 0; i < bools.size(); i++) {
		inputs.push_back(to_string(doubles.at(i)) + ", " + (bools.at(i) ? "true" : "false"));
		expected.push_back(to_string((bools.at(i) ? doubles.at(i) * 2.2 : doubles.at(i) * 0.45)));
		submitted.push_back(to_string(Submission::Test4(doubles.at(i), bools.at(i))));
	}

	return LabTestUtils::Tester(4, 2.5, inputs, expected, submitted, 0);
}

double Test::Check5() {
	const vector<string> response = { "Verbal Reprimand", "Formal Reprimand", "Suspension", "Termination" };
	const vector<int> numbers = MoreRandomSmallInts();
	vector<string> inputs;
	vector<string> expected;
	vector<string> submitted;

	for (const int number : numbers)
	{

		inputs.push_back(to_string(number));
		expected.push_back(response.at(number - 1));
		submitted.push_back(Submission::Test5(number));
	}

	return LabTestUtils::Tester(5, 2.5, inputs, expected, submitted, 0);
}

double Test::Check6() {
	const vector<int> years = RandomInts(1976, 2023);

	vector<string> inputs;
	vector<string> expected;
	vector<string> submitted;

	for (const int year : years)
	{

		inputs.push_back(to_string(year));
		expected.emplace_back((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? "true" : "false");
		submitted.emplace_back((Submission::Test6(year)) ? "true" : "false");
	}

	return LabTestUtils::Tester(6, 2.5, inputs, expected, submitted, 0);
}

double Test::Check7() {
	vector<vector<int>> triangles;

	for(int i = 0; i < 5; i++)
	{
		triangles.push_back(GenerateTriangle());
	}

	vector<string> inputs;
	vector<string> expected;
	vector<string> submitted;

	for (int i = 0; i < triangles.size(); i++) {
		inputs.push_back(
			to_string(triangles.at(i).at(0)) + ", " + 
			to_string(triangles.at(i).at(1)) + ", " + 
			to_string(triangles.at(i).at(2))
		);
		expected.emplace_back((
			pow(triangles.at(i).at(0), 2) + 
			pow(triangles.at(i).at(1), 2) == 
			pow(triangles.at(i).at(2), 2)
		) ? "true" : "false");
		submitted.emplace_back((Submission::Test7(triangles.at(i).at(0), triangles.at(i).at(1), triangles.at(i).at(2)) ? "true" : "false"));
	}

	return LabTestUtils::Tester(7, 2.5, inputs, expected, submitted, 0);
}

double Test::Check8() {
	const vector<char> response = { 'A', 'B', 'C', 'D', 'F', '?' };
	const vector<double> numbers = RandomBigDbls();
	vector<string> inputs;
	vector<string> expected;
	vector<string> submitted;

	char result = response.at(5);

	for (const double i : numbers)
	{
		const double number = i;

		if (number > 100 || number < 0) {
			result = response.at(5);
		}
		else if (number >= 90) {
			result = response.at(0);
		}
		else if (number >= 80) {
			result = response.at(1);
		}
		else if (number >= 73) {
			result = response.at(2);
		}
		else if (number >= 70) {
			result = response.at(3);
		}
		else {
			result = response.at(4);
		}

		string s, r;
		s.push_back(result);
		r.push_back(Submission::Test8(i));
		inputs.push_back(to_string(i));
		expected.push_back(s);
		submitted.push_back(r);
	}

	return LabTestUtils::Tester(8, 2.5, inputs, expected, submitted, 0);
}


vector<bool> Test::RandomBools() {
	vector<bool> bools;

	srand(time(nullptr));
	for (int i = 0; i < 5; i++) {
		const int randomNumber = rand() % 2;

		if (randomNumber % 2 == 0) {
			bools.push_back(true);
		}
		else {
			bools.push_back(false);
		}
	}

	return bools;
}

vector<double> Test::RandomDbls()
{
	vector<double> numbers(5);

	random_device randomDevice;
	mt19937 gen(randomDevice());
	uniform_real_distribution<double> unif(1, 10);

	for (double& number : numbers)
	{
		const double random_double = unif(gen);

		number = random_double;
	}

	return numbers;
}

vector<double> Test::RandomBigDbls()
{
	vector<double> numbers(5);

	random_device randomDevice;
	mt19937 gen(randomDevice());
	uniform_real_distribution<double> unif(1, 100);

	for (double& number : numbers)
	{
		const double random_double = unif(gen);

		number = random_double;
	}

	return numbers;
}

vector<int> Test::RandomInts(int low, int high)
{
	vector<int> numbers(5); // Placeholder vector

	random_device rd;		// Random device
	mt19937 gen(rd());		// Seed it

	// Set the range
	uniform_int_distribution<> dist(low, high);

	for (int& number : numbers)
	{
		number = dist(gen);
	}

	return numbers;
}

int Test::RandomInt(int low, int high)
{

	random_device rd;		// Random device
	mt19937 gen(rd());		// Seed it

	// Set the range
	uniform_int_distribution<> dist(low, high);

	return dist(gen);
}

vector<int> Test::RandomSmallInts() {
	vector<int> numbers(5); // Placeholder vector

	random_device rd;		// Random device
	mt19937 gen(rd());		// Seed it

	// Set the range
	uniform_int_distribution<> dist(0, 4);

	for (int& number : numbers)
	{
		number = dist(gen);
	}

	return numbers;
}

vector<int> Test::MoreRandomSmallInts() {
	vector<int> numbers(5); // Placeholder vector

	random_device rd;		// Random device
	mt19937 gen(rd());		// Seed it

	// Set the range
	uniform_int_distribution<> dist(1, 4);

	for (int& number : numbers)
	{
		number = dist(gen);
	}

	return numbers;
}