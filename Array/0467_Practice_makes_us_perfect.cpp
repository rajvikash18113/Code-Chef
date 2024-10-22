// https://www.codechef.com/problems/PRACTICEPERF

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int arr[4];
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < 4; j++)
    {
        if (arr[j] >= 10)
        {
            count++;
        }
    }
    cout << count << endl;
}


