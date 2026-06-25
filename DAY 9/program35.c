# include <stdio.h>
# include <ctype.h>
int main ()
{
    int i, j;
    char ch;
    printf("enter character from (A - Z): ");
    scanf("%c",&ch);

    for ( i = 'A'; i<=ch; i++){
        for ( j = 'A'; j <= i; j++){
            printf("%C ",i);
        }
        printf("\n");
    }
    return 0;
}