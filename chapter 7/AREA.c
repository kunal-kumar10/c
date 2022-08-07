#include<stdio.h>
#include<math.h>
#include "Excercises.c"

int main()
{
  float side;
  printf("Enter the side of the square: ");
  scanf("%f",&side);

printf("Area of square=%f",AREA_SQUARE(side));
  return 0;
}