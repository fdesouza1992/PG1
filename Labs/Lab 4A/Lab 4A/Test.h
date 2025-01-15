#pragma once
#include <vector>

using namespace std;

class Test
{
	// struct Triangle;

	static vector<bool> RandomBools();
	static vector<double> RandomDbls();
	static vector<double> RandomBigDbls();
	static vector<int> RandomInts(int low = 0, int high = 10);
	static int RandomInt(int low = 0, int high = 10);
	static vector<int> RandomSmallInts();
	static vector<int> MoreRandomSmallInts();
	static vector<int> GenerateTriangle();

public:
	static void Run();
	static double Check1();
	static double Check2();
	static double Check3();
	static double Check4();
	static double Check5();
	static double Check6();
	static double Check7();
	static double Check8();
};

