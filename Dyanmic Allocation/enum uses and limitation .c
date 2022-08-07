#include<stdio.h>
#include<stdlib.h>
enum pass_status
{
  topped,passed, failed, compart, drop    // topped=0 , passesd =1, ..... complier stores integers.
};

int main()
{
  system("clear");
  char *name;
  enum pass_status student;

  name= (char *) malloc(10*sizeof(char));
  strcpy(name,"Harsh");

  student = topped;

  printf("%s has topped the exam.",name);   // enum can't be used in printf and scanf statements.
                                          // If we use enum variable it prints respective integers.
  return 0;
}