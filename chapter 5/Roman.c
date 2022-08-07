#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int roman(int year)
{
    int ones, tens, hundreds, thousands;

    ones=year%10;
    tens=year%100/10;
    hundreds=year%1000/100;
    thousands=year%10000/1000;

    if(thousands>0 && thousands<5 )
    {
        for(int i=1;i<=thousands;i++)
            {
                printf("M");
            }
    }

    if(hundreds>0)
    {
        if(hundreds>0 && hundreds<4)
        {
            for(int i=1;i<=hundreds;i++)
            {
                printf("C");
            }
        }
        else if(hundreds==4)
        {
            printf("XD");
        }
        else if(hundreds>4 && hundreds <9)
        {
            printf("D");
            for(int j=1;j<=hundreds-5;j++)
            {
                printf("C");
            }
        }
        else if(hundreds==9)
        {
            printf("CM");
        }
    }


    if(tens>0)
    {
        if(tens>0 && tens<4)
        {
            for(int i=1;i<=tens;i++)
            {
                printf("X");
            }
        }
        else if(tens==4)
        {
            printf("XL");
        }
        else if(tens>4 && tens <9)
        {
            printf("L");
            for(int j=1;j<=tens-5;j++)
            {
                printf("X");
            }
        }
        else if(tens==9)
        {
            printf("XC");
        }
    }


    if(ones>0)
    {
        if(ones>0 && ones<4)
        {
            for(int i=1;i<=ones;i++)
            {
                printf("I");
            }
        }
        else if(ones==4)
        {
            printf("IV");
        }
        else if(ones>4 && ones <9)
        {
            printf("V");
            for(int j=1;j<=ones-5;j++)
            {
                printf("I");
            }
        }
        else if(ones==9)
        {
            printf("IX");
        }
    }
}

int main()
{
    system("clear");
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    roman(year);
    return 0;
}