#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, x;

    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &x);
    int takahashi = 0, aoki = 0;
    for (int i = 0; i < x; i++)
    {
        if (i % (a + c) < a)
        {
            takahashi += b;
        }
        if (i % (d + f) < d)
        {
            aoki += e;
        }
    }

    if (takahashi > aoki)
    {

        printf("Takahashi");
    }
    else if (takahashi < aoki)
    {

        printf("Aoki");
    }
    else
    {

        printf("Draw");
    }

    return 0;
}