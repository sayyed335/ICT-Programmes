#include<stdio.h>
void main()

{

    float C,F ;
    int choice;
    printf("1:centigrade to farenheight.");
    printf("2:farenheight to centigrade .");
    printf("enter choice :");
    scanf("%d",& choice);

    if(choice==1)
    {
        printf("ente the value o centigrade:");
        scanf("%f",&C);
        F=9*C/5+32;
        printf("the value of farenheight is %.2f \n",F);

    }
    else
    {
        printf(" enter the value of farenheight :");
        scanf("%f",&F);
        C=(F-32)*5/9;
        printf("the value o centigrade is %.2f \n",C);
        printf("the value o centigrade is %.2f \n",C);

    }
}
