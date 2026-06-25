#include <stdio.h>
int main()
{
    int n;
    printf("enter number of list in array: ");
    scanf("%d", &n);
    float a[n];
    printf("enter list of element in array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    printf("array element is:\n ");
    for (int i = 0; i < n; i++)
    {
        printf("%f\t ", a[i]);
    }
    printf("\n");
    float sum = 0;
    float average;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("sum = %f\n ", sum);
    average = sum / n;
    printf("average = %f", average);
    return 0;
}