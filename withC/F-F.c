#include <stdio.h>
int main()
{
    int rowNum, colNum, count = 1;
    scanf("%d %d", &rowNum, &colNum);
    for (int i = 1; i <= rowNum; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= colNum; j++)
            {
                printf("#");
            }
            printf("\n");
        }
        else
        {
            if (count == 0)
            {

                printf("#");
                count++;
                for (int j = 1; j <= colNum - 1; j++)
                {

                    printf(".");
                }
            }

            else if (count == 1)
            {
                for (int j = 1; j <= colNum - 1; j++)
                {

                    printf(".");
                }

                printf("#");
                count--;
            }

            printf("\n");
        }
    }
    return 0;
}