#include <stdio.h>
int main()
{

    int digitOne, digit1, digit2, digit3, digitTwo, digitThree, sum = 0;
    scanf("%d", &digitOne);
    digit3 = digitOne % 10;
    digit2 = (digitOne / 10) % 10;
    digit1 = (digitOne / 10) / 10;

    digitTwo = digit2 * 100 + digit3 * 10 + digit1 * 1;
    digitThree = digit3 * 100 + digit1 * 10 + digit2 * 1;

    sum = digitOne + digitTwo + digitThree;
    printf("%d\n", sum);

    return 0;
}