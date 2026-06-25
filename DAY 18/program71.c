#include <stdio.h>
int main()
{
    int n;
    printf("enter number of element:");
    scanf("%d", &n);
    int a[n];
    printf("enter array element\n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x;
    printf("enter element to be search:");
    scanf("%d", &x);

    int low, high, key, flag = 0;
    low = 0;
    high = n - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == x)
        {
            flag = 1;
            break;
        }
        else if (a[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (flag == 1)
    {
        printf("element found at %d", mid + 1);
    }
    else
    {
        printf("element not found ");
    }
    return 0;
}
