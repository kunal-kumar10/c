#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  int num[3];
  FILE *ptr;
  ptr=fopen("sample.txt","r");

  for(int i=0;i<3;i++)
  {
    fscanf(ptr,"%d",&num[i]);
  }
  fclose(ptr);
  ptr=fopen("sample.txt","w");
  for(int i=0;i<3;i++)
  {
    fprintf(ptr,"%d ",num[i]*2);
  }
  fclose(ptr);
  return 0;
}