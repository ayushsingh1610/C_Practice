// split strings by space into words.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[]="Sneha is a girl";
    for(int i=0;i<strlen(s);i++)
    {
        if(isspace(s[i])==0)
         printf("%c",s[i]);
        
        else
        printf("\n");
    }
}