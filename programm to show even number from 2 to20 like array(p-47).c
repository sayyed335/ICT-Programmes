#include<stdio.h>
#define SIZE 10
void main ()
{
    int s[SIZE],j;
    for(j=0;j<=SIZE-1;j++)
        s[j]=2+2*j;
    printf("%s%13s \n","Element","value");
    for(j=0;j<SIZE;j++)
        printf("%7d%13d \n",j,s[j]);


}
