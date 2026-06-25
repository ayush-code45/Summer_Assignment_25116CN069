# include <stdio.h>
# include <ctype.h>
int main ()
{
    int rows, i, space;
    char j;
    printf("enter the number of rows: ");
    scanf("%d",&rows);
    for ( i=1; i<=rows; i++){
        for (space=rows-1; space>=i; space--) {
            printf(" ");
        }
        for ( j='A'; j<'A'+i; j++){
            printf("%C ",j);
        }
        for ( j='A'+i-2; j>='A'; j--){
        printf("%C ",j);

        }
        printf("\n");
    }
    return 0;
}