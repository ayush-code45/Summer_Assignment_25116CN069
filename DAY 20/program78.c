#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of matrix: ");
    scanf("%d", &n);

    int a[n][n];
    
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    int symmetric = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric == 1)
        printf("\nMatrix is SYMMETRIC\n");
    else
        printf("\nMatrix is NOT SYMMETRIC\n");

    return 0;
}