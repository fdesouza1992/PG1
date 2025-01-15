#include <iostream>
#include <random>
#include <string>
#include <vector>
#include "LabTestUtils.h"
#include "LabUI.h"
#include "Submission.cpp"

using namespace std;

class Test
{


private:
	static double Check1() {
		int arrays[5][5];

		for (auto& array : arrays)
		{
			for (int& number : array)
			{
				number = RandomInt(10, 50);
			}
		}

		const vector<int> numbers = RandomInts(0, 4);

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (int i = 0; i < numbers.size(); i++)
		{
			inputs.push_back("[ " + PrintArray(arrays[i]) + " ], " + to_string(numbers.at(i)));
			expected.push_back(to_string(arrays[i][numbers.at(i)]));
			submitted.push_back(to_string(Submission::Test1(arrays[i], numbers.at(i))));
		}

		return LabTestUtils::Tester(1, 2, inputs, expected, submitted, 0);
	}

	static double Check2() {
		int arrays[5][5];

		for (auto& array : arrays)
		{
			for (int& number : array)
			{
				number = RandomInt(10, 50);
			}
		}

		const vector<int> numbers = RandomInts(0, 4);

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (int i = 0; i < numbers.size(); i++)
		{
			inputs.push_back("[ " + PrintArray(arrays[i]) + " ], " + to_string(numbers.at(i)));
			expected.push_back("[ " + PrintArrayWithOverride(arrays[i], numbers.at(i), 0) + " ]");
			Submission::Test2(arrays[i], numbers.at(i));
			submitted.push_back("[ " + PrintArray(arrays[i]) + " ]");
		}

		return LabTestUtils::Tester(2, 2, inputs, expected, submitted, 0);
	}

	static double Check3()
	{
		const vector<vector<string>> data = GenerateDuplicates();

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (int i = 0; i < data.size(); i++)
		{
			inputs.push_back("{ " + PrintVector(data.at(i)) + " }");
			expected.push_back((CDs(data.at(i))) ? "true" : "false");
			submitted.push_back((Submission::Test3(data.at(i))) ? "true" : "false");
		}

		return LabTestUtils::Tester(3, 2, inputs, expected, submitted, 0);
	}


	static double Check4() {
		vector<vector<int>> numberSets;

		for (int i = 0; i < 5; i++)
		{
			vector<int> numbers = RandomInts(10, 50);

			numberSets.push_back(numbers);
		}

		const vector<int> positions = RandomInts(0, 4);

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (int i = 0; i < numberSets.size(); i++)
		{
			inputs.push_back("{ " + PrintVector(numberSets.at(i)) + " }, " + to_string(positions.at(i)));
			expected.push_back(to_string(numberSets.at(i).at(positions.at((i)))));
			submitted.push_back(to_string(Submission::Test4(numberSets.at(i), positions.at(i))));
		}

		return LabTestUtils::Tester(4, 2, inputs, expected, submitted, 0);
	}
public:
	static void Run()
	{
		double p = 0;

		p += Check1();
		p += Check2();
		p += Check3();
		p += Check4();
		p += Check5();
		p += Check6();
		p += Check7();
		p += Check8();
		p += Check9();
		p += Check10();

		LabTestUtils::AppendDoubleWithTimestampToFile(p);

		UI::DisplayScore(p, 100.0, true);
	}

private:
	static double Check5() {
		vector<vector<int>> numberSets;

		for (int i = 0; i < 5; i++)
		{
			vector<int> numbers = RandomInts(10, 50);

			numberSets.push_back(numbers);
		}

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (auto& numberSet : numberSets)
		{
			inputs.push_back(PrintVector(numberSet));
			expected.push_back("{ " + PrintVector(numberSet) + " }");
			submitted.push_back("{ " + PrintVector(Submission::Test5(
				numberSet.at(0),
				numberSet.at(1),
				numberSet.at(2),
				numberSet.at(3),
				numberSet.at(4)
			)) + " }");
		}

		return LabTestUtils::Tester(5, 2, inputs, expected, submitted, 0);
	}

	static double Check6() {
		const vector<vector<string>> words = RandomWords();

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (auto& word : words)
		{
			inputs.push_back(
				word.at(0) + ", " +
				word.at(1) + ", " +
				word.at(2) + ", " +
				word.at(3)
			);
			expected.push_back(
				"{ " +
				word.at(0) + ", " +
				word.at(1) + ", " +
				word.at(2) + ", " +
				word.at(3) +
				" }"
			);

			vector<string> received = Submission::Test6(
				word.at(1),
				word.at(3),
				word.at(0),
				word.at(2)
			);

			submitted.push_back("{ " + PrintVector(received) + " }"
			);
		}

		return LabTestUtils::Tester(6, 2, inputs, expected, submitted, 0);
	}

	static double Check7() {
		char characters[5][5];
		vector<vector<int>> numbers;

		for (auto& character : characters)
		{
			vector<int> set;

			for (char& j : character)
			{
				j = RandomInt(97, 122);
				set.push_back(j);
			}

			numbers.push_back(set);
		}

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (int i = 0; i < 5; i++)
		{
			inputs.push_back("[ " + PrintArray(characters[i]) + " ]");
			expected.push_back("{ " + PrintVector(numbers[i]) + " }");
			submitted.push_back("{ " + PrintVector(Submission::Test7(characters[i])) + " }");
		}

		return LabTestUtils::Tester(7, 2, inputs, expected, submitted, 0);
	}

	static double Check8()
	{
		char sets[5][5];

		for (auto& set : sets)
		{
			for (char& letter : set)
			{
				letter = static_cast<char>(RandomInt(65, 90));
			}
		}
		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (auto& set : sets)
		{
			inputs.push_back("[ " + PrintArray(set) + " ]");
			expected.push_back("[ " + GetUpDown(set) + " ]");
			Submission::Test8(set);
			submitted.push_back("[ " + PrintArray(set) + " ]");
		}

		return LabTestUtils::Tester(8, 2, inputs, expected, submitted, 0);
	}

	static double Check9()
	{
		int testScore = 0;

		UI::DisplayHeader("Test 9");

		vector <vector<vector<int>>> sets;

		vector <vector<int>> mins;
		for (int i = 0; i < 5; i++)
		{
			mins.push_back(RandomInts(0, 9));
		}

		vector <vector<int>> maxes;
		for (int i = 0; i < 5; i++)
		{
			maxes.push_back(RandomInts(10, 50));
		}

		vector <vector<int>> seeds;
		for (int i = 0; i < 5; i++)
		{
			seeds.push_back(RandomInts(1, 5));
		}

		vector<vector<vector<int>>> submitted;

		for (int i = 0; i < 5; i++)
		{
			vector<vector<int>> result = Submission::Test9(mins.at(i), maxes.at(i), seeds.at(i));
			submitted.push_back(result);
		}

		for (int i = 0; i < 5; i++)
		{
			vector<vector<int>> result;

			for (int j = 0; j < mins.size(); j++)
			{
				vector<int> inner = {
					mins[i][j],
					maxes[i][j],
					seeds[i][j]
				};

				result.push_back(inner);
			}

			sets.push_back(result);
		}


		if (!submitted.empty())
		{
			TwoDTryPass(sets, submitted);

			for (int i = 0; i < 5; i++)
			{
				testScore += (Compare2DArrays(sets[i], submitted[i])) ? 2 : 0;
			}
		}




		cout << "\n" << "Input:" << endl;
		for (int i = 0; i < mins.size(); i++)
		{
			WriteYellow("[ " + PrintVector(mins.at(i)) + " ],");
			WriteYellow("[ " + PrintVector(maxes.at(i)) + " ], ");
			WriteYellow("[ " + PrintVector(seeds.at(i)) + " ]");
			cout << endl;
		}

		cout << "\n" << "Expected Output:" << endl;
		Print2DVectors(sets);

		cout << "\n" << "Received Output:" << endl;
		Print2DVectors(submitted);

		cout << endl;

		UI::DisplayScore(testScore, 2);
		UI::DisplayDivider();

		return testScore;
	}

	static double Check10()
	{
		int testScore = 0;

		const vector<vector<vector<int>>> input = Build2DVector();
		vector<vector<vector<int>>> expected;
		vector<vector<vector<int>>> submitted;

		UI::DisplayHeader("Test 10", true);

		expected.reserve(input.size());
		for (const auto& i : input)
		{
			expected.push_back(GetTv(i));
			// submitted.push_back(GetTv(i));
		}

		submitted.reserve(input.size());
		for (const auto& i : input)
		{
			submitted.push_back(Submission::Test10(i));
		}

		if (!submitted.empty())
		{
			TwoDTryPass(expected, submitted);

			for (int i = 0; i < 5; i++)
			{
				testScore += (Compare2DArrays(expected[i], submitted[i])) ? 2 : 0;
			}
		}

		cout << "Input:" << endl;
		Print2DVectors(input);

		cout << "\n" << "Expected Output:" << endl;
		Print2DVectors(expected);

		cout << "\n" << "Received Output:" << endl;

		Print2DVectors(submitted);

		cout << endl;

		UI::DisplayScore(testScore, 2);
		UI::DisplayDivider();

		return testScore;
	}

	static vector<int> RandomInts(const int low, const int high) {
		vector<int> numbers(5);	// Placeholder vector

		random_device rd;				// Random device
		mt19937 gen(rd());			// Seed it

		// Set the range
		uniform_int_distribution<> dist(low, high);

		for (int& number : numbers)
		{
			number = dist(gen);
		}

		return numbers;
	}

	static int RandomInt(const int low, const int high)
	{
		random_device rd;			// Random device
		mt19937 gen(rd());		// Seed it

		// Set the range
		uniform_int_distribution<> dist(low, high);

		return dist(gen);
	}

	static string PrintArray(int numbers[5])
	{
		string result;
		// int arraySize = sizeof(numbers) / sizeof(int);

		for (int i = 0; i < 5; i++)
		{
			result += to_string(numbers[i]);

			if (i < 5 - 1)
			{
				result += ", ";
			}
		}

		return result;
	}

	static string PrintArray(char characters[5])
	{
		string result;

		for (int i = 0; i < 5; i++)
		{
			result += characters[i];

			if (i < 5 - 1)
			{
				result += ", ";
			}
		}

		return result;
	}

	static string PrintVector(const vector<int>& numbers)
	{
		string result;

		for (int i = 0; i < numbers.size(); i++)
		{
			result += to_string(numbers.at(i));

			if (i != numbers.size() - 1)
			{
				result += ", ";
			}
		}

		return result;
	}

	static bool CDs(const vector<string>& s)
	{
		constexpr bool result = false;

		for (int i = 0; i < s.size(); i++)
		{
			const string& n = s.at(i);

			for (int j = 0; j < s.size(); j++)
			{
				if (i != j && n == s.at(j))
				{
					return true;
				}
			}
		}

		return result;
	}

	static string PrintVector(const vector<string>& words)
	{
		string result;

		for (int i = 0; i < words.size(); i++)
		{
			result += words.at(i);

			if (i != words.size() - 1)
			{
				result += ", ";
			}
		}

		return result;
	}

	static vector<vector<vector<int>>> Build2DVector()
	{
		vector<vector<vector<int>>> data;

		for (int i = 0; i < 5; i++)
		{
			vector <vector<int>> numbers;

			for (int j = 0; j < 2; j++)
			{
				vector<int> set;

				for (int k = 0; k < 3; k++)
				{
					set.push_back(RandomInt(1, 9));
				}

				numbers.push_back((set));
			}

			data.push_back(numbers);
		}

		return data;
	}

	static void Print2DVectors(const vector<vector<vector<int>>>& numbers)
	{
		if (!numbers.empty() && !numbers.at(0).empty())
		{
			const size_t inner = numbers.at(0).at(0).size();
			const size_t middle = numbers.at(0).size();
			const size_t outer = numbers.size();

			for (int i = 0; i < middle; i++)
			{
				for (int j = 0; j < outer; j++) {

					string dimension;

					for (int k = 0; k < inner; k++)
					{
						// cout << numbers.at(j).at(i).at(k) << " ";
						dimension += to_string(numbers.at(j).at(i).at(k)) + " ";
					}

					string spaces = (inner == 3) ? "   " : "     ";

					WriteYellow(dimension);
					cout << spaces;
				}

				cout << "\n";
			}
		}
	}

	static bool Compare2DArrays(const vector<vector<int>>& expected, const vector<vector<int>>& submitted)
	{
		bool yes = true;

		if (submitted.empty())
		{
			yes = false;
		}
		else if (expected.size() != submitted.size() ||
			expected.at(0).size() != submitted.at(0).size())
		{
			yes = false;
		}
		else
		{
			for (int r = 0; r < expected.size() && yes; r++)
			{
				for (int c = 0; c < expected.at(0).size(); c++)
				{
					if (expected[r][c] != submitted[r][c])
					{
						yes = false;
						break;
					}
				}
			}
		}

		return yes;
	}

	static void TwoDTryPass(vector<vector<vector<int>>> expected, vector<vector<vector<int>>> submitted)
	{
		for (int i = 0; i < submitted.size(); i++)
		{
			bool output = false;

			if (Compare2DArrays(expected[i], submitted[i]))
			{
				output = true;
			}

			DisplayPassFail(output);
			cout << "   ";
		}

		cout << "\n" << endl;
	}

	static string PrintArrayWithOverride(int numbers[], int position, int override)
	{
		string result;

		for (int i = 0; i < 5; i++)
		{
			if (i != position)
			{
				result += to_string(numbers[i]);
			}
			else
			{
				result += to_string(override);
			}

			if (i < 5 - 1)
			{
				result += ", ";
			}
		}

		return result;
	}

	static vector<vector<string>> RandomWords()
	{
		vector<vector<string>> words;

		for (int i = 0; i < 5; i++)
		{
			const int group = RandomInt(0, 10);

			if (group % 2 == 0)
			{
				words.push_back(RandomFruits());
			}
			else
			{
				words.push_back(RandomCharacters());
			}
		}

		return words;
	}

	static vector<string> RandomFruits()
	{
		const string FRUITS[20] = {
			"acai"
			"apple",
			"ananas",
			"apricot",
			"avocado",
			"banana",
			"blueberry",
			"cherry",
			"date",
			"durian",
			"elderberry",
			"fig",
			"grapefruit",
			"lime",
			"mango",
			"orange",
			"peach",
			"plum",
			"starfruit",
			"tomato",
			"watermelon"
		};


		vector<string> randomFruits;

		for (int i = 0; i < 4; i++)
		{
			const int fruit = RandomInt(0, 19);
			randomFruits.push_back(FRUITS[fruit]);
		}

		return randomFruits;
	}

	static vector<string> RandomCharacters()
	{
		const string GAME_CHARACTERS[25] = {
			"Ezio Auditore",
			"Cloud Strife",
			"Mario",
			"Luigi",
			"Illidan Stomrage",
			"Varian Wrynn",
			"John-117",
			"Master Chief",
			"Cortana",
			"Steve",
			"Link",
			"Zelda",
			"Ganondorf",
			"Lucio",
			"Tracer",
			"Orisa",
			"Sage",
			"Killjoy",
			"Reyna",
			"Viper",
			"Echo",
			"Akali",
			"Draven",
			"Miss Fortune",
			"Jinx"
		};

		vector<string> randomCharacters;

		for (int i = 0; i < 4; i++)
		{
			const int character = RandomInt(0, 24);
			randomCharacters.push_back(GAME_CHARACTERS[character]);
		}

		return randomCharacters;
	}

	static string GetUpDown(char letters[])
	{
		string result;

		for (int i = 0; i < 5; i++)
		{
			result += (i % 2 == 0) ? letters[i] : letters[i] + 32;

			if (i != 4)
			{
				result += ", ";
			}
		}

		return result;
	}

	static vector<vector<int>> GetTv(const vector<vector<int>>& collection)
	{
		vector<vector<int>> tv;

		if (!collection.empty())
		{
			const size_t r = collection.size();
			const size_t c = collection[0].size();

			tv.resize(c, vector<int>(r));

			for (int i = 0; i < r; i++)
			{
				for (int j = 0; j < c; j++)
				{
					tv[j][i] = collection[i][j];
				}
			}
		}

		return tv;
	}

	static void WriteYellow(const string& text)
	{
		const HANDLE consoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
		constexpr WORD foregroundYellow = FOREGROUND_RED | FOREGROUND_GREEN;
		constexpr WORD foregroundWhite = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY;
		constexpr WORD consoleReset = 0 | foregroundWhite;

		SetConsoleTextAttribute(consoleColor, foregroundYellow);
		cout << text;
		SetConsoleTextAttribute(consoleColor, consoleReset);
	}

	static void DisplayPassFail(bool pass)
	{
		const HANDLE consoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
		constexpr WORD foregroundWhite = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY;
		constexpr WORD consoleReset = 0 | foregroundWhite;

		std::cout << '[';

		if (pass)
		{
			SetConsoleTextAttribute(consoleColor, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			std::cout << "Pass";
		}
		else
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			std::cout << "Fail";
		}
		SetConsoleTextAttribute(consoleColor, consoleReset);

		std::cout << "]";

	}

	/**
	 * \brief Returns a collection of 5 string vectors containing 4 random names.
	 * There is a 2 in 5 chance that each collection may contain a duplicate name.
	 * \return
	 */
	static vector<vector<string>> GenerateDuplicates()
	{
		vector<vector<string>> vectors;

		for (int i = 0; i < 5; i++)
		{
			vector<string> names = RandomCharacters();
			const int randomizer = RandomInt(1, 5);

			if (randomizer % 2 == 0)
			{
				const int randomItemPosition = RandomInt(0, 3);
				const string randomName = names.at(randomItemPosition);

				bool success = false;

				do
				{
					const int dupePosition = RandomInt(0, 3);

					if (randomItemPosition != dupePosition)
					{
						names.at(dupePosition) = randomName;
						success = true;
					}
				} while (!success);
			}

			vectors.push_back(names);
		}

		return vectors;
	}
};