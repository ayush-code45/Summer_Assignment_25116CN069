#include <stdio.h>
int main()
{
    int n, i, prime = 1;
    printf("enter a number :");
    scanf("%d", &n);
    if (n <= 1)
    {
        prime = 0;
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    if (prime == 1)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
    return 0;
}