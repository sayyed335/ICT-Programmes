#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter number of array size: ");
    scanf("%d",&n);
    int number[n];
    printf("enter the value of array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&number[i]);
    printf("show the numbers in revers order: ");
    for (i=n-1;i>=0;i--)
        printf("%d ",number[i]);
}
