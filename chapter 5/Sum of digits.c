#include<stdio.h>
#include<math.h>

int sum(int num)
{
    // int sum=0;
    // for(int i=0;num!=0;)
    // {
    //     int a;
    //     a=pow(10,i+1);
    //     sum+=(num%a);
    //     num/=10;
    // }
    int s,last;
    if(num==0)
    {
        return 0;
    }
    else{
        
    last=num%10;
    s=sum(num/10)+last;
    }
    return s;
}

int main()
{
    int num;
    printf("ENter a number:");
    scanf("%d",&num);
    int a=sum(num);
    printf("Sum=%d",a);
    return 0;
}