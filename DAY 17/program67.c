#include <stdio.h>
int main()
{
    int n;
    printf("enter size of first array:");
    scanf("%d", &n);
    int a[n];
    printf("enter first array element:\n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("element of first array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    int x;
    printf("enter size of second array: ");
    scanf("%d", &x);
    int b[x];
    printf("enter second array element:\n");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("element of second arrray is:\n");
    for (int i = 0; i < x; i++)
    {
        printf("%d\t", b[i]);
    }
    printf("\n");
    printf("intersection of element is :\n");
    for (int i = 0; i < n; i++)
    {
        int found = 0;
        for (int j = 0; j < x; j++)
        {
            if (a[i] == b[j] && !found)
            {
                printf("%d\t", a[i]);
                found = 1;
                break;
            }
        }
    }

    return 0;
}