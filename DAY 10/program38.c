#include <stdio.h>
int main()
{
    int rows, i, space, j;
    printf("enter number of rows:");
    scanf("%d", &rows);
    for (i = rows; i >= 1; i--)
    {
        for (space = rows; space > i; space--)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}