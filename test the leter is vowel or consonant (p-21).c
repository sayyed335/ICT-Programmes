#include<stdio.h>
void main()
{
    char ch;
    printf("enter the leter ");
    ch=getche();
    switch(ch)
    {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
        printf("   is vowel leter \n");
        break;
        default:
            printf("   is a consonant ");

    }
}
