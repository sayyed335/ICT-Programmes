#include<stdio.h>
void main()
{
    int year ;
    printf("enter the year");
    scanf("%d",&year);
    if (year%400==0||(year%100!=0&&year%4==0))
    printf("%dis a leap year ",&year);
    else printf("%d is not leap year",&year);
}
