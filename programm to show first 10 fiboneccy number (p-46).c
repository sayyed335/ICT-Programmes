#include<stdio.h>
#define max 10
void main()
{
    int fibo[max],i;
    fibo[0]=1;
    fibo[1]=1;
    printf("\n First 10 consecutive fibonacci number  ");
    for(i=2;i<=max;i++)
        fibo [i]=fibo[i-2]+fibo [i-1];
     for (i=0;i<max;i++)
     printf(" %d ",fibo [i]);
}
