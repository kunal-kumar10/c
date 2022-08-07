#include <stdio.h>
#include <math.h>

// It must be sorted array.

int main()
{
    int a[20], n,num;
    printf("Enter the number of elements you wanna enter: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int l=0,m,u=n-1;
    m=(l+u)/2;

    printf("Enter the number you wanna find its position: ");
    scanf("%d",&num);
    for(;l<=u;)
    {
        if(a[m]==num)
        {
            printf("Address of %d is %u.",num,&a[m]);
            break;
        }
        else if(num>a[m])
        {
            l=m+1;
            m=(l+u)/2;
        }
        else{
            u=m-1;
            m=(l+u)/2;
        }
    }

    if(l>u)
    {
        printf("Data not found!!");
    }
    return 0;
}