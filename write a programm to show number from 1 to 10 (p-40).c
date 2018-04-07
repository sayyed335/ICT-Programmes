#include<stdio.h>
void main ()
{
    int count=1;
    start:
    if(count>10)
        goto end ;
    printf(" %d ",count);
    ++count;
    goto start ;
    end:
    putchar('\n');
}
