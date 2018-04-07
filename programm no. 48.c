#include<stdio.h>
#define size 5
void main()
{
    int a[size]={1,2,3,4,5};
    int i,total=0;
    for(i=0;i<=size-1;i++)
    total+=a[i];
    printf("total of array element values is %d\n",total);

}
