#include<stdio.h>
void main()
{
    float a,b,c;
    printf("side 1 = ");
    scanf("%f",&a);
    printf("\n");
    printf("side 2 = ");
    scanf("%f",&b);
    printf("\n");
    printf("side 3 = ");
    scanf("%f",&c);

    ((a||b||c)!=0&&(a+b)>c&&(b+c)>a&&(c=a)>b)?printf("TRINAGLE"):printf("not triangle");
}
