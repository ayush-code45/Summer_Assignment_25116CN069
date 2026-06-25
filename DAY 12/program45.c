# include <stdio.h>

int palindrome( int );

int main ()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if ( palindrome( n )){
        printf("%d is a palindrome ",n);
    }
    else {
        printf("%d is not a palindrome ",n);
    }
    return 0;
}

int palindrome ( int n){
    int d, rev=0, temp;
    temp = n;
    while ( n>0 ){
        d= n%10;
        rev = rev*10 + d;
        n=n/10;
    }
    if ( temp == rev){
        return 1;
    }
    else {
        return 0;
    }
}