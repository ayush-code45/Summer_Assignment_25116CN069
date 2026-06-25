#include <stdio.h>
int main()
{
     int n;
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

    int largest = a[0];
    int secondlargest;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            secondlargest = largest;
            largest = a[i];
        }
        else if (a[i] > secondlargest && a[i] != largest)
        {
            secondlargest = a[i];
        }
    }

    printf("second largest = %d\n", secondlargest);
    return 0;
}