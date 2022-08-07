#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    // Calculating string length.
//   char name[20]="Kunal";
//   int a=strlen(name);
//   printf("String length: %d\n",a);

//   int i=0;
//   while(name[i]!='\0')
//   {
//       i++;
//   }
//     printf("String length: %d\n",a);

//     // Copying string to other.
//     //Method 1
//     char x[]="Hello",y[20];
//     strcpy(y,x);
//     printf("%s\n",y);

//     //Method 2
//     char *p="Goblin",*q;
//     q=p;
//     printf("%s\n",q);

//     //Method 3
//       //Part 1
//     char g[]="Kunal",h[20];
//     i=0;
//     while(g[i]!='\0')
//     {
//         h[i]=g[i];
//         i++;
//     }
//     h[i]='\0';
//     printf("%s\n",h);

//     // Strcat
    // char t[20]="Hello", o[]="World";
    // strcat(t,o);
    // printf("%s\n",t);
    // int i;
    // int len1=strlen(t), len2=strlen(o);
    // char copy[40];
    // for( i=0;i<(len1+len2);i++)
    // {
    //     if(i<len1)
    //     {
    //         copy[i]=t[i];
    //     }
    //     else
    //     {
    //         copy[i]=o[i-len1];
    //     }
    // }
    // copy[i]='\0';
    // printf("%s\n",copy);

    char string1[ ] = "Jerry" ;
char string2[ ] = "Ferry" ;
int i, j, k ;
i = strcmp ( string1, "Jerry" ) ;
j = strcmp ( string1, string2 ) ;
k = strcmp ( string1, "Jerry boy" ) ;
printf ( "\n%d %d %d", i, j, k ) ;
  return 0;
}