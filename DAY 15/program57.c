# include <stdio.h>
int main ()
{
    int n;
    printf("enter number of element: ");
    scanf("%d",&n);
    int a[n];
    printf("enter list of element:\n");
    for ( int i=0; i<n; i++ ){
        scanf("%d",&a[i]);
    }
    printf("element of array are :\n");
    for ( int i=0; i<n; i++ ){
        printf("%d\t",a[i]);
    }
    printf("\n");
    int temp[n];
    for ( int i = 0; i<n; i++ ){
         temp[i] = a[n-1-i];
    }
    printf("reversed array:\n ");
    for ( int i=0; i<n; i++ ){
        printf("%d\t",temp[i]);
    }
    return 0;
}