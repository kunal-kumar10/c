#include <stdio.h>
#include <math.h>

// --> Sorting in ascending order.

int main()
{
    int a[6];

    printf("Enter the elements: ");
    for (int i = 0; i < 6; i++)
        scanf("%d", &a[i]);

    for(int i=1;i<6;i++)
    {
        int temp=a[i];
        int j;
        for(j=i-1; j>=0 && temp<a[j];j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }

    for (int i = 0; i < 6; i++)
        printf("%d ", a[i]);

    return 0;
}