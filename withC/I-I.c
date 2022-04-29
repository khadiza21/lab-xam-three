#include <stdio.h>
int main()
{

    int samantaMarks, needMarks;
    scanf("%d", &samantaMarks);

    if (samantaMarks >= 0 && 40 > samantaMarks)
    {
        needMarks = 40 - samantaMarks;
        printf("%d\n", needMarks);
    }
    else if (samantaMarks >= 40 && 70 > samantaMarks)
    {
        needMarks = 70 - samantaMarks;
        printf("%d\n", needMarks);
    }
    else if (samantaMarks >= 70 && 90 > samantaMarks)
    {
        needMarks = 90 - samantaMarks;
        printf("%d\n", needMarks);
        }
    else if (samantaMarks >= 90 && 100 >= samantaMarks)
    {

        printf("expert\n");
    }

    return 0;
}