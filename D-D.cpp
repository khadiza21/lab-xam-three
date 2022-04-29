#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number, anton = 0, danik = 0;
    string word;
    cin >> number >> word;
    for (int i = 0; i <= number - 1; i++)
    {
        if (word[i] == 65)
        {
            anton++;
        }
        else if (word[i] == 68)
        {
            danik++;
        }
    }

    if (anton > danik)
    {
        cout << "Anton" << endl;
    }
    else if (anton < danik)
    {
        cout << "Danik" << endl;
    }
    if (anton == danik)
    {
        cout << "Friendship" << endl;
    }

    return 0;
}