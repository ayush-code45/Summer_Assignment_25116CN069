#include <stdio.h>
int reverse(int n, int rev)
{
    if (n == 0)
    {
        return rev;
    }
    else
    {
        return reverse(n / 10, rev * 10 + n % 10);
    }
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("reverse of number %d = %d", n, reverse(n, 0));
}