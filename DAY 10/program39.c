# include <stdio.h>
int main ()
{
    int rows, i, space, j;
    printf("enter the number of rows: ");
    scanf("%d",&rows);
    for ( i=1; i<=rows; i++){
        for (space=rows-1; space>=i; space--) {
            printf(" ");
        }
        for ( j=1; j<=i; j++){
            printf("%d ",j);
        }
        for ( j=i-1; j>=1; j--){
        printf("%d ",j);

        }
        printf("\n");
    }
    return 0;
}