#include<stdio.h>
int get_sqr(void);
void main ()
{
    int sqr;
    sqr=get_sqr();
    printf("Square of the number is %d ",sqr);
    return 0;

}
 int get_sqr(void)
 {
     int num;
     printf("enter the number: ");
     scanf("%d",&num);
     return num*num;
 }
