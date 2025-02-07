#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, n, a[100], temp;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("In sorted numbers using bubble sort\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}