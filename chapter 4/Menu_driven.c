#include <stdio.h>
#include <math.h>

int factorial(int n)
{

    int fac;

    if (n == 1)

    {

        return 1;
    }

    fac = n * factorial(n - 1);

    return fac;
}

void oddeven(int n)
{

    if (n % 2 == 0)

    {

        printf("%d is even no.\n", n);
    }

    else

    {

        printf("%d is odd no.\n", n);
    }
}

void prime(int n)
{

    int prime = 1;
    if (n == 1)

    {

        printf("1 is neither prime nor composite no.\n");
    }

    else

    {

        for (int i = 2; i < n; i++)

        {

            if (n % i == 0)

            {

                prime = 0;

                break;
            }
        }

        if (prime != 0)

        {

            printf("%d is prime no.\n", n);
        }

        else

        {

            printf("%d is composite no.\n");
        }
    }
}

int main()
{

    int choice, num;

    printf("Enter:\n");

    printf("<1> -->To find the factorial of no.\n");

    printf("<2> -->Prime or not\n");

    printf("<3> -->Odd or even\n");

    printf("<4> -->Exit\n");

    printf("****************\n");

    do

    {

        printf("Enter your choice:");

        scanf(" %d", &choice);

        if (choice != 4)
        {

            printf("Enter the number:");

            scanf("%d", &num);
        }

        switch (choice)

        {

        case 1:

            printf("%d%c=%d\n", num, '!', factorial(num));

            break;

        case 2:

            prime(num);

            break;

        case 3:

            oddeven(num);

            break;

        case 4:

            printf("You have successfully exited from the program.\n");

            break;

        default:

            printf("Please!! Enter the given above codes.\n");

            break;
        }

    } while (choice != 4);
}
