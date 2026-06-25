#include <stdio.h>
#include <math.h>

int armstrong(int);

int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    if (armstrong(n))
    {
        printf("%d is armstrong", n);
    }
    else
    {
        printf("%d is not armstrong", n);
    }
    return 0;
}
int armstrong(int n)
{
    int count = 0, temp = n;

    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }
    temp = n;
    int d, sum = 0;
    while (temp > 0)
    {
        d = temp % 10;
        sum = sum + pow(d, count);
        temp = temp / 10;
    }
    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
