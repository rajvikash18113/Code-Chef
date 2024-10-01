/*
    Janmansh and Assignments
Janmansh has to submit 3 assignments for Chingari before 10 pm and he starts to do the assignments at $X$ pm.
Each assignment takes him 1 hour to complete. Can you tell whether he'll be able to complete all assignments on time or not?

Input Format
- The first line will contain $T$ - the number of test cases. Then the test cases follow.
- The first and only line of each test case contains one integer $X$ - the time when Janmansh starts doing the assignments.

Output Format
For each test case, output Yes if he can complete the assignments on time. Otherwise, output No.
You may print each character of Yes and No in uppercase or lowercase (for example, yes, yEs, yEs, YES will be considered identical).

*/

#include <iostream>
using namespace std;

int main()
{
    int t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (x <= 7)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}