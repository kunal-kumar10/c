#include<stdio.h>


int main()
{
    printf("Rules of the game!!\n");
    printf("-------------------\n\n");
    printf("1. Total no. of matchsticks: 21\n");
    printf("2. You and me can choose any of matchsticks between 1-4.\n");
    printf("3. The matchsticks are choosen alternatively.\n");
    printf("WHOEVER CHOOSES THE LAST MATCHSTICKS LOSES THE GAME.\n");
    printf("*************************************************************\n");

    int matchsticks=21,choice;
    do
    {
        printf("Number of matchsticks:%d\n",matchsticks);
        printf("Enter the number of matchsticks you wanna choose:");
        scanf("%d",&choice);

        if(choice>4 && choice<1)
        {
            printf("INVALID ENTRY!!!\n");
        }
        
        if(matchsticks==1)
        {
            if(choice>1 || choice<1)
            {
                printf("Matchstick no. exceeds ... Abe bsdk!!! Jitna aukaat h utna chun:");
                
            }
            else{
                printf("landchat!!! You lost....");
                matchsticks=matchsticks-1;
                break;
            }
        }

        if(choice==1 && matchsticks>1)
        {
            printf("My choice:4\n");
            matchsticks=matchsticks-5;
        }
        else if(choice==2 && matchsticks>1)
        {
            printf("My choice:3\n");
            matchsticks=matchsticks-5;
        }
        else if(choice==3 && matchsticks>1)
        {
            printf("My choice:2\n");
            matchsticks=matchsticks-5;
        }
        else if(choice==4 && matchsticks>1)
        {
            printf("My choice:1\n");
            matchsticks=matchsticks-5;
        }
    } while (matchsticks>0);
    
    return 0;
}
   