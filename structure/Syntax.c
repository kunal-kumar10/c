// Rock paper scissor game..

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int rock_paper_scissors(char you, char comp)
{
    if (you == comp)
    {
        return 0; // 0--> draw.
    }
    else if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }
    else if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }
    return 1;
}

int main()
{
  system("clear");
    char you, comp;
    printf("Enter 'x' to exit...\n");
    do
    {
        printf("Enter your choice: ");
        scanf(" %c", &you);
        if(you=='x')
        {
            exit(0);
        }
        srand(time(0));
        int num = rand() % 3;

        if (num == 0)
        {
            comp = 'r'; // r--> rock
        }
        else if (num == 1)
        {
            comp = 'p'; // p--> rock
        }
        else
        {
            comp = 's'; // s--> rock
        }
        int result = rock_paper_scissors(you, comp);

        if (result == 1)
        {
            printf("You Win!! You choose %c and computer choose %c.\n", you, comp);
        }

        else if (result == -1)
        {
            printf("You Lose!! You choose %c and computer choose %c.\n", you, comp);
        }

        else
        {
            printf("Draw!! You choose %c and computer choose %c.\n", you, comp);
        }
    } while (1);
    return 0;
}