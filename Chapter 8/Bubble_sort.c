#include <stdio.h>
#include <math.h>

// --> Sorting in ascending order.

int main()
{
    int a[8], n;
    printf("Enter the number of elements you wanna enter: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i=0;i<n-1;i++)
    {
        int swap=0;
        for(int j=0;j<4-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swap++;
            }
        }
        if(swap==0)
        {
            break;
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}