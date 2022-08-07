#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  system("clear");
  int a[3];
  FILE *ptr;
  ptr=fopen("sample.txt","r");

  for(int i=0;i<3;i++)
  {
    fscanf(ptr,"%d",a+i);
  }
  fclose(ptr);
  for(int i=0;i<3;i++)
  {
    printf("%d\n",*(a+i));
  }
  
  return 0;
}