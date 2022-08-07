#include<stdio.h>
#include<math.h>

int factorial(int n)
{
  int sum=0;
  if(n==1)
  {
    return 1;
  }
  else
  {
    sum+=n*factorial(n-1);
  }
  return sum;
}

float sinx(float x,int n)
{
  float  sum=0;
  if(n==5)
  {
    return (-1,n-1)*pow(x,2*n+1)/factorial(2*n+1);
  }

  else
  {
    sum+=pow(-1,n)*pow(x,2*n+1)/factorial(2*n+1)+sinx(x,n+1);
  }
  return sum;
}

int main()
{
  float side[6][6]={
    {137.4,80.9},
    {155.2,92.62},
    {149.3,97.93},
    {160.0,100.25},
    {155.6,68.95},
    {149.7,120.0}
  }, angle[6]={0.78,0.89,1.35,9,1.25,1.75}
  ,area[6];
  
  for(int i=0;i<6;i++)
  {
    area[i]=(0.5)*side[i][0]*side[i][1]*sinx(angle[i],0);
  }
  
  for(int i=0;i<6;i++)
  printf("Area of triangle %d= %f\n",i+1,area[i]);
  return 0;
}