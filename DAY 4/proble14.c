# include <stdio.h>
int main ()
{
    int n, term1, term2, nextterm, i;
    term1 = 0, term2 = 1, nextterm = term1 + term2;
    printf("enter term to find :");
    scanf("%d",&n);

    if ( n==1 ){
        printf("nth fibonacci term = %d ",term1);
    }
    else if ( n==2 ){
        printf("nth fibonacci term = %d ",term2);
    }
    else {
        for ( i=1; i<=n; i++){
            
            nextterm = term1 + term2;
            term2 = term1;
            term1 = nextterm;
        }
        printf("nth fibonacci term = %d",term2);
    }
    return 0;
}