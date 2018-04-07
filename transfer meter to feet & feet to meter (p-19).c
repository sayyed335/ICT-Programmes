#include<stdio.h>
main()
{
    float num;
    int choice ;
    printf("1:feet to meter ,2:meter to feet");
     printf("enter the choice");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("enter the number in feet ");
        scanf("%f",&num);
        printf("meter:%.3f\n",num/3.28);
    }
    else
        {printf("enter the number in meter ");
       scanf("%f",&num);
    printf("feet:%.3f\n",num*3.28);

    }

}
