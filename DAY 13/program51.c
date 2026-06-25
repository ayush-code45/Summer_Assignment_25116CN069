#include <stdio.h>
int main()
{
    int n;
    printf("enter number of list in array: ");
    scanf("%d", &n);
    int a[n];
    printf("enter list of element in array\n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array element is\n ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t ", a[i]);
    }
    printf("\n ");
    int largest = a[0];
    int smallest = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
            largest = a[i];

        if (a[i] < smallest)
            smallest = a[i];
    }
    printf("largest = %d\n ", largest);
    printf("smallest = %d\n ", smallest);
    return 0;
}