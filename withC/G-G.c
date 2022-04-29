#include <stdio.h>
int main()
{

    int number1, number2, count = 0;
    scanf("%d %d", &number1, &number2);
    for (int i = number1; i <= number2; i++)
    {
        count++;
    }
    printf("%d\n", count);

    return 0;
}