#include <bits/stdc++.h>

using namespace std;
int main()
{
    int number;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        if (i % 2)
            cout << "I hate ";
        else
            cout << "I love ";
        if (i == number)
            cout << "it";
        else
            cout << "that ";
    }
    cout << endl;

    return 0;
}