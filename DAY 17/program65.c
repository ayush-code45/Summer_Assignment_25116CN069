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
    int lenA, lenB;
    lenA = n;
    lenB = x;
    int size[lenA + lenB];
    for (int i = 0; i < lenA; i++)
    {
        size[i] = a[i];
    }
    for (int i = 0; i < lenB; i++)
    {
        size[lenA + i] = b[i];
    }
    for (int i = 0; i < lenA + lenB; i++)
    {
        printf("%d\t", size[i]);
    }
    return 0;
}