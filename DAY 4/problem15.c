#include <stdio.h>
#include <math.h>
int main()
{
    int n, d, result = 0, temp, count = 0;

    printf("enter a number to check ");
    scanf("%d", &n);

    temp = n;
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }

    temp = n;
    while (temp != 0)
    {
        d = temp % 10;
        result = result + (int)(pow(d, count) + 0.5);
        temp = temp / 10;
    }

    if (n == result)
    {
        printf("number is armstrong.");
    }
    
    else
    {
        printf("number is not armstrong.");
    }
    return 0;
}