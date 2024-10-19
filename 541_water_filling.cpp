#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;
        if ((b1+b2+b3) <= 1)
        {
            cout << "Water filling time" << endl;
        }
        else
        {
            cout << "Not now" << endl;
        }
        
    }
}

/*
Water Filling
Chef has three water bottles. At any point, if at least two of them are empty, she will fill them up. But if at most
one bottle is empty, she will wait, and not fill them up now.
You are given three integers - B1, B2, and B3-
If By = 1, it means that the first bottle is full.
If B1 = 0, it means that the first bottle is empty.
Similarly, B2 denotes whether the second bottle is full or empty, and By denotes it for the third bottle.
Output "Water filling time", if Chef has to fill the bottles now. If not, output "Not now".
Input Format
• The first line of input will contain a single integer T, denoting the number of test cases.
• The only line of each test case contains three space-separated integers, Bj, B2, Вз-
Output Format
For each test case, output on a new line, either "Water filling time", or "Not now".
*/
