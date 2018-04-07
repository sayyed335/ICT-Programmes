#include<stdio.h>
void main ()
{
    int x,y;
    long z;
    printf("enter the value of base :");
    scanf("%d",&x);
    printf("enter the value of power :");
    scanf("%d",&y);
    z=pow(x,y);
    printf("the result of x to the power y is %d \n",z);

}
