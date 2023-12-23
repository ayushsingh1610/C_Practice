// convert vowels into uppercase characters in a string.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[50]="my name is ayush singh";
    char ss[50]="";
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='a'||s[i]=='e' || s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            char ch=toupper(s[i]);
            strncat(ss,&ch,1);
        }
        else
        strncat(ss,&s[i],1);
    }
    for(int i=0;i<strlen(ss);i++)
    {
    printf("%c",ss[i]);
    }

    
}