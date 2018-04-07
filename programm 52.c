#include<stdio.h>
#define row 10
#define col 10

main()
{
    int i,j,r,c;
    int mul [row] [col];
    printf("\t\t==============\n");
    printf("\t\multiplication table\n  ");
    printf("\t\t==============\n        ");
    for (  j= 1; j<=col;  j++)
    printf("%4d",  j);
    printf("\n      ==============");
    printf("=================\n");
    for   ( i=  0;  i<row;   i++)
    {
        r= i+1;
        printf("%2d | ",r);
        for( j=1;  j<=col;  j++)
            {
                c= j;
                mul[i] [j]=r*c;
                printf("%4d",mul [i] [j]);


            }
    printf("\n");
    }

}
