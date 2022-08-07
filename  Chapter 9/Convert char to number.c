#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
  char a[10]="124";
gets(a);
  int num=0;
  register int i=0;
  int len=strlen(a);
  printf("%d\n",len);
  while(a[i]!='\0')
  {
    int x,y;
    x=a[i]-48;
    
    num=num*10+x;
    i++;
  }
  printf("%d",num);
  return 0;
}