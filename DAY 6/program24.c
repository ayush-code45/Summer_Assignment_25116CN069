# include <stdio.h>
int main (){
    int x, n, answer=1;
    printf("enter base (x):");
    scanf("%d",&x);
    printf("enter exponent (n):");
    scanf("%d",&n);
    
    for (int i=0; i<n; i++){
        answer = answer*x;
    }
    printf("%d^%d = %d", x, n, answer);
    return 0;
}