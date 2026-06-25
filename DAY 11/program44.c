# include <stdio.h>

int factorial( int );

int main (){
    int n, fac;
    printf("enter a number: ");
    scanf("%d",&n);
    if ( n<0){
        printf("factorial of number not defined.");
    }
    else {
        fac = factorial(n);
        printf("factorial = %d",fac);
    }
    return 0;
}

int factorial( int n){
    int i, fac=1;
    for ( i=1; i<=n; i++){
        fac = fac*i;
    }
    return fac;
}