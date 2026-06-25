#include <stdio.h>

int perfect(int);

int main()
{
    int n;
    printf("enter positive number: ");
    scanf("%d", &n);
    if (perfect(n))
    {
        printf("%d is perfect number.", n);
    }
    else
    {
        printf("%d is not perfect number. ", n);
    }
    return 0;
}

int perfect(int n)
{
    int temp, sum = 0;
    temp = n;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
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