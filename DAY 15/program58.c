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
    int temp = a[0];
    printf("rotating array left by one place:\n ");
    for (int i = 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    a[n - 1] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}