#include <stdio.h>
int main()
{

    int number, anton = 0, danik = 0;
    char word[100000];
    scanf("%d", &number);
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++)
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
        printf("Anton\n");
    }
    else if (anton < danik)
    {
        printf("Danik\n");
    }
    else if (anton == danik)
    {
        printf("Friendship\n");
    }

    return 0;
}