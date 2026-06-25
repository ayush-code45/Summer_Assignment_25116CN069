#include <stdio.h>
int main()
{
    int n;
    printf("enter number of element: ");
    scanf("%d", &n);
    int a[n];
    printf("enter list of element:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("element of array are :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    int temp = a[n - 1];
    printf("rotating array right by one place:\n ");
    for (int i = n - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}