#include<stdio.h>
#include<math.h>

int area(float x1,float x2,float x3, float y1, float y2, float y3)
{
    float area;
    area=(0.5)*(x1*(y2-y3)+x2*(y3-y1)+ x3*(y1-y2));

    if(area==0)
    {
        printf("No Triangle formed!!!");
        return 0;
    }
    return 1;
}

int position(float x1,float x2,float x3, float y1, float y2, float y3, float x, float y)
{
    float ABC, ABP, ACP, BCP;

    ABC=(0.5)*(x1*(y2-y3)+x2*(y3-y1)+ x3*(y1-y2));

    ABP=(0.5)*(x*(y1-y2)+x1*(y2-y)+ x2*(y-y1));
    BCP=(0.5)*(x*(y2-y3)+x2*(y3-y)+ x3*(y-y2));
    ACP=(0.5)*(x*(y1-y2)+x1*(y2-y)+ x2*(y-y1));

    if(ABC==ABP+BCP+ACP)
    {
        return 1;
    }
    return 0;
}

int main()
{
    float x1,x2,x3,y1,y2,y3,x,y;
    int value;
    printf("Enter the coordinates of triangle:\n");
    printf("(x1,y1)= ");
    scanf("%f %f",&x1,&y1);
    printf("(x2,y2)= ");
    scanf("%f %f",&x2,&y2);
    printf("(x3,y3)= ");
    scanf("%f %f",&x3,&y3);

    value=area(x1,x2,x3,y1,y2,y3);

    if(value==1)
    {
    printf("Enter a random point to find its location w.r.t triangle formed:  ");
    scanf("%f %f",&x,&y);

    if(position(x1,x2,x3,y1,y2,y3,x,y)==1)
    {
        printf("Point P(%f,%f) lies inside the triangle.",x,y);
    }
    else{
        printf("Point P(%f,%f) lies outside the triangle.",x,y);
    }
    }
   
    return 0;
}