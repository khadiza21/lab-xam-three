#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rowNum, colNum, count = 1;
    cin >> rowNum >> colNum;
    for (int i = 1; i <= rowNum; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= colNum; j++)
            {

                cout << "#";
            }
            cout << endl;
        }
        else
        {
            if (count == 0)
            {
                cout << "#";
                count++;
                for (int j = 1; j <= colNum - 1; j++)
                {
                    cout << ".";
                }
            }

            else if (count == 1)
            {
                for (int j = 1; j <= colNum - 1; j++)
                {
                    cout << ".";
                }
                cout << "#";
                count--;
            }

            cout << endl;
        }
    }

    return 0;
}