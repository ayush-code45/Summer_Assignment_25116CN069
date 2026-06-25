# include <stdio.h>

int prime( int );

int main ()
{
int n, i;
printf("enter number to check prime: ");
scanf("%d",&n);
if ( prime(n)){
printf("%d no is prime",n);
}
else {
    printf("%d no is not prime",n);
}
return 0;
}

int prime(int n){
    if ( n <=1 ){
        return 0;
    }
    if ( n == 2){
        return 1;
    }
    if ( n % 2 == 0 ){
        return 0;
    }

        for ( int i=2; i<=n/2; i++){
            if ( n % i == 0){
                return 0;
            }
        }
}