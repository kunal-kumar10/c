#include<stdio.h>
#include<math.h>
#include  "HCF_recursion.c"

#define AND &&
#define  CON (i>0  AND i<4)    // Macros  templates are  always in capital letters.

// # define FOUND (printf("You are right.");)               --> This will  give error.
# define FOUND printf("You are right.\n");

// Macros wilth arguments
#define AREA(x) (x*x)

#define SQUARE(x)x*x  // is not equal to SQUARE(x) x*x


//Multi line macros definations 
#define X for(int i=0;i<10;i++) \
                    printf("%d",i);

#define Y {\
                    printf("MY name is");\
                    printf(" Kunal\n");\
                   }


int main()
{
    int i;
         for( i=1;CON;i++)
         {
             printf("%d\n",i);
         }
         if(i>0)
         FOUND;

         printf("Area of square with side 2=%d\n",AREA(2));

         printf("Value =%d\n",64/SQUARE(4));     // Here the expected output is  4.
         // Thereflore the macro expanison must always be enclosed in parenthesis.
        Y;
        printf("HCF=%d\n",gcd(1980,1617));

        int j=3;
        if(j>0 AND j<5)
        printf("Hello\n");

        printf("TIme now=%s\n", __TIME__);
        printf("Line no.=%d\n", __LINE__);
        printf("ANSI=%d\n",__STDC__);
        printf("Date=%s",__DATE__);
         return 0;
}
