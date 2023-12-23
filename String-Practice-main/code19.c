// check whether a letter is lowercase or not.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[]="My name is Ayush Singh";
    char ch;

    printf("enter the character - ");
    scanf("%c",&ch);

    if(islower(ch)!=0)
    {
      printf("Character is in lower case");
    }
    else 
    printf("character is not in lower case");
}