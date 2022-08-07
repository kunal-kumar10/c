#include<stdio.h>
#include<math.h>

int factorial(int n)
{
    int x;
    if(n==1)
    {
        return 1;
    }
    else
    {
        x=n*factorial(n-1);
    }
    return x;
}

float sinx(int x,int n,int i)
{
    float value;
    if(i<=n)
    {
        
        value= pow(-1,i-1)*pow(x,2*i-1)/factorial(2*i-1) + sinx(x,n,i+1);
    }
    if(i==n+1)
    {
        return 0;
    }
    return value;
}
// float sinx(int x,int n,int i)
// {
//     float value;
//     if(i<n)
//     {
        
//         value= pow(-1,i-1)*pow(x,2*i-1)/factorial(2*i-1) + sinx(x,n,i+1);
//     }
//     if(i==n)
//     {
//         return pow(-1,n-1)*pow(x,2*n-1)/factorial(2*n-1);
//     }
//     return value;
// }

int main()
{
    int n;
    float x;
    printf("Enter the number of terms in Sinx:");
    scanf("%d",&n);
    printf("Enter the value of x:");
    scanf("%f",&x);
    printf("Sin(%f)=%f",x,sinx(x,n,1));
    return 0;
}