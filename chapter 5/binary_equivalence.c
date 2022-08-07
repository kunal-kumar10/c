#include<stdio.h>
#include<math.h>

// void binary(int num) 
// {
//     if(num!=0){
//     binary(num/2);
//     }
//     else{
//         return 0;
//     }
//     printf("%d",num%2);
// }

long binary(int num,int i)
{
    int sum=0;
    if(num!=0)
    {
        sum=(num%2)*pow(10,i) + binary(num/2,i+1);
    }
    else{
        return 0;
    }
    return sum;
}

int main()
{
    int num;
    printf("Enter a number to find its binary equivalence:");
    scanf("%d",&num);
    printf("Binary equivalance of %d= %ld",num,binary(num,0));
    return 0;
}