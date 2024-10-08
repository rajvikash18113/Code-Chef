/*
    Kattapa, as you all know was one of the greatest warriors of his time. The kingdom of Maahishmati had never lost a battle
under him (as army-chief), and the reason for that was their really powerful army, also called as Mahasena.
Kattapa was known to be a very superstitious person. He believed that a soldier is "lucky" if the soldier is holding an even
number of weapons, and "unlucky" otherwise. He considered the army as "READY FOR BATTLE" if the count of "lucky" soldiers
is strictly greater than the count of "unlucky" soldiers, and "NOT READY" otherwise.

Given the number of weapons each soldier is holding, your task is to determine whether the army formed by all these soldiers
is "READY FOR BATTLE" or "NOT READY".

Note: You can find the definition of an even number here.

Input Format
The first line of input consists of a single integer N denoting the number of soldiers. The second line of input consists of N
space-separated integers A1, A2, ..., An, where A¡ denotes the number of weapons that the ith soldier is holding.
*/

#include <iostream>
using namespace std;

int main()
{
    int n_soldier;
    cin >> n_soldier;       // Number of Soldier
    int myArray[n_soldier]; // Array to Count the Number of Weapon to the Soldier
    int even_count = 0;  // count of Soldier who has even number of weapopn
    int odd_count = 0;   // Count of Soldier who has odd number of weapon

    // Reads Weapon Count for each Soldier
    for (int i = 0; i < n_soldier; i++)
    {
        cin >> myArray[i];
    }

    // Read Count of Even and Odd numbers of Weapon to the Soldier
    for (int i = 0; i < n_soldier; i++)
    {
        if (myArray[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    // Checks Soldiers are ready for Battle or Not
    if (even_count > odd_count)
    {
        cout << "READY FOR BATTLE";
    }
    else
    {
        cout << "NOT READY";
    }
    return 0;
}