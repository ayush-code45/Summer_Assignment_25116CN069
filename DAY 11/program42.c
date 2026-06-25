#include <stdio.h>

int max(int , int);

int main()
{
    int a, b, big;
    printf("enter first num: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    big = max(a, b);
    printf("max = %d ", big);
    return 0;
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}