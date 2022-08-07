#include<stdio.h>
#include<math.h>
#include<string.h>

char strlwr(char *a)
{
  char lower[50];
  int i=0,len=strlen(a),occurances=0;
 
  for(i;i<len;i++)
  {
    if(a[i]>64 && a[i]<91)
    {
      lower[i]=a[i]+32;
    }
    else{
      lower[i]=a[i];
    }
  }

  for(int i=0;i<len;i++)
  {
    if((lower[i]=='a' || lower[i]=='e' || lower[i]=='o' || lower[i]=='i' || lower[i]=='u')&& (lower[i+1]=='a' || lower[i+1]=='e' || lower[i+1]=='o' || lower[i+1]=='i' || lower[i+1]=='u'))
    {
      occurances++;
    }
  
  }

  printf("%d",occurances);
}

int main()
{
  char a[50];
  gets(a);
  strlwr(a);
  return 0;
}