#include<stdio.h>
void main()
{char ch;
printf("enter A,a,B,b:");
ch=getche();
switch (ch)
{
   case'a':
   case'A':
   case'B':
   case'b':
printf("you have written a,A,B,b");
break;
default:
printf("you have not written a,A B,b \n");
  }

}
