#include<stdio.h>
#include<math.h>
int main()
{
    int num,sum=0,rem,i=0;
    scanf("%d",&num);
    
    while(num>0)
    {
        rem=num%2;
        num=num/2;
        sum+=rem*pow(10,i);
        i++;
    }
    printf("%d",sum);
    return 0;
}