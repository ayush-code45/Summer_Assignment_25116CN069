#include <stdio.h>
int main()
{
    int n;
    printf("enter number of element:");
    scanf("%d", &n);
    int a[n];
    printf("enter number of element to be sorted:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    printf("sorted array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}