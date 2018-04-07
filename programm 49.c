#include<stdio.h>
void main()
{
    int i,p,n,number[10];
    printf("type ten numbers ");
    for (i=0;i<10;i++)
        scanf("%d",&number[i]);
    p=0;
    n=0;
    for(i=0;i<10;i++)
        if(number[i]>=0)
        p=p+1;
    else
        n=n+1;
    printf("total positive number=%d \n",p);
    printf("total negative number=%d \n",n);

}
