#include <stdio.h>
int main()
{
    int n, target;
    printf("enter the number of element: ");
    scanf("%d", &n);
    int a[n];
    printf("the list of element in array:\n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("element of array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    printf("enter the target to be search: ");
    scanf("%d", &target);
    int key = -1;

    for (int i = 0; i < n; i++)
    {
        if (target == a[i])
        {
            key = i;
            break;
        }
    }
    if ( key != -1 ){
    printf("target found at index = %d\n", key);
    }
    else {
        printf("target not found\n");
    }
    return 0;
}