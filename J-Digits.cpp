#include <bits/stdc++.h>

using namespace std;
int main()
{

    int digitOne, digit1, digit2, digit3, digitTwo, digitThree;
    cin >> digitOne;
    digit3 = digitOne % 10;
    digit2 = (digitOne / 10) % 10;
    digit1 = (digitOne / 10) / 10;

    digitTwo = digit2 * 100 + digit3 * 10 + digit1 * 1;
    digitThree = digit3 * 100 + digit1 * 10 + digit2 * 1;

    cout << digitOne + digitTwo + digitThree << endl;

    return 0;
}