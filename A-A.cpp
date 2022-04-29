#include <bits/stdc++.h>
using namespace std;
int main()
{
    int totalPersons, totalGifts, startingPerson, q, p;
    cin >> totalPersons >> totalGifts >> startingPerson;
    q = startingPerson;
    // p = startingPerson - 1;
    for (int i = 1; i <= totalGifts; i++)
    {
        p++;
        if (p > totalPersons)
        {
            p = 1;
        }
    }
    cout << p << endl;
    return 0;
}