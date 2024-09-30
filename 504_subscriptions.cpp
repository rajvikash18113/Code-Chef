/*
    A group of N friends wants to buy TV subscription. We know that
    6 people can share one TV subscription. Also, the cost of 1 TV
    subscription is X rupees.. Determine the minimum total cost that
    the group of N friends will incur so that everyone in the group
    is able to use TV.

*/

#include <iostream>
using namespace std;

int main()
{
    int t, n, x;
    cin >> t;

    while (t--)
    {
        cin >> n >> x;
        // this loop will return the number of subscription needed if the number of people is in multiple of 6
        if (n % 6 == 0)
        {
            int subs = n / 6; // after dividing by 6 we'll get the required number of subscription
            cout << subs * x << endl;
        }
        // when the number of people is not in multiple of 6 then this loop will run
        else if (n % 6 != 0)
        {
            int subs = n / 6; // divide the total people by 6
            subs += 1;        // add 1 in remainder after dividing the total number by 6 - we'll get the required subscription
            cout << subs * x << endl;
        }
    }
}