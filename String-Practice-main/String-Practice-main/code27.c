// reverse all the vowels present in a given string. Return the newly created string. 
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[50]="aeiou";
    char ss[50]="";

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='a'||s[i]=='e' || s[i]=='i'||s[i]=='o'||s[i]=='u')
        strncat(ss,&s[i],1);
    }
    int l=(strlen(ss)-1);
    for(int i=l;i>=0;i--)
    {
        printf("%c",ss[i]);
    }
}