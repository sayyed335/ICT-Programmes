#include<stdio.h>
void main()
{
    float d,v,t;
    printf("insert velocity in m/s :");
    scanf("%f",&v);
    printf("insert time in s :");
    scanf("%f",&t);
    d=v*t;
    printf("distance=%.2f m",d);
}
