#include <bits/stdc++.h>

using namespace std;
int main()
{

    int samantaMarks, needMarks;
    cin >> samantaMarks;

    if (samantaMarks >= 0 && 40 > samantaMarks)
    {
        needMarks = 40 - samantaMarks;
        cout << needMarks << endl;
    }
    else if (samantaMarks >= 40 && 70 > samantaMarks)
    {
        needMarks = 70 - samantaMarks;
        cout << needMarks << endl;
    }
    else if (samantaMarks >= 70 && 90 > samantaMarks)
    {
        needMarks = 90 - samantaMarks;
        cout << needMarks << endl;
    }
    else if (samantaMarks >= 90 && 100 >= samantaMarks)
    {
        cout << "Expert" << endl;
    }

    return 0;
}