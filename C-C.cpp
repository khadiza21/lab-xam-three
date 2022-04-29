#include <bits/stdc++.h>
using namespace std;
int main()
{
    int leavingTime, enteringTime, checkingTime, p, count = 0;
    cin >> leavingTime >> enteringTime >> checkingTime;
    if (leavingTime < enteringTime)
    {
        p = leavingTime - 1;
        for (int i = 0; i < 24; i++)
        {

            if (checkingTime == p)
            {
                count++;
            }
            p++;
            if (p > enteringTime)
            {

                break;
            }
        }
    }
    else if (leavingTime > enteringTime)
    {
        int x = leavingTime - 1;
        for (int i = 0; i < 24; i++)
        {

            if (checkingTime == x)
            {
                count++;
            }
            x++;
            if (x == enteringTime)
            {

                break;
            }

            if (x > 23)
            {
                x = 0;
            }
        }
    }

    if (count > 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}