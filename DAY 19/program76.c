#include <stdio.h>
int main()
{
    int n;
    printf("enter size of matrix:");
    scanf("%d", &n);
    int a[n][n];
    printf("first matrix is :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("element of first marix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }
    printf("sum of diagonal is = %d", sum);
    return 0;
}