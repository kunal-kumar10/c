#include<stdio.h>
#include<math.h>

int main()
{
  int matrix[4][5];

  printf("Enter the elements of the matrix row-wise:");

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }

  //Printing matrix
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  printf("\n");

  //Circular shift..
  for(int i=0;i<4;i++)
  {
    int temp=matrix[i][0];
    
      for(int k=0;k<4;k++)
      {
        matrix[i][k]=matrix[i][k+1];
      }
    matrix[i][4]=temp;
  }

  //Printing matrix
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}