#include <stdio.h>
int main()
{

    int numOfRooms, peopleLive, peopleCapacity, countRoom = 0, availcapacity;
    scanf("%d", &numOfRooms);
    for (int i = 1; i <= numOfRooms; i++)
    {
        scanf("%d %d", &peopleLive, &peopleCapacity);
        availcapacity = peopleCapacity - peopleLive;
        if (availcapacity > 1)
        {
            countRoom++;
        }
    }

    printf("%d\n", countRoom);
    return 0;
}
