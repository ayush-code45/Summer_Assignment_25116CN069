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
    int count = 0, x;
    printf("enter the element which frequency need to find: ");
    scanf("%d",&x);
    for ( int i = 0; i < n; i++ ){
        if ( a[i] == x ){
            count++;
        }
    }
    printf("frequency of an element %d = %d\n",x, count);
    return 0;
}