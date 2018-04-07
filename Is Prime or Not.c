#include<stdio.h>
void main()
{
    int n,i,apple=0;

    printf("Enter a number");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            apple=1;
            break;
        }
    }
    if (apple==0)
        printf("%d Is Prime",n);
    else
        printf("%d Is  not Prime",n);
    return 0;
}
