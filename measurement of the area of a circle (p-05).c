#include<stdio.h>
void main()
{
    int radius;
    float pi=3.14,area;
    printf("enter radius:");
    scanf("%d",&radius);
    area=pi*radius*radius;
    printf("the area of circle is %.2f",area);
}
