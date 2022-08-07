#include <stdio.h>
#include <math.h>

int main()
{
  int matrix[3][3],transpose[3][3];

  printf("Enter the elements of the matrix row-wise:");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Printing matrix..

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  printf("\n");

  // Transpose of matrix.

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      transpose[i][j]=matrix[j][i];
    }
  }


  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", transpose[i][j]);
    }
    printf("\n");
  }
  return 0;
}