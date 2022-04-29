#include <bits/stdc++.h>
using namespace std;
int main()
{

    int numOfRooms, peopleLive, peopleCapacity, countRoom = 0 ,availcapacity;
    cin >> numOfRooms;
    for (int i = 1; i <= numOfRooms; i++)
    {
        cin >> peopleLive >> peopleCapacity;
        availcapacity = peopleCapacity - peopleLive;
        if (availcapacity > 1)
        {
            countRoom++;
        }
    }
    cout << countRoom << endl;

    return 0;
}