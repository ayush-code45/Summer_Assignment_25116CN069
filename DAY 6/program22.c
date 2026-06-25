#include <stdio.h>
#include <math.h>
int main()
{
    int i, x, remainder, decimal, binary, n = 0, sum = 0, temp;
    printf("enter a binary number:");
    scanf("%d", &binary);
    temp = binary;

    while (temp != 0)
    {
        temp = temp / 10;
        n++;
    }

    for (i = 0; i < n; i++)
    {
        x = pow(2, i);
        remainder = binary % 10;
        decimal = remainder * x;
        sum = sum + decimal;
        binary = binary / 10;
    }
    printf("%d ", sum);
    return 0;
}