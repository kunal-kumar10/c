#include<stdio.h>


int main()
{
   for(int i=1;i<=500;i++)
   {
       int a,b,c;
       a=i%10;
       b=i%100/10;
       c=i%1000/100;
       if(i==a*a*a+b*b*b+c*c*c)
       {
           printf("%d is armstrong no.\n",i);
       }
   }
    return 0;
}
   