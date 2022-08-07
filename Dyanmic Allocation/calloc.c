#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<termios.h>
#include<stdlib.h>

int main()
{
  system("clear");
  int *ptr,n;
  printf("Enter the number of numbers you wanna enter: ");
  scanf("%d",&n);
  ptr= (int *) calloc(n,sizeof(int));

  for(int i=0;i<n;i++)
  {
      scanf("%d",&ptr[i]);
  }
  for(int i=0;i<n;i++)
  {
      printf("%d\n",ptr[i]);
  }
  free(ptr);
  return 0;
}