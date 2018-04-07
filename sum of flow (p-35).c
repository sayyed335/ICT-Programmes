#include<stdio.h>
void main ()
{
    int s=0,a=1,n;
    printf("enter the total number of value :");
    scanf ("%d ",&n);
    while(a<=n)

    {
        s=s+a ;
        a++;
    }
    printf("the sum of value is %d  \n.", s);

}
