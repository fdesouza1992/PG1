
/* ================================================================================
 *
 * DO NOT ALTER ANYTHING BENEATH THIS LINE.
 *
 * DOING SO MAY CAUSE ISSUES WITHIN YOUR CODE.
 *
 * IF YOU ARE EXPERIENCING ERRORS IN THIS CLASS,
 * AND YOU HAVE NOT ALTERED THIS CLASS, THE ISSUES
 * EXIST WITHIN YOUR CODE. NOT HERE.
 *
 *                             ▒▒████
 *                             ████████
 *                           ██████████
 *                           ████▒▒██████
 *                         ██████    ████▒▒
 *                         ████      ▒▒████
 *                       ██████        ██████
 *                     ▒▒████    ████    ████
 *                     ████▒▒  ████████  ██████
 *                   ██████    ████████    ████
 *                   ████░░    ████████    ██████
 *                 ██████      ████████      ████▒▒
 *               ░░████        ████████      ▒▒████
 *               ██████        ████████        ██████
 *             ▒▒████          ████████          ████
 *             ████▒▒          ██████▒▒          ██████
 *           ██████              ████              ████
 *           ████                ████              ██████
 *         ██████                ████                ████▒▒
 *       ░░████                                      ▒▒████
 *       ████▓▓                                        ██████
 *     ▒▒████                    ████                    ████
 *     ████▒▒                  ████████                  ██████
 *   ██████                      ▒▒▒▒                      ████░░
 *   ████                                                  ▒▒████
 * ██████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒██████
 * ████████████████████████████████████████████████████████████████
 * ▓▓████████████████████████████████████████████████████████████▓▓
 *
 *
 */



#include <iostream>
#include <random>
#include <string>
#include "LabTestUtils.h"
#include "UI.h"
#include "Submission.cpp"

#pragma warning(disable:4244)


using namespace std;


class Test
{
public:
    static int Check1() {
        const vector<int> numbers = RandomInts();
        vector<string> inputs;
        vector<string> expected;
        vector<string> submitted;

        for (const int number : numbers)
        {
            inputs.push_back(to_string(number));
            expected.push_back(to_string(number * 365));
            submitted.push_back(to_string(Submission::Test1(number)));
        }

        return LabTestUtils::Tester(1, 2, inputs, expected, submitted, 0);
    }

    static int Check2() {
        const vector<double> numbers1 = RandomDbls();
        const vector<double> numbers2 = RandomDbls();
        vector<string> inputs;
        vector<string> expected;
        vector<string> submitted;

        for (int i = 0; i < numbers1.size(); i++) {
            inputs.push_back(to_string(numbers1.at(i)) + ", " + to_string(numbers2.at(i)));
            expected.push_back(to_string(numbers1.at(i) / numbers2.at(i)));
            submitted.push_back(to_string(Submission::Test2(numbers1.at(i), numbers2.at(i))));
        }

        return LabTestUtils::Tester(2, 2, inputs, expected, submitted, 0);
    }

    static int Check3() {
        const vector<int> numbers1 = RandomInts();
        const vector<int> numbers2 = RandomInts();
        vector<string> inputs;
        vector<string> expected;
        vector<string> submitted;

        for (int i = 0; i < numbers1.size(); i++) {
            inputs.push_back(to_string(numbers1.at(i)) + ", " + to_string(numbers2.at(i)));
            expected.push_back(to_string(numbers1.at(i) % numbers2.at(i)));
            submitted.push_back(to_string(Submission::Test3(numbers1.at(i), numbers2.at(i))));
        }

        return LabTestUtils::Tester(3, 2, inputs, expected, submitted, 0);
    }

    static int Check4() {
        const vector<double> numbers = RandomDbls();
        vector<string> inputs;
        vector<string> expected;
        vector<string> submitted;

        for (const double number : numbers)
        {
            inputs.push_back(to_string(number));
            expected.push_back(to_string(sqrt(number)));
            submitted.push_back(to_string(Submission::Test4(number)));
        }

        return LabTestUtils::Tester(4, 2, inputs, expected, submitted, 0);
    }

    static int Check5() {
        const vector<int> numbers1 = RandomInts();
        const vector<int> numbers2 = RandomInts();
        vector<string> inputs;
        vector<string> expected;
        vector<string> submitted;

        for (int i = 0; i < numbers1.size(); i++) {
            inputs.push_back(to_string(numbers1.at(i)) + ", " + to_string(numbers2.at(i)));
            expected.push_back(to_string(pow(numbers1.at(i), numbers2.at(i))));
            submitted.push_back(to_string(Submission::Test5(numbers1.at(i), numbers2.at(i))));
        }

        return LabTestUtils::Tester(5, 2, inputs, expected, submitted, 0);
    }

    static void Run() {
        double p = 0;
        p += Check1();
        p += Check2();
        p += Check3();
        p += Check4();
        p += Check5();
	#if defined(TEST6)
        p += Check6();
	#endif

	#if defined(TEST7)
        p += Check7();
	#endif

	#if defined(TEST8)
        p += Check8();
	#endif

	#if defined(TEST9)
        p += Check9();
	#endif

	#if defined(TEST10)
        p += Check10();
	#endif

        LabTestUtils::AppendDoubleWithTimestampToFile(p);
        UI::DisplayScore(p, 20.0, true);

	}

#if defined(TEST6)
    static int Check6() {
        vector<vector<string>> phrases = RandomWords();
        vector<string> inputs;
        vector<string> expected;
        vector<string> submitted;

        for (int i = 0; i < phrases.size(); i++) {
            inputs.push_back(phrases.at(i).at(0) + " " + phrases.at(i).at(1) + " " + phrases.at(i).at(2));
            expected.push_back(phrases.at(i).at(0) + " " + phrases.at(i).at(1) + " " + phrases.at(i).at(2) + "?");
            submitted.push_back(Submission::Test6(phrases.at(i).at(0), phrases.at(i).at(1), phrases.at(i).at(2)));
        }

        return LabTestUtils::Tester(6, 2, inputs, expected, submitted, 0);
    }
#endif

#if defined(TEST7)
    static int Check7() {
        vector<double> numbers = RandomDbls();
        vector<string> inputs;
        vector<string> expected;
        vector<string> submitted;

        for (int i = 0; i < numbers.size(); i++) {

            inputs.push_back(to_string(numbers.at(i)));
            expected.push_back(to_string((float)numbers.at(i)));
            submitted.push_back(to_string(Submission::Test7(numbers.at(i))));
        }

        return LabTestUtils::Tester(7, 2, inputs, expected, submitted, 0);
    }
#endif

#if defined(TEST8)
    static int Check8() {
        const vector<double> numbers1 = RandomDbls();
        const vector<double> numbers2 = RandomDbls();
        const vector<double> numbers3 = RandomDbls();

        vector<string> inputs;
        vector<string> expected;
        vector<string> submitted;

        for (int i = 0; i < numbers1.size(); i++) {
            inputs.push_back(to_string(numbers1.at(i)) + ", " + to_string(numbers2.at(i)) + ", " + to_string(numbers3.at(i)));
            expected.push_back(to_string((numbers1.at(i) + numbers2.at(i) + numbers3.at(i)) / 3));
            submitted.push_back(to_string(Submission::Test8(numbers1.at(i), numbers2.at(i), numbers3.at(i))));
        }

        return LabTestUtils::Tester(8, 2, inputs, expected, submitted, 0);
    }
#endif


#if defined(TEST9)
    static int Check9() {
        vector<double> numbers1 = RandomDbls();
        vector<double> numbers2 = RandomDbls();
        vector<string> inputs;
        vector<string> expected;
        vector<string> submitted;

        for (int i = 0; i < numbers1.size(); i++) {
            inputs.push_back(to_string(numbers1.at(i)) + ", " + to_string(numbers2.at(i)));
            expected.push_back(to_string(0.5 * numbers1.at(i) * numbers2.at(i)));
            submitted.push_back(to_string(Submission::Test9(numbers1.at(i), numbers2.at(i))));
        }

        return LabTestUtils::Tester(9, 2, inputs, expected, submitted, 0);
    }
#endif

#if defined(TEST10)
    static int Check10() {
        vector<double> numbers1 = RandomDbls();
        vector<double> numbers2 = RandomDbls();
        vector<double> numbers3 = RandomDbls();
        vector<string> inputs;
        vector<string> expected;
        vector<string> submitted;

        for (int i = 0; i < numbers1.size(); i++) {
            inputs.push_back(to_string(numbers1.at(i)) + ", " + to_string(numbers2.at(i)) + ", " + to_string(numbers3.at(i)));
            expected.push_back(to_string(numbers1.at(i) / numbers2.at(i) / numbers3.at(i)));
            submitted.push_back(to_string(Submission::Test2(numbers1.at(i), numbers2.at(i), numbers3.at(i))));
        }

        return LabTestUtils::Tester(10, 2, inputs, expected, submitted, 0);
    }
#endif

    static vector<int> RandomInts(int low = 1, int high = 10)
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

    static vector<double> RandomDbls()
    {
        vector<double> numbers(5);

        random_device randomDevice;
        mt19937 gen(randomDevice());
        uniform_real_distribution<double> unif(1, 10);

        for (double& number : numbers)
        {
            double random_double = unif(gen);

            number = random_double;
        }

        return numbers;
    }


    static vector<vector<string>> RandomWords()
    {
        vector<vector<string>> phrases;
        const vector<string> starters = { "Welcome,", "Greetings,", "Hello,", "Hey,", "Hiya," };
        const vector<string> bodies = { "how are you,", "how ya' doin'", "how's it goin',", "how's is hangin',", "sup," };
        const vector<string> ends = { "bud", "mac", "man", "buddy", "bruh", "dude", "gamer", "gamerz", "ya'll", "yinz" };

        srand(time(0));
        for (int i = 0; i < 5; i++)
        {
            const int starter = rand() % 5;
            const int body = rand() % 5;
            const int end = rand() % 5;

            vector<string> phrase = { starters.at(starter), bodies.at(body), ends.at(end) };
            phrases.push_back(phrase);
        }

        return phrases;
    }

    static vector<string> RandomWord()
    {
        vector<string> randomWords;

        const vector<string> words = { "hello", "hey", "listen", "look", "watch out", "ha", "yah", "wahhhhhh" };

        srand(time(nullptr));
        for (int i = 0; i < 5; i++)
        {
            const int randomNum = rand() % words.size();
            randomWords.push_back(words[randomNum]);
        }

        return randomWords;
    }

};
