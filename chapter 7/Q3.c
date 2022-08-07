#include<stdio.h>
#include<math.h>

#define ABSOLUTE_VALUE(x) (x>0?x:-x)
// #define ABSOLUTE_VALUE(x) (x>0?printf("%d",x):printf("%d",-x);)

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  
  int y=ABSOLUTE_VALUE(num);
  printf("Absolute value:%d",y);
  return 0;
}