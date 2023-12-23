// find the length of the longest substring of a given string without repeating characters.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[50]="abcdefgghh";
    char ss[50]="";

    for(int i=0;i<strlen(s);i++)
    {
    if(s[i]!=s[i+1])
    strncat(ss,&s[i],1);
    
    else
    break;
    }
    printf("Length of substring %s is - %d",ss,strlen(ss));
}