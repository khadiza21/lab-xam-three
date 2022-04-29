#include <stdio.h>
int main()
{
    int totalPersons, totalGifts, startingPerson, q, p;
    scanf("%d %d %d ", &totalPersons, &totalGifts, &startingPerson);
    // q = startingPerson;
    p = startingPerson - 1;
    for (int i = 1; i <= totalGifts; i++)
    {
        p++;
        if (p > totalPersons)
        {
            p = 1;
        }
    }
    printf("%d\n", p);

    return 0;
}
