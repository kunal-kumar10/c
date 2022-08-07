#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
void display(int month, int year)
{
  switch (month)
  {
  case 1:
    printf("             January           %d\n", year);
    break;
  case 2:
    printf("             February           %d\n", year);
    break;
  case 3:
    printf("             March           %d\n", year);
    break;
  case 4:
    printf("             April           %d\n", year);
    break;
  case 5:
    printf("             May           %d\n", year);
    break;
  case 6:
    printf("             June           %d\n", year);
    break;
  case 7:
    printf("             July           %d\n", year);
    break;
  case 8:
    printf("             August           %d\n", year);
    break;
  case 9:
    printf("             September           %d\n", year);
    break;
  case 10:
    printf("             October            %d\n", year);
    break;
  case 11:
    printf("             November            %d\n", year);
    break;
  case 12:
    printf("             December            %d\n", year);
  }
}

// Checks whether leap or not.
int leap(int year)
{
  int y = ((year % 4 == 0) ? ((year % 100 == 0 && year % 400 != 0) ? 0 : 1) : 0);
  return y;
}



int num_days(int month,int n_leap,int n_non_leap,int year)
{
    int days=365*n_non_leap+366*n_leap;
    
    for(int i=1;i<=month;i++)
    {
         if(i==1)
         {
             days+=0;
         }
         else if(i==2 || i==4 || i==6 || i==8 || i==9 || i==11)
         {
             days+=31;
         }
         else if(i==3)
         {
             if(leap(year)==1)
             {
                 days+=29;
             }
             else
             {
                 days+=28;
             }
         }
         else
         {
             days+=30;
         }
    }
    return days;
}





// Printing Calendar..
void display_calendar(int month, int year, int n_leap, int n_non_leap)
{
  int y = leap(year);
  int rem = num_days(month, n_leap, n_non_leap, year) % 7;





  if (rem == 0)
  {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
      for (int day = 1; day <= 31;)
      {
        for (int j = 1; j <= 7 && day <= 31; j++)
        {
          printf("%d\t", day);
          day++;
        }
        printf("\n");
      }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
      for (int day = 1; day <= 30;)
      {
        for (int j = 1; j <= 7 && day <= 30; j++)
        {
          printf("%d\t", day);
          day++;
        }
        printf("\n");
      }
    }
    else
    {
      if (leap(year) == 1)
      {
        for (int day = 1; day <= 29;)
        {
          for (int j = 1; j <= 7 && day <= 29; j++)
          {
            printf("%d\t", day);
            day++;
          }
        }
      }
      else
      {
        for (int day = 1; day <= 28;)
        {
          for (int j = 1; j <= 7 && day <= 28; j++)
          {
            printf("%d\t", day);
            day++;
          }
        }
      }
    }
  }



  else if (rem == 1)
  {
    printf("\t");
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
      for (int day = 1; day <= 31;)
      {
        if (day == 1)
        {
          for (int j = 1; j <= 6 && day <= 31; j++)
          {
            printf("%d\t", day);
            day++;
          }
          printf("\n");
        }
        else
        {
          for (int j = 1; j <= 7 && day <= 31; j++)
          {
            printf("%d\t", day);
            day++;
          }
        }
        printf("\n");
      }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
      for (int day = 1; day <= 30;)
      {
        if (day == 1)
        {
          for (int j = 1; j <= 6 && day <= 30; j++)
          {
            printf("%d\t", day);
            day++;
          }
          printf("\n");
        }
        else
        {
          for (int j = 1; j <= 7 && day <= 30; j++)
          {
            printf("%d\t", day);
            day++;
          }
          printf("\n");
        }
      }
    }
    else
    {
      if (leap(year) == 1)
      {
        for (int day = 1; day <= 29;)
        {
          if (day == 1)
          {
            for (int j = 1; j <= 6 && day <= 29; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
          else
          {
            for (int j = 1; j <= 7 && day <= 29; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
        }
      }
      else
        for (int day = 1; day <= 28;)
        {
          if (day == 1)
          {
            for (int j = 1; j <= 6 && day <= 28; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
          else
          {
            for (int j = 1; j <= 7 && day <= 28; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
        }
    }
  }



  else if (rem == 2)
  {
    printf("\t\t");
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
      for (int day = 1; day <= 31;)
      {
        if (day == 1)
        {
          for (int j = 1; j <= 5 && day <= 31; j++)
          {
            printf("%d\t", day);
            day++;
          }
          printf("\n");
        }
        else
        {
          for (int j = 1; j <= 7 && day <= 31; j++)
          {
            printf("%d\t", day);
            day++;
          }
        }
        printf("\n");
      }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
      for (int day = 1; day <= 30;)
      {
        if (day == 1)
        {
          for (int j = 1; j <= 5 && day <= 30; j++)
          {
            printf("%d\t", day);
            day++;
          }
          printf("\n");
        }
        else
        {
          for (int j = 1; j <= 7 && day <= 30; j++)
          {
            printf("%d\t", day);
            day++;
          }
          printf("\n");
        }
      }
    }
    else
    {
      if (leap(year) == 1)
      {
        for (int day = 1; day <= 29;)
        {
          if (day == 1)
          {
            for (int j = 1; j <= 5 && day <= 29; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
          else
          {
            for (int j = 1; j <= 7 && day <= 29; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
        }
      }
      else
        for (int day = 1; day <= 28;)
        {
          if (day == 1)
          {
            for (int j = 1; j <= 5 && day <= 28; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
          else
          {
            for (int j = 1; j <= 7 && day <= 28; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
        }
    }
  }




  else if (rem == 3)
  {
    printf("\t\t\t");
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
      for (int day = 1; day <= 31;)
      {
        if (day == 1)
        {
          for (int j = 1; j <= 4 && day <= 31; j++)
          {
            printf("%d\t", day);
            day++;
          }
          printf("\n");
        }
        else
        {
          for (int j = 1; j <= 7 && day <= 31; j++)
          {
            printf("%d\t", day);
            day++;
          }
        }
        printf("\n");
      }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
      for (int day = 1; day <= 30;)
      {
        if (day == 1)
        {
          for (int j = 1; j <= 4 && day <= 30; j++)
          {
            printf("%d\t", day);
            day++;
          }
          printf("\n");
        }
        else
        {
          for (int j = 1; j <= 7 && day <= 30; j++)
          {
            printf("%d\t", day);
            day++;
          }
          printf("\n");
        }
      }
    }
    else
    {
      if (leap(year) == 1)
      {
        for (int day = 1; day <= 29;)
        {
          if (day == 1)
          {
            for (int j = 1; j <= 4 && day <= 29; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
          else
          {
            for (int j = 1; j <= 7 && day <= 29; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
        }
      }
      else
        for (int day = 1; day <= 28;)
        {
          if (day == 1)
          {
            for (int j = 1; j <= 4 && day <= 28; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
          else
          {
            for (int j = 1; j <= 7 && day <= 28; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
        }
    }
  }




else if (rem == 4)
  {
    printf("\t\t\t\t");
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
      for (int day = 1; day <= 31;)
      {
        if (day == 1)
        {
          for (int j = 1; j <= 3 && day <= 31; j++)
          {
            printf("%d\t", day);
            day++;
          }
          printf("\n");
        }
        else
        {
          for (int j = 1; j <= 7 && day <= 31; j++)
          {
            printf("%d\t", day);
            day++;
          }
        }
        printf("\n");
      }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
      for (int day = 1; day <= 30;)
      {
        if (day == 1)
        {
          for (int j = 1; j <= 6 && day <= 30; j++)
          {
            printf("%d\t", day);
            day++;
          }
          printf("\n");
        }
        else
        {
          for (int j = 1; j <= 7 && day <= 30; j++)
          {
            printf("%d\t", day);
            day++;
          }
          printf("\n");
        }
      }
    }
    else
    {
      if (leap(year) == 1)
      {
        for (int day = 1; day <= 29;)
        {
          if (day == 1)
          {
            for (int j = 1; j <= 6 && day <= 29; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
          else
          {
            for (int j = 1; j <= 7 && day <= 29; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
        }
      }
      else
        for (int day = 1; day <= 28;)
        {
          if (day == 1)
          {
            for (int j = 1; j <= 6 && day <= 28; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
          else
          {
            for (int j = 1; j <= 7 && day <= 28; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
        }
    }
  }



if (rem == 5)
  {
    printf("\t\t\t\t\t");
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
      for (int day = 1; day <= 31;)
      {
        if (day == 1)
        {
          for (int j = 1; j <= 2 && day <= 31; j++)
          {
            printf("%d\t", day);
            day++;
          }
          printf("\n");
        }
        else
        {
          for (int j = 1; j <= 7 && day <= 31; j++)
          {
            printf("%d\t", day);
            day++;
          }
        }
        printf("\n");
      }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
      for (int day = 1; day <= 30;)
      {
        if (day == 1)
        {
          for (int j = 1; j <= 2 && day <= 30; j++)
          {
            printf("%d\t", day);
            day++;
          }
          printf("\n");
        }
        else
        {
          for (int j = 1; j <= 7 && day <= 30; j++)
          {
            printf("%d\t", day);
            day++;
          }
          printf("\n");
        }
      }
    }
    else
    {
      if (leap(year) == 1)
      {
        for (int day = 1; day <= 29;)
        {
          if (day == 1)
          {
            for (int j = 1; j <= 2 && day <= 29; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
          else
          {
            for (int j = 1; j <= 7 && day <= 29; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
        }
      }
      else
        for (int day = 1; day <= 28;)
        {
          if (day == 1)
          {
            for (int j = 1; j <= 2 && day <= 28; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
          else
          {
            for (int j = 1; j <= 7 && day <= 28; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
        }
    }
  }




if (rem == 6)
  {
    printf("\t\t\t\t\t\t");
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
      for (int day = 1; day <= 31;)
      {
        if (day == 1)
        {
          for (int j = 1; j <= 1 && day <= 31; j++)
          {
            printf("%d\t", day);
            day++;
          }
          printf("\n");
        }
        else
        {
          for (int j = 1; j <= 7 && day <= 31; j++)
          {
            printf("%d\t", day);
            day++;
          }
        }
        printf("\n");
      }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
      for (int day = 1; day <= 30;)
      {
        if (day == 1)
        {
          for (int j = 1; j <= 1 && day <= 30; j++)
          {
            printf("%d\t", day);
            day++;
          }
          printf("\n");
        }
        else
        {
          for (int j = 1; j <= 7 && day <= 30; j++)
          {
            printf("%d\t", day);
            day++;
          }
          printf("\n");
        }
      }
    }
    else
    {
      if (leap(year) == 1)
      {
        for (int day = 1; day <= 29;)
        {
          if (day == 1)
          {
            for (int j = 1; j <= 1 && day <= 29; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
          else
          {
            for (int j = 1; j <= 7 && day <= 29; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
        }
      }
      else
        for (int day = 1; day <= 28;)
        {
          if (day == 1)
          {
            for (int j = 1; j <= 1 && day <= 28; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
          else
          {
            for (int j = 1; j <= 7 && day <= 28; j++)
            {
              printf("%d\t", day);
              day++;
            }
            printf("\n");
          }
        }
    }
  }
}




int main()
{
  system("clear");
  int year, month, i = 0, days, n_leap = 0, n_non_leap = 0;

  do
  {
    if (i == 0)
    {
      printf("Enter the year: ");
      scanf("%d", &year);
    }
    else
    {
      printf("INVALID ENTRY!!! Please, Enter the year greater or equal to 1900.\n");
      printf("Enter the year: ");
      scanf("%d", &year);
    }
    i++;
  } while (year < 1900);

  i = 0;
  do
  {
    if (i == 0)
    {
      printf("Enter the month number: ");
      scanf("%d", &month);
    }
    else
    {
      printf("INVALID ENTRY!!! Please, Enter the month number between 1-12.\n");
      printf("Enter the month number: ");
      scanf("%d", &month);
    }
    i++;
  } while (month > 12 || month < 1);

  printf("___________________________________________________\n\n");
  display(month, year);
  printf("___________________________________________________\n");

  printf("Mon\tTue\tWed\tThu\tFri\tSat\tSun\n");
  printf("___________________________________________________\n");

  // Applying concept of Gregorian calendar.
  for (int j = 1900; j < year; j++)
  {
    if (leap(j) == 1)
    {
      n_leap++;
    }
    else
    {
      n_non_leap++;
    }
  }
    
    display_calendar(month,year,n_leap,n_non_leap);
  return 0;
}