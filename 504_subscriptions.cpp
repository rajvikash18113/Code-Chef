/*
    A group of N friends wants to buy TV subscription. We know that 
    6 people can share one TV subscription. Also, the cost of 1 TV
    subscription is X rupees.. Determine the minimum total cost that
    the group of N friends will incur so that everyone in the group
    is able to use TV.

*/

#include<iostream>
using namespace std;

int main()
{
    int t,n,x;
    cin >> t;

    while(t--)
    {
        cin >> n >> x;
        if(n % 6 == 0)
        {
            int subs = n / 6;
            cout << subs * x << endl;
        }
        else if (n % 6 != 0)
        {
            int subs = n / 6 ;
            subs += 1;
            cout << subs * x << endl;
        }
        
        
    }
}