#include <stdio.h>
#include <math.h>
int main()
{
    int start, end, i,d, result, temp, count;

    printf("enter start number: ");
    scanf("%d", &start);
    printf("enter end number: ");
    scanf("%d", &end);

    printf("armstrong number between %d and %d:\n", start, end);
    for (i = start; i <= end; i++)
    {
        temp = i;
        result = 0;
        count = 0;

        while (temp != 0)
        {
            temp = temp / 10;
            count++;
        }
        temp = i;
        while (temp != 0)
        {
            d = temp % 10;
            result = result + (int)(pow(d, count) + 0.5);
            temp = temp / 10;
        }

        if (result == i)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}