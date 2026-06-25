#include <stdio.h>
#include <ctype.h>
int main()
{
    int i, j;
    char ch;
    printf("enter number of rows (A-Z): ");
    scanf("%c", &ch);
    for (i = 'A'; i <= ch; i++)
    {
        for (j = 'A'; j <= i; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}