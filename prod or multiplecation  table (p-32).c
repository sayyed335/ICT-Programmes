#include<stdio.h>
void main ()
{
    int i,n,prod
    ;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        prod=n*i ;
        printf("%d*%d=%d\n",n,i,prod);
    }
}
