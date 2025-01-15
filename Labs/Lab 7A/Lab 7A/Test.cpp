#pragma region LAB_INCLUDES
#include <random>
#include <string>
#include <vector>
#include "LabTestUtils.h"
#include "LabUI.h"
#include "Submission.cpp"
#pragma endregion LAB_INCLUDES
#pragma warning(disable:4244)

using namespace std;

class Test {
public:


#ifdef SHAPE

	static double Test1() {
		const vector<int> numbers1 = RandomInts();
		const vector<int> numbers2 = RandomInts();
		const vector<int> numbers3 = RandomInts();

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (int i = 0; i < numbers1.size(); i++) {

			Circle circle = Submission::Test1(
				numbers1.at(i), numbers2.at(i), numbers3.at(i)
			);

			inputs.push_back(
				to_string(numbers1.at(i)) + ", " +
				to_string(numbers2.at(i)) + ", " +
				to_string(numbers3.at(i))
			);

			expected.push_back(
				to_string(numbers1.at(i)) + ", " +
				to_string(numbers2.at(i)) + ", " +
				to_string(numbers3.at(i))
			);

			submitted.push_back(
				to_string(circle.GetX()) + ", " +
				to_string(circle.GetY()) + ", " +
				to_string(circle.GetRadius())
			);
		}

		return LabTestUtils::Tester(1, 2.5, inputs, expected, submitted, 0);
	}

	static double Test2() {
		const vector<int> numbers1 = RandomInts();
		const vector<int> numbers2 = RandomInts();
		const vector<int> numbers3 = RandomInts();

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (int i = 0; i < numbers1.size(); i++) {

			Circle circle = Submission::Test2(
				numbers1.at(i), numbers2.at(i), numbers3.at(i)
			);

			inputs.push_back(
				to_string(numbers1.at(i)) + ", " +
				to_string(numbers2.at(i)) + ", " +
				to_string(numbers3.at(i))
			);

			expected.push_back(to_string(static_cast<float>(3.14 * pow(numbers3.at(i), 2))));
			submitted.push_back(to_string(circle.GetArea()));
		}

		return LabTestUtils::Tester(2, 2.5, inputs, expected, submitted, 0);
	}

	static double Test3() {
		const vector<int> numbers1 = RandomInts();
		const vector<int> numbers2 = RandomInts();
		const vector<int> numbers3 = RandomInts();


		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (int i = 0; i < numbers1.size(); i++) {

			Circle circle = Submission::Test3(
				numbers1.at(i), numbers2.at(i), numbers3.at(i)
			);

			inputs.push_back(
				to_string(numbers1.at(i)) + ", " +
				to_string(numbers2.at(i)) + ", " +
				to_string(numbers3.at(i))
			);

			expected.push_back(to_string(static_cast <float>(3.14 * numbers3.at(i) * 2)));
			submitted.push_back(to_string(circle.GetCircumference()));
		}

		return LabTestUtils::Tester(3, 2.5, inputs, expected, submitted, 0);
	}

	static double Test4()
	{
		const vector<int> numbers1 = RandomInts();
		const vector<int> numbers2 = RandomInts();
		const vector<int> numbers3 = RandomInts();

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (int i = 0; i < numbers1.size(); i++) {

			Circle circle = Submission::Test4(
				numbers1.at(i), numbers2.at(i), numbers3.at(i)
			);

			inputs.push_back(
				to_string(numbers1.at(i)) + ", " +
				to_string(numbers2.at(i)) + ", " +
				to_string(numbers3.at(i))
			);

			expected.push_back(to_string(numbers3.at(i) * 2));
			submitted.push_back(to_string(circle.GetDiameter()));
		}

		return LabTestUtils::Tester(4, 2.5, inputs, expected, submitted, 0);
	}

#endif

	static void Run() {
		double p = 0;

#ifdef SHAPE
		p += Test1();
		p += Test2();
		p += Test3();
		p += Test4();
#endif
#ifdef TEXT_CODEC
		p += Test5();
		p += Test6();
#endif
#ifdef BOOK
		p += Test7();
		p += Test8();
#endif

		LabTestUtils::AppendDoubleWithTimestampToFile(p);

		UI::DisplayScore(p, 100.0, true);
	}

#ifdef TEXT_CODEC
	static double Test5()
	{
		const vector<string> words = RandomStrings(vector<string> {
			"apple", "avocado", "banana", "cherry", "durian", "grape", "strawberry",
				"tomato", "dragon fruit", "peach", "plum", "pear", "papaya"
		});

		const vector<int> offsets = RandomInts(1, 26);

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (int i = 0; i < words.size(); i++) {

			string encoded = Submission::Test5(offsets.at(i), words.at(i));

			inputs.push_back(to_string(offsets.at(i)) + ", " + words.at(i));
			expected.push_back(Encode(words.at(i), offsets.at(i)));
			submitted.push_back(encoded);
		}

		return LabTestUtils::Tester(5, 2.5, inputs, expected, submitted, 0);
	}

	static double Test6()
	{
		const vector<string> words = RandomStrings(vector<string> {
			"apple", "avocado", "banana", "cherry", "durian", "grape", "strawberry",
				"tomato", "dragon fruit", "peach", "plum", "pear", "papaya"
		});

		const vector<int> offsets = RandomInts(1, 25);

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (int i = 0; i < words.size(); i++) {

			string encoded = Encode(words.at(i), offsets.at(i));

			inputs.push_back(to_string(offsets.at(i)) + ", " + encoded);
			expected.push_back(words.at(i));
			submitted.push_back(Submission::Test6(offsets.at(i), encoded));
		}

		return LabTestUtils::Tester(6, 2.5, inputs, expected, submitted, 0);
	}
#endif
#ifdef BOOK
	static double Test7()
	{
		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (int i = 0; i < 5; i++) {
			inputs.push_back("");
			expected.push_back("Moby-Dick, Herman Melville");

			Book book = Submission::Test7();
			submitted.push_back(book.GetTitle() + ", " + book.GetAuthor());
		}

		return LabTestUtils::Tester(7, 2.5, inputs, expected, submitted, 0);
	}

	static double Test8()
	{
		const vector<string> bookTitles = {
			"The Adventures of Sherlock Holmes", "The Count of Monte Cristo",
			"The Picture of Dorian Gray", "The War of the Worlds", "The Time Machine",
			"The Jungle Book", "The Wonderful Wizard of Oz", "The Call of the Wild",
			"The Scarlet Letter", "The Three Musketeers", "Treasure Island",
			"Wuthering Heights", "Jane Eyre", "Pride and Prejudice", "Sense and Sensibility"
		};

		const vector<string> bookAuthors = {
			"Arthur Conan Doyle", "Alexandre Dumas", "Oscar Wilde", "H.G. Wells",
			"H.G. Wells", "Rudyard Kipling", "L. Frank Baum", "Jack London",
			"Nathaniel Hawthorne", "Alexandre Dumas", "Robert Louis Stevenson",
			"Emily Bronte", "Charlotte Bronte", "Jane Austen", "Jane Austen"
		};

		const vector<int> numbers = RandomInts(0, 14);

		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		for (const int number : numbers)
		{
			inputs.push_back(bookTitles.at(number) + ", " + bookAuthors.at(number));
			expected.push_back(bookTitles.at(number) + ", " + bookAuthors.at(number));

			Book book = Submission::Test8(bookTitles.at(number), bookAuthors.at(number));

			submitted.push_back(book.GetTitle() + ", " + book.GetAuthor());
		}

		return LabTestUtils::Tester(8, 2.5, inputs, expected, submitted, 0);
	}
#endif

private: 
	static vector<int> RandomInts(const int low = 3, const int high = 10) {
		vector<int> numbers(5);	// Placeholder vector

		random_device rd;				// Random device
		mt19937 gen(rd());			// Seed it

		// Set the range
		uniform_int_distribution<> dist(low, high);

		for (int i = 0; i < numbers.size(); i++)
		{
			numbers[i] = dist(gen);
		}

		return numbers;
	}

	static vector<string> RandomStrings(const vector<string>& words)
	{
		vector<string> results;

		results.reserve(5);
		for(int i = 0; i < 5; i++)
		{
			results.push_back(words.at(RandomInt(0, static_cast<int>(words.size()) - 1)));
		}
		return results;
	}

	static int RandomInt(const int low, const int high)
	{
		random_device rd;				// Random device
		mt19937 gen(rd());			// Seed it

		// Set the range
		uniform_int_distribution<> dist(low, high);

		return dist(gen);
	}

	static string Encode(const string& message, const int offset)
	{
		string encoded = message;

		for (int i = 0; i < message.length(); i++)
		{
			encoded[i] = static_cast<char>(encoded[i] + offset);
		}

		return encoded;
	}

	static string Decode(const string& message, const int offset)
	{
		string decoded = message;

		for (int i = 0; i < message.length(); i++)
		{
			decoded[i] = static_cast<char>(decoded[i] - offset);
		}

		return decoded;
	}
};