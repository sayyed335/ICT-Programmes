#include<stdio.h>
void main()
{
    char ch;
    printf("enter the number from 0 to 9:");
    ch=getche()
    ;
    switch (ch)
    {
    case '0':
        printf("\n zero");
        break;
    case '1':
        printf("\n one");
        break;
    case '2':
        printf("\n two ");
        break;
    case '3':
        printf("\n three");
        break;
    case '4':
        printf("\nfour");
        break;
    case '5':
        printf("\n five");
        break;
        case '6':
        printf("\n six");
        break;
         case '7':
        printf("\n seven");
        break;


         case '8':
        printf("\n eight");
        break;
         case '9':
        printf("\n nine");
        break;

         default:
            printf("you did not enter number from 0 to 9");




    }
}
