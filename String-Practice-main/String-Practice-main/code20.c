// read a file and remove the spaces between two words of its content.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[]="Sneha is a good girl";
    char s1[100];
    for(int i=0;i<strlen(s);i++)
    {
        if(isspace(s[i])==0)
        {
            strncat(s1,&s[i],1);
        }
        else
        {
            continue;
        }
    }
    puts(s1);
}