#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
  char line[50],omitted[50];
  gets(line);

  int len=strlen(line),j=0;

  for(int i=0;i<len;i++)
  {
    if(line[i]=='t' && line[i+1]=='h' && line[i+2]=='e' && line[i+3]==' ')
    {
      omitted[j]=line[i+4];
      j++;
      i=i+4;
    }
    else
    {
    omitted[j]=line[i];
    j++;
    }
  }
  omitted[j]='\0';
  printf("%s",omitted);

  return 0;
}