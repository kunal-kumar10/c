#include <stdio.h>
#include <math.h>

int main()
{
    int a[20], n;
    printf("Enter the number of elements you wanna enter: ");
    scanf("%d", &n);

    printf("Enter the elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i=0;i<n/2;i++)
    {
        int temp;
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }

    printf("Reversed array:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}