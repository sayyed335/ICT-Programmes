#include<stdio.h>
void main()
{
    float a,b,area;
    printf("enter the value of equal arm :");
    scanf("%f",&a);
    printf("the value of other arm:");
    scanf("%f",&b);
    area=(b*sqrt(a*a-b*b)/4);
    printf("area of isosceles triangle is %.2f\n",area)
    ;
}
