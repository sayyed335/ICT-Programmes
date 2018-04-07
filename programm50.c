#include<stdio.h>
void main()
{
    int i,number [5];
    printf("enter the value of array elements ");
    for(i=0;i<5;i++)
        scanf("%d",&number[i]);
    printf("show the number in revers order ");
    for(i=4;i>=0;i--)
        printf("%5d",number [i]);

}
