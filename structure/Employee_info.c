#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  FILE *ptr;
  int salary[2];
  char name[2][10];

  printf("Enter your name: ");
  scanf("%s",name[0]);
  printf("Enter your salary: ");
  scanf("%d",salary);
  printf("Enter your name: ");
  scanf("%s",name[1]);
  printf("Enter your salary: ");
  scanf("%d",salary+1);

  ptr=fopen("Employee_info.txt","w");

  fprintf(ptr,"%s \t %s\n","Name","Salary");
  for(int i=0;i<2;i++)
  {
    fprintf(ptr,"%s \t %d\n",name[i],salary[i]);
    printf("\n");
  }
  fclose(ptr);
  return 0;
}