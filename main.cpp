#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    string name;
    double grade;
    int credit;

    double totalPoints = 0;
    int totalCredits = 0;

    for(int i = 1; i <= n; i++)
    {
        cout << "\nCourse " << i << endl;

        cout << "Enter course name: ";
        cin >> name;

        cout << "Enter grade point: ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> credit;

        totalPoints = totalPoints + (grade * credit);
        totalCredits = totalCredits + credit;
    }

    double gpa = totalPoints / totalCredits;

    cout << "\nTotal Credit Hours = " << totalCredits << endl;
    cout << "GPA = " << gpa << endl;
    cout << "CGPA = " << gpa << endl;

    return 0;
}
