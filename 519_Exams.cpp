/*
    In Chefland, there are X schools, and each school has Y students.
The year end results are in and a total of Z students passed the exams.
Assuming that all students appeared for the exams, find whether the number of students who passed in Chefland was strictly
greater than 50%.
Input Format
- The first line of input will contain a single integer *T*, denoting the number of test cases.
- Each test case consists of three space-separated integers X, Y, and Z, as mentioned in the statement.
Output Format
For each test case, output on a new line, YES, if the total number of students who passed in Chefland was strictly greater than
50%, otherwise print No.

*/

#include <iostream>
using namespace std;
int main()
{
    int t, x, y, z;
    cin >> t;

    // t is for number of test cases
    while (t--)
    {
        cin >> x;        // number of schools
        cin >> y;        // number of students
        cin >> z;        // passed students
        int stu = x * y; // total number of students (number of schools * number of students)

        // Checks passed students is greater than 50% or not
        if (z > (stu / 2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}