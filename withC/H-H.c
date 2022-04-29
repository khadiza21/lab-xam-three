#include <stdio.h>
int main()
{

    int number;
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        if (i % 2)

            printf("I hate ");
        else
            printf("I love ");
        if (i == number)

            printf("it");
        else
            printf("that ");
    }

    printf("\n");

    return 0;
}