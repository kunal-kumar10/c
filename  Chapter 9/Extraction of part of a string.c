#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
  char str[50]="Working with strings is fun",extract[20];
  int pos,num;

  printf("Enter the position from where to be extracted:");
  scanf("%d",&pos);
  printf("Enter the Number of characters to be extracted:");
  scanf("%d",&num);
  register int i=0;
  for( i;i<num;i++)
  {
    extract[i]=str[pos-1+i];
  }
  extract[i]='\0';
  printf("%s",extract);
  return 0;
}

  