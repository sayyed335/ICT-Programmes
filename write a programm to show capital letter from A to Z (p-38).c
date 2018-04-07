#include<stdio.h>
void main()

{
    int ch=65; ///the ASKI value A=64
    do
    {
        printf("%c",ch);
        ch++;
    }
    while ((ch>='A')&& (ch<='z'));
}
