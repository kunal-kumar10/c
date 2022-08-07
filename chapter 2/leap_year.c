#include <stdio.h>

int main()
{
   int year, leap;
   printf("ENter a year:");
   scanf("%d", &year);
   if (year % 4 == 0)
   {
      if (year % 100 == 0 && year % 400 != 0)
      {
         leap = 0;
      }
      else
      {
         leap = 1;
      }
   }
   else
   {
      leap = 0;
   }
   if (leap == 1)
   {
      printf("%d is a leap year.", year);
   }
   else
   {
      printf("%d is a non-leap year.", year);
   }
   //  year%4==0?((year%100==0 && year%400!=0)?printf("Non-leap"):printf("Leap")):printf("Non-leap");
   return 0;
}