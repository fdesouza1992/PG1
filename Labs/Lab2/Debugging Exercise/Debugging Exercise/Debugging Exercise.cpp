#include "Support.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// There are two errors in the DisplayUserInfo method. The variables used in 
// the method do not match the parameters and/or local variables. Either 
// update the variables being used or update the definitions so the identifier
// names being used match the identifiers names defined. You do not need to 
// add any additional programming statements
static void DisplayUserInfo(string who, int age)
{
    cout << "Please provide a warm welcome to my next guest, ";
    cout << who + ", on the occasion of turning " << age << " years old!" << endl;
}


// there are 2 errors in the SayABCs method. One is an incorrect variable 
// name and the other is a 'punctuation' error. You do not need to add any 
// additional programming statements
static void SayABCs()
{
    for (int ndx = 97; ndx <= 122; ndx++)
    {
        if ((ndx + 3) % 10 == 0)
        {
            cout << "\n" << endl;
        }
        if (ndx == 97)
            cout << "\n" << static_cast<char>(ndx) << " " << endl;      // this line should have a breakpoint
        else
            cout << static_cast<char>(ndx) + " " << endl;
    }
    cout << "\n" << endl;
}

// there is one error in the Main method - it is a simple typo that needs to
// be corrected. You do not need to add any additional programming statements
int main()
{
	const vector<string> names = { "ybraD", "ecnerwaL", "haraS", "refinneJ", "yevaD", "atteirneH", "selrahC", "sicnarF", "yrograM",
                                  "wemelohtraB", "moT", "leahciM", "ymereJ", "ennA", "elleinaD", "mailliW", "suiriS", "enoimreH",
                                  "naitsabeS", "nosaJ", "adnamA", "ettedO", "pirT", "noiraM", "enerI", "auhsoJ", "ellehciM" };

    // Get a random age and name from the Support class
    int age = Support::GetAge(Support::RandomInt(Support::MIN, Support::MAX));
    string name = Support::GetName(names[Support::RandomInt(0, names.size())]);         // This line should have a breakpoint
			
    DisplayUserInfo(name, age);                                                          // This line should have a breakpoint
    SayABCs();

    cin.get();
}