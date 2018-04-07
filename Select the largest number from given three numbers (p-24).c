#include<stdio.h>
void main()
{
    int num1 ,num2 ,num3;
    printf("enter the number A : ");
    scanf("%d",& num1);
     printf("enter the number B : ");
    scanf("%d",& num2);
     printf("enter the number C: ");
    scanf("%d",& num3);
    if((num1>num2)&&(num1>num3))
        printf("\n %d is the largest number.",num1);
    else if ((num2>num1)&&(num2>num3))
        printf("\n %d is the largest number :",num2);
        else
        printf("\n %d is the largest number .",num3);
}
