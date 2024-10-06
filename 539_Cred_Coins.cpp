/*
For each bill you pay using CRED, you earn X CRED coins.
At CodeChef store, each bag is worth 100 CRED coins.
Chef pays Y number of bills using CRED. Find the maximum number of bags he can get from the CodeChef store.

Input Format
• First line will contain *T*, number of test cases. Then the test cases follow.
• Each test case contains of a single line of input, two integers X and Y.

Output Format
For each test case, output in a single line - the maximum number of bags Chef can get from the CodeChef store.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int t;
    cin >> t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;
        int t = x*y;
        int bag = t / 100;
        cout << bag << endl;
    }
}
