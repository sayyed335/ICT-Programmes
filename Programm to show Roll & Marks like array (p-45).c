#include<stdio.h>
#define Max 3
void main()
{
    int i,Roll[Max];
    float Marks[Max];
    for(i=0;i<Max;i++)
    {
        printf("\n Enter Roll[%d]:",i);
        scanf("%d",&Roll[i]);
        printf("\n Enter Marks[%d]:",i);
        scanf("%f",&Marks[i]);
    }
    for(i=0; i<Max; i++)
        printf("\n Roll [%d] =%d & Marks[%d]=%.2f",i,Roll[i],i,Marks[i]);
}
