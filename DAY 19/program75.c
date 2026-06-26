#include <stdio.h>
int main()
{
    int n;
    printf("enter size of matrix:");
    scanf("%d", &n);
    int a[n][n], b[n][n];
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

    printf("transpose of matrix is :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[j][i];
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}