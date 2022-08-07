#include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
int main()
{
    system("clear");
    int i=0;
    while(i<=255 && i>=0)
    {
        printf("%d --> %c\n",i,i);
        i++;
    }
    return 0;
}