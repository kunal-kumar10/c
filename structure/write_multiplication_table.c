#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  int num;
  FILE *ptr;
  ptr=fopen("Multiplicaton_table","w");
  printf("Enter the number to find its multiplication table:");
  scanf("%d",&num);


  fprintf(ptr,"Multiplicaton table of %d\n",num);
  fprintf(ptr,"**************************\n\n");
  for(int i=1;i<=10;i++)
  {
    fprintf(ptr,"%dx%d=%d\n",num,i,num*i);
  }
  fclose(ptr);
  return 0;
}