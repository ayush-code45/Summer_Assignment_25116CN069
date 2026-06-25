#include <stdio.h>
int main()
{
    int n;
    printf("enter number of list in array: ");
    scanf("%d", &n);
    int a[n];
    printf("enter list of element:\n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("element of array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    int counteven = 0, countodd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            counteven++;
        }
        else
        {
            countodd++;
        }
    }
    printf("even count = %d\n", counteven);
    printf("odd count = %d\n ", countodd);
    return 0;
}