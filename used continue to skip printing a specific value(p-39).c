          //output
/// 1235678910
///used continue to skip printing the value 4.
#include<stdio.h>
void main ()
{
    int x;
    for (x=1;x<=10;x++)
    {
        if(x==4) 
        continue;  ///the continue send to the loop to increase the value again
        printf("%d",x);
        
    }
       printf("\n used continue to skip printing the value 4.\n");

}
