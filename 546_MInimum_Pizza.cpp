#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int s = n * x;
        if (s % 4 == 0)
        {
            cout << s / 4 << endl;
        }
        else
        {
            cout << (s / 4) + 1 << endl;
        }
    }
}
/*
Minimum Pizzas
Each pizza consists of 4 slices. There are N friends and each friend needs exactly X slices.
Find the minimum number of pizzas they should order to satisfy their appetite.
Input Format
• The first line of input will contain a single integer 1, denoting the number of test cases.
• Each test case consists of two integers N and X, the number of friends and the number of slices each friend
wants respectively.
Output Format
For each test case, output the minimum number of pizzas required.
*/