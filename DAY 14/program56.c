# include <stdio.h>
int main (){
     int n;
    printf("enter the number of element: ");
    scanf("%d", &n);
    int a[n];
    printf("the list of element in array:\n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("element of array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    int found = 0;
    for ( int i=0; i<n; i++ ){
        for ( int j=i+1; j<n; j++ ){
            if ( a[i] == a[j]){
                printf("duplicate = %d\n",a[i]);
                found = 1;
                break;
            }
        }
    }
    return 0;
}        