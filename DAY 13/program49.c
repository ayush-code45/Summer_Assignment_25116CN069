#include <stdio.h>
int main()
{
    int n;
    printf("enter number of list in array: ");
    scanf("%d", &n);
    int a[n];
    printf("enter list of element in array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array element is:\n ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t ", a[i]);
    }
    printf("\n");
    return 0;
}