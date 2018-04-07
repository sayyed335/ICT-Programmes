#include<stdio.h>
void main()
{
    int a,b,x;
    printf("enter two integer numbers.");
    scanf("%d %d",&a ,&b);

    if(a<b)
        x=a;
    else  x=b;
    again: if(a%x==0 && b%x==0)
    printf("the GCD of %d and %d is %d",a,b,x );
    else
        {x=x-1;
    goto again;}

}
