#include <random>
#include <string>
#include <vector>

#include "LabTestUtils.h"
#include "Source.cpp"
#include "Submission.cpp"
#include "UI.h"

class Test {
public:
	static double Check1() {
		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		const LabData data;

		for (int i = 0; i < data.start1s.size(); i++) {
			int out = 0;

			inputs.push_back(
				to_string(data.start1s.at(i)) + ", " +
				to_string(data.end1s.at(i)) + ", " +
				to_string(data.factor1s.at(i)
				));

			for (int counter = data.start1s.at(i); counter <= data.end1s.at(i); counter++) {
				if (counter % data.factor1s.at(i) == 0) { out++; }
			}

			expected.push_back(to_string(out));

			submitted.push_back(
				to_string(Submission::Test1(
					data.start1s.at(i),
					data.end1s.at(i),
					data.factor1s.at(i)
				))
			);
		}

		return LabTestUtils::Tester(1, 2.5, inputs, expected, submitted, 0);
	}

	static double Check2() {
		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		LabData data;

		for (int i = 0; i < data.start1s.size(); i++) {
			inputs.push_back(to_string(data.factorials.at(i)));
			expected.push_back(to_string(GeFa(data.factorials.at(i))));
			submitted.push_back(to_string(Submission::Test2(data.factorials.at(i))));
		}

		return LabTestUtils::Tester(2, 2.5, inputs, expected, submitted, 0);
	}

	static double Check3() {
		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		const LabData data;

		for (int i = 0; i < data.start1s.size(); i++) {
			inputs.push_back(to_string(data.roots.at(i)) + ", " + to_string(data.exponents.at(i)));
			expected.push_back(to_string((int)pow(data.roots.at(i), data.exponents.at(i))));
			submitted.push_back(to_string(Submission::Test3(data.roots.at(i), data.exponents.at(i))));
		}

		return LabTestUtils::Tester(3, 2.5, inputs, expected, submitted, 0);
	}

	static double Check4() {
		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		const vector<int> onHands = RandomInts(10, 30);
		const vector<int> consumes = RandomInts(1, 7);

		for (int i = 0; i < onHands.size(); i++) {
			inputs.push_back(to_string(onHands.at(i)) + ", " + to_string(consumes.at(i)));
			expected.push_back(to_string(CoEm(onHands.at(i), consumes.at(i))));
			submitted.push_back(to_string(Submission::Test4(onHands.at(i), consumes.at(i))));
		}

		return LabTestUtils::Tester(4, 2.5, inputs, expected, submitted, 0);
	}

	static double Check5() {
		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		const LabData data;

		for (int i = 0; i < data.start1s.size(); i++) {
			inputs.push_back(to_string(data.primes.at(i)));
			expected.push_back(BoolToString(C4P(data.primes.at(i))));
			submitted.push_back(BoolToString(Submission::Test5(data.primes.at(i))));
		}

		return LabTestUtils::Tester(5, 2.5, inputs, expected, submitted, 0);
	}

	static double Check6() {
		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		const LabData data;
		for (int i = 0; i < data.start1s.size(); i++) {
			string e, s;
			char ltr = data.letters.at(i);
			for (int cntr = 0; cntr < data.repeats.at(i); cntr++)
			{
				e += ltr;
				ltr = static_cast<char>(ltr + 1);
			}
			s.push_back(data.letters.at(i));
			inputs.push_back(s + ", " + to_string(data.repeats.at(i)));
			expected.push_back(e);
			submitted.push_back(Submission::Test6(data.letters.at(i), data.repeats.at(i)));
		}

		return LabTestUtils::Tester(6, 2.5, inputs, expected, submitted, 0);
	}

	static double Check7()
	{
		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;
		const LabData data;
		for (int i = 0; i < data.start1s.size(); i++) {

			string ex;
			inputs.push_back(to_string(data.factor2s.at(i)) + ", " + to_string(data.qty1s.at(i)));
			for (int j = 0; j < data.qty1s.at(i); j++)
			{
				ex += (std::to_string(data.factor2s.at(i) * (j + 1)) + " ");
			}
			expected.push_back(WrapString(ex));
			string result = Submission::Test7(data.factor2s.at(i), data.qty1s.at(i));
			// submitted.push_back(result.compare("null") == 0 ? "empty string" : WrapString(result));
			submitted.push_back(WrapString(Submission::Test7(data.factor2s.at(i), data.qty1s.at(i))));
		}

		return LabTestUtils::Tester(7, 2.5, inputs, expected, submitted, 0);

	}

	static void Run() {
		double pts = 0;

		pts += Check1();
		pts += Check2();
		pts += Check3();
		pts += Check4();
		pts += Check5();
		pts += Check6();
		pts += Check7();
		pts += Check8();

		LabTestUtils::AppendDoubleWithTimestampToFile(pts);

		UI::DisplayScore(pts, 100.00, true);
	}

	static double Check8() {
		vector<string> inputs;
		vector<string> expected;
		vector<string> submitted;

		const LabData data;

		for (int i = 0; i < data.start2s.size(); i++) {
			inputs.push_back(to_string(data.start2s.at(i)) + ", " + to_string(data.end2s.at(i)));

			int s = 0;
			for(int j = data.start2s.at(i); j <= data.end2s.at(i); j++)
			{
				s += j;
			}

			expected.push_back(to_string(s));
			submitted.push_back(to_string(Submission::Test8(data.start2s.at(i), data.end2s.at(i))));
		}

		return LabTestUtils::Tester(8, 2.5, inputs, expected, submitted, 0);
	}

private:
	static vector<int> RandomInts(int low, int high) {
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



	static string BoolToString(const bool b) {
		return (b) ? "true" : "false";
	}

	static int GeFa(const int x) {
		int v = x;
		for (int cntr = v - 1; cntr > 1; cntr--) { v *= cntr; }
		return v;
	}

	static int CoEm(int o, const int c) {
		int v = 0;
		while (o >= c)
		{
			o -= c;
			v++;
		}
		return v;
	}

	static bool C4P(const int v)
	{
		bool p = true;
		if (v < 2) p = false;
		else if (v % 2 == 0 && v > 2) { p = false; }
		else {
			for (int cntr = 3; cntr < v / 2; cntr += 2)
			{
				if (v % cntr == 0) {
					p = false;
					break;
				}
			}
		}

		return p;
	}

	static string WrapString(const string& input)
	{
		return "\"" + input + "\"";
	}
};
