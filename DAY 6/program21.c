#include <stdio.h>
int main()
{
    int n, remainder, i, a[100], j;
    printf("enter a number: ");
    scanf("%d", &n);
    i = 0;
    while (n)
    {
        remainder = n % 2;
        n = n / 2;
        a[i] = remainder;
        i++;
    }
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d ", a[j]);
    }
    return 0;
}