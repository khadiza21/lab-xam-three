#include <bits/stdc++.h>

using namespace std;
int main()
{
    int number1, number2, count = 0;
    cin >> number1 >> number2;
    for (int i = number1; i <= number2; i++)
    {
        count++;
    }
    cout << count << endl;

    return 0;
}