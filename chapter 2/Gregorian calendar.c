#include <stdio.h>

int main()
{
    int year, day = 0;
    printf("Enter the year on which you wanna find its day on 1 Jan:");
    scanf("%d", &year);
    for (int i = 1; i <= year - 1900; i++)
    {
        if ((1899 + i) % 4 == 0)
        {
            if ((1899 + i) % 100 == 0 && (1899 + i) % 400 == 0)
            {
                day += 366;
            }
            else if ((1899 + i) % 100 != 0 && (1899 + i) % 400 != 0)
            {
                day += 366;
            }
            else
            {
                day += 365;
            }
        }
        else
        {
            day += 365;
        }
    }
    int x = (day) % 7;

    if (x == 0)
    {
        printf("%dth year has Monday on 1 Jan.", year);
    }
    if (x == 0)
    {
        printf("%dth year has Monday on 1 Jan.", year);
    }
    if (x == 1)
    {
        printf("%dth year has Tuesday on 1 Jan.", year);
    }
    if (x == 2)
    {
        printf("%dth year has Wednesday on 1 Jan.", year);
    }
    if (x == 3)
    {
        printf("%dth year has Thrusday on 1 Jan.", year);
    }
    if (x == 4)
    {
        printf("%dth year has Friday on 1 Jan.", year);
    }
    if (x == 5)
    {
        printf("%dth year has Saturday on 1 Jan.", year);
    }
    if (x == 6)
    {
        printf("%dth year has Sunday on 1 Jan.", year);
    }

    return 0;
}