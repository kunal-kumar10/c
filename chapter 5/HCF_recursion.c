#include<stdio.h>
#include<math.h>

int gcd(int a, int b)
{
    int rem;
    rem=a%b;
    if(rem>0){
    gcd(b,rem);
    }
    else
    return b;
}

int main2()
{
    int a,b,max,min;
    printf("Enter the two numbers to find its HCF=");
    scanf("%d %d",&a,&b);

    if(a>b)
    {
        max=a;
        min=b;
    }
    else{
        max=b;
        min=a;
    }
    printf("HCF=%d",gcd(max,min));
   
    return 0;
}
