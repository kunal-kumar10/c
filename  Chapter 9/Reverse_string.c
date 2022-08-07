#include <stdio.h>
#include <math.h>
#include <string.h>

void reverse(char *str)
{
  int i=0,len;
  char a[30];
  len=strlen(str);
  for(i;i<len;i++)
  {
    a[i]=str[len-1-i];
  }
  a[len]='\0';
  printf("%s\n", a);
} 

int main()
{
  char *s[] = {
      "tahcdnal",
      "dohcawdahb",
      "adnaglagah"};
  
  reverse(s[0]);
   reverse(s[1]);
   reverse(s[2]);


  return 0;
}