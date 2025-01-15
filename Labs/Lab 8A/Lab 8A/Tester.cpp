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


#include <random>
#include <string>
#include <vector>

#include "LabTestUtils.h"
#include "LabUI.h"
#include "Submission.cpp"

using namespace std;

class Test
{
	static constexpr int idNum = 1000000;   // represents an empty student.
    static constexpr int ndx = 0;

    static vector<string> firstNames;
    static vector<string> lastNames;

    static vector<int> GenerateIdNos()
    {
        vector<int> idNos;

        int lastNumber = 0;
        for(int i = 0; i < 15; i++)
        {
            lastNumber = RandomInt(lastNumber, lastNumber + 500);
            idNos.push_back(idNum + lastNumber);
        }

        return idNos;
    }

    static vector<Student> GenerateRandomVector(const vector<int>& idNos, bool allowNull = false)
    {
        const vector<string> firstNames = {
	        "Emma", "Liam", "Olivia", "Noah", "Ava", "Isabella", "Sophia", "Mia", "Jackson", "Aiden",
	        "Lucas", "Harper", "Elijah", "Abigail", "Emily", "Elizabeth", "Michael", "Alexander", "Benjamin",
	        "Evelyn", "James", "Daniel", "Henry", "William", "Amelia", "Evelyn", "Scarlett", "Madison", "Grace",
	        "Logan", "David", "Oliver", "John", "Victoria", "Zoe", "Natalie", "Isaac", "Samuel", "Sofia",
	        "Evelyn", "Brooklyn", "Samantha", "Dylan", "Grace", "Hannah", "Chloe", "Eva", "Anna", "Isabella",
	        "Ruby", "Leah", "Landon", "Christian", "Caleb", "Julian", "Victoria", "Stella", "Aurora", "Julia",
	        "Penelope", "Ellie", "Scarlett", "Savannah", "Leo", "Hunter", "Theodore", "Addison", "Aaron",
	        "Eliana", "Eli", "Zoe", "Hannah", "Nathan", "Gabriel", "Daniel", "Samuel", "Bella", "Joseph",
	        "Joshua", "Emily"
        };

	    const vector<string> lastNames = {
	        "Smith", "Johnson", "Williams", "Brown", "Jones", "Miller", "Davis", "Garcia", "Rodriguez", "Martinez",
	        "Hernandez", "Lopez", "Gonzalez", "Wilson", "Anderson", "Thomas", "Taylor", "Moore", "Jackson", "Martin",
	        "Lee", "Perez", "Thompson", "White", "Harris", "Sanchez", "Clark", "Lewis", "Robinson", "Walker", "Hall",
	        "Allen", "Young", "Hernandez", "King", "Wright", "Lopez", "Hill", "Scott", "Green", "Adams", "Baker",
	        "Gonzalez", "Nelson", "Carter", "Mitchell", "Perez", "Roberts", "Turner", "Phillips", "Campbell", "Parker",
	        "Evans", "Edwards", "Collins", "Stewart", "Sanchez", "Morris", "Rogers", "Reed", "Cook", "Morgan", "Bell",
	        "Murphy", "Bailey", "Rivera", "Cooper", "Cox", "Howard", "Ward", "Torres", "Peterson", "Gray", "Ramirez",
	        "James", "Watson", "Brooks", "Kelly", "Sanders", "Price"
        };

        vector<Student> students;

        const int randomSize = RandomInt(5, 16);

        for (int i = 0; i < randomSize; i++)
        {
            if (allowNull)
            {
                const int ifNull = RandomInt(0, idNum);

                if (ifNull % 7 == 0)
                {
                    Student student;

                    students.push_back(student);
                }
                else
                {
                    const int randomFirstNamePos = RandomInt(0, static_cast<int>(firstNames.size()) - 1);
                    const string& fName = firstNames.at(randomFirstNamePos);

                    const int randomLastNamePos = RandomInt(0, static_cast<int>(lastNames.size()) - 1);
                    const string& lName = lastNames.at(randomLastNamePos);

                    const int idNo = idNos.at(RandomInt(0, 14));

                    Student student;

                    student.SetFirstName(fName);
                	student.SetLastName(lName);
                	student.SetIDNumber(idNo);

                    students.push_back(student);

                    if (i < randomSize - 1)
                    {
                        const int doIt = RandomInt(0, 4);
                        if (doIt == 3)
                        {
                            students.push_back(student);
                            i++;
                        }
                    }
                }
            } else
            {
                const int randomFirstNamePos = RandomInt(0, static_cast<int>(firstNames.size()) - 1);
                const string& fName = firstNames.at(randomFirstNamePos);

                const int randomLastNamePos = RandomInt(0, static_cast<int>(lastNames.size()) - 1);
                const string& lName = lastNames.at(randomLastNamePos);

                const int idNo = idNos.at(RandomInt(0, 14));
                Student student = Student(fName, lName, idNo);
                students.push_back(student);
            }
   
        }

        return students;
    }

    static bool II(vector<Student>& s, const Student& e)
    {
        bool result = false;

        for(Student student : s)
        {
	        if(student.GetIDNumber() == 1000000)
	        {
                student = e;
                result = true;
                break;
	        }
        }

        return result;
    }

    static double Test1()
    {
	    const vector<int> idNos = GenerateIdNos();
    	vector<Student> students = GenerateRandomVector(idNos);

        vector<string> inputs;
        vector<string> expected;
        vector<string> submitted;

        for(int i = 0; i < 5; i++)
        {
	        const int randomStudentPos = RandomInt(0, static_cast<int>(students.size()) - 1);

            inputs.push_back(
                students.at(randomStudentPos).GetLastName() + ", " +
                students.at(randomStudentPos).GetFirstName() + ", " +
                to_string(students.at(randomStudentPos).GetIDNumber())
            );

            expected.push_back(
                DisplayStudent(
                    students.at(randomStudentPos).GetFirstName(),
                    students.at(randomStudentPos).GetLastName(),
                    students.at(randomStudentPos).GetIDNumber()
                )
            );

	        Student submittedStudent = Submission::Test1(
                students.at(randomStudentPos).GetLastName(),
                students.at(randomStudentPos).GetFirstName(),
                students.at(randomStudentPos).GetIDNumber()
            );

            submitted.push_back(DisplayStudent(submittedStudent));
        }

        return LabTestUtils::Tester(1, 4, inputs, expected, submitted, 0);
    }

    static double Test2()
    {
        const vector<int> idNos = GenerateIdNos();
        vector<Student> students = GenerateRandomVector(idNos);

        vector<string> inputs;
        vector<string> expected;
        vector<string> submitted;

        for (int i = 0; i < 5; i++)
        {
            const int randomStudentPos = RandomInt(0, static_cast<int>(students.size()) - 1);

            inputs.push_back(
                students.at(randomStudentPos).GetFirstName() + ", " +
                students.at(randomStudentPos).GetLastName() + ", " +
                to_string(students.at(randomStudentPos).GetIDNumber())
            );

            expected.push_back(
                DisplayStudent(
                    students.at(randomStudentPos).GetFirstName(),
                    students.at(randomStudentPos).GetLastName(),
                    students.at(randomStudentPos).GetIDNumber()
                )
            );

            Student submittedStudent = Submission::Test2();

            submittedStudent.SetLastName(students.at(randomStudentPos).GetLastName());
            submittedStudent.SetFirstName(students.at(randomStudentPos).GetFirstName());
            submittedStudent.SetIDNumber(students.at(randomStudentPos).GetIDNumber());

            submitted.push_back(DisplayStudent(submittedStudent));
        }

        return LabTestUtils::Tester(2, 4, inputs, expected, submitted, 0);
    }

    static double Test3()
    {
        vector<vector<Student>> studentCollections;
        vector<vector<Student>> insertCollections;

        for(int i = 0; i < 5; i++)
        {
            studentCollections.push_back(GenerateRandomVector(GenerateIdNos(), true));
            insertCollections.push_back(GenerateRandomVector(GenerateIdNos()));
        }

        vector<string> inputs;
        vector<string> expected;
        vector<string> submitted;

        for (int i = 0; i < 5; i++)
        {
	        const int randomStudent = RandomInt(0, static_cast<int>(insertCollections.size()) - 1);
            Student newStudent = insertCollections.at(i).at(randomStudent);
            string expectedResult = II(studentCollections.at(i), newStudent) ? " was added." : " was not added.";
            string receivedResult = Submission::Test3(studentCollections.at(i), newStudent) ? " was added." : " was not added.";

            inputs.push_back(newStudent.GetFirstName());
            expected.push_back(newStudent.GetFirstName() + " " + newStudent.GetLastName() + " " + expectedResult);
            submitted.push_back(newStudent.GetFirstName() + " " + newStudent.GetLastName() + " " + receivedResult);
        }

        return LabTestUtils::Tester(3, 4, inputs, expected, submitted, 0);
    }

    static Student GID(int num, vector<Student>& ss)
    {
        Student student;

        for (Student& s : ss)
        {
            if (s.GetIDNumber() == num)
            {
                student = s;
                break;
            }
        }

        return student;
    }

    static double Test4()
    {
        // Vector of random students that may contain null objects
        vector<Student> students = GenerateRandomVector(GenerateIdNos(), true);

        vector<string> inputs;
        vector<string> expected;
        vector<string> submitted;

        for (int i = 0; i < 5; i++)
        {
	        const int idNumber = GetRandomId(GenerateIdNos(), students);

            inputs.push_back(to_string(idNumber));
            expected.emplace_back(RID(idNumber, students) ? "Student was removed." : "Student was not found.");
            submitted.emplace_back(Submission::Test4(idNumber, students) ? "Student was removed." : "Student was not found.");
        }

        return LabTestUtils::Tester(4, 4, inputs, expected, submitted, 0);
    }

    static double Test5()
    {
        // Vector of random students that may contain null objects
        vector<Student> students = GenerateRandomVector(GenerateIdNos());

        vector<string> inputs;
        vector<string> expected;
        vector<string> submitted;

        for (int i = 0; i < 5; i++)
        {
	        const int idNumber = GetRandomId(GenerateIdNos(), students);
            Student expectedResult = GID(idNumber, students);

        	inputs.push_back(to_string(idNumber));
            expected.push_back(
				expectedResult.GetIDNumber() != 1000000 ? 
					DisplayStudent(expectedResult) :
					"Student not found."
            );

            Student submittedResult = Submission::Test5(idNumber, students);

            submitted.push_back(
                submittedResult.GetIDNumber() != 1000000 ?
	                DisplayStudent(submittedResult) :
	                "Student not found."
            );
        }

        return LabTestUtils::Tester(5, 4, inputs, expected, submitted, 0);
    }

    static int GetRandomId(const vector<int>& idNos, vector<Student>& students)
    {
        int id;

        const int randomizer = RandomInt(1, 5);

        if(randomizer % 2 == 0)
        {
	        const int randomValidId = RandomInt(0, static_cast<int>(students.size()) - 1);
            id = students.at(randomValidId).GetIDNumber();
        } else
        {
	        const int randomInvalidId = RandomInt(0, static_cast<int>(idNos.size()) - 1);
            id = idNos.at(randomInvalidId);
        }

        return id;
    }

    static bool RID(int num, vector<Student> ss)
    {
        bool r = false;

	    for(Student s : ss)
	    {
		    if(s.GetIDNumber() == num)
		    {
                s = Student();
                r = true;
                break;
		    }
	    }

        return r;
    }

    static int RandomInt(const int low, const int high)
    {
        random_device rd;			// Random device
        mt19937 gen(rd());			// Seed it

        // Set the range
        uniform_int_distribution<> dist(low, high);

        return dist(gen);
    }

    static string DisplayStudent(Student& student)
    {
        string result;

	    if(student.GetIDNumber() != 1000000)
	    {
            result += student.GetFirstName() + " ";
            result += student.GetLastName();
	    	result += " (" + to_string(student.GetIDNumber()) + ")";
	    } else
	    {
            result = "Null student";
	    }

        return result;
    }

    static string DisplayStudent(string firstName, string lastName, int idNo)
    {
        string result;

        if (idNo != 1000000)
        {
            result += firstName + " " + lastName + " (" + to_string(idNo) + ")";
        }
        else
        {
            result = "Null student";
        }

        return result;
    }

public:
	static void Run(){
        double labScore = 0;
        labScore += Test1();
        labScore += Test2();
        labScore += Test3();
        labScore += Test4();
        labScore += Test5();

        LabTestUtils::AppendDoubleWithTimestampToFile(labScore);

        UI::DisplayScore(static_cast<int>(labScore), 20, true);
	}
};