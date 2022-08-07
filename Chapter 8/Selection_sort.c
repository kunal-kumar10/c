#include <stdio.h>
#include <math.h>

// --> Sorting in ascending order.

int main()
{
    int a[6];

    printf("Enter the elements: ");
    for (int i = 0; i < 6; i++)
        scanf("%d", &a[i]);

    for(int i=0;i<5;i++)
    {
        int min=a[i],n;

        for(int j=i;j<5;j++)
        {
            if(min>a[j+1])
            {
                min=a[j+1];
                n=j+1;
            }
        }
        a[n]=a[i];
        a[i]=min;
    }

    for (int i = 0; i < 6; i++)
        printf("%d ", a[i]);

    return 0;
}