#include <stdio.h>

int main()
{
    int n;
    printf("enter size of first array:");
    scanf("%d", &n);
    int a[n];
    printf("enter first array element:\n ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("element of first array is:\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");

    int x;
    printf("enter size of second array: ");
    scanf("%d", &x);
    int b[x];
    printf("enter second array element:\n");
    for (int i = 0; i < x; i++)
        scanf("%d", &b[i]);

    printf("element of second array is:\n");
    for (int i = 0; i < x; i++)
        printf("%d\t", b[i]);
    printf("\n");

    int lenA = n, lenB = x;
    int size[lenA + lenB];

    for (int i = 0; i < lenA; i++)
        size[i] = a[i];
    for (int i = 0; i < lenB; i++)
        size[lenA + i] = b[i];

    int total = lenA + lenB;

    for (int i = 0; i < total - 1; i++)
    {
        for (int j = 0; j < total - i - 1; j++)
        {
            if (size[j] > size[j + 1])
            {
                int temp = size[j];
                size[j] = size[j + 1];
                size[j + 1] = temp;
            }
        }
    }
    printf("Union of arrays:\n");
    for (int i = 0; i < total; i++)
    {
        if (i == 0 || size[i] != size[i - 1])
        {
            printf("%d\t", size[i]);
        }
    }
    printf("\n");

    return 0;
}