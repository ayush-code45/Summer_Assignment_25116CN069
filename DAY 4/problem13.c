#include <stdio.h>
int main()
{
    int n, term1, term2, nextterm, i;
    term1 = 0, term2 = 1, nextterm = term1 + term2;
    printf("enter number of term");
    scanf("%d", &n);

    printf("fibonacci series is:\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", term1);
        nextterm = term1 + term2;
        term2 = term1;
        term1 = nextterm;
    }

    return 0;
}