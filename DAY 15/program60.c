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
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }
    int tempa[n];
    for (int i = j + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            tempa[n] = a[i];
            a[i] = a[j];
            a[j] = tempa[n];
            j++;
        }
    }
    printf("element moves from zero to end:\n ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}