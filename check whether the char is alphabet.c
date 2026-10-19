#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character:");
    ch=getchar();
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("\n The character is an alphabet");
    }
    else
    {
        printf("\n The character is not an alphabet");
    }
}