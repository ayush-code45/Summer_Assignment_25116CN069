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
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf(" array in descending order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}