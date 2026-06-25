#include <stdio.h>

int sum(int , int);

int main()
{
    int a, b;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);

    printf("sum is = %d", sum(a, b));
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
