//  replace each lowercase letter with the same uppercase letter of a given string. Return the newly created string.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[50]="Sneha Verma";
    char ss[50]="";

    for(int i=0;i<strlen(s);i++)
    {
        putchar(toupper(s[i]));
    }
}