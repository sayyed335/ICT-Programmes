#include<stdio.h>
void main ()
{
    int a,b,x;
    printf("enter the two numbers.");
    scanf("%d %d",&a,&b);
    if (a>b)
        x=a;
    else x=b;
    again: if(x%a==0 && x%b==0)
    printf("the LMC of %d and %d is %d ",a,b,x);
    else
    {
        x=x+1;
        goto again;
    }
}
