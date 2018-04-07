#include<stdio.h>
void main()
{
    int n,counter=1;
    printf(" enter the total number of value :");
     scanf(" %d ",&n);
     do
     {
         printf(" %d ",counter);

     }
     while (++counter <= n);

}
