#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int x;
	    cin >> x;
	    if(x <= 100)
	    {
	        cout << x << endl;
	    }
	    else if(x > 100 && x <= 1000)
	    {
	        cout << x - 25 << endl;
	    }
	    else if(x > 1000 && x <= 5000)
	    {
	        cout << x - 100 << endl;
	    }
	    else
	    {
	        cout << x - 500 << endl;
	    }
	}

}
/*
Sale Season
It's the sale season again and Chef bought items worth a total of X rupees. The sale season offer is as follows:
• if X ≤ 100, no discount.
• if 100 < X ≤ 1000, discount is 25 rupees.
• if 1000 < X ≤ 5000, discount is 100 rupees.
• if X > 5000, discount is 500 rupees.
Find the final amount Chef needs to pay for his shopping.
Input Format
• The first line of input will contain a single integer T, denoting the number of test cases.
• Each test case consists of single line of input containing an integer X.
Output Format
For each test case, output on a new line the final amount Chef needs to pay for his shopping.
*/
