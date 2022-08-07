#include<stdio.h>
#include<math.h>

int main()
{
  int a[8],num,pos,n;
    printf("Enter the number of elements you wanna enter: ");
    scanf("%d",&n);

  printf("Enter the elements: ");
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);

  printf("Enter the number to insert:");
  scanf("%d",&num);
  
  printf("Enter the position to insert the digit:");
  scanf("%d",&pos);

  for(int i=0; i<=n-pos;i++)
  {
      a[n-i]=a[n-1-i];
  }
  
  a[pos-1]=num;

  for(int i=0;i<n+1;i++)
  {
      printf("%d ",a[i]);
  }
  return 0;
}