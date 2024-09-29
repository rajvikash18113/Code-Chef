/*
Input Format:
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of 3 integers A,B,C.

Output Format:
For each test case, output YES if average of A and B is strictly greater than C
NO otherwise.
*/

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        float A,B,C;
        cin >> A >> B >> C;
        float aver = (A+B) / 2;
        if(aver > C)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }


    }
}