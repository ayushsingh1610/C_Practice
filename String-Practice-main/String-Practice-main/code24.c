// count each character in a given string.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[50]="AAYUSH";
    int c=0;
    for(int i=0;i<strlen(s);i++)
    {
        for(int j=0;j<(strlen(s));j++)
        {
            if(s[i]==s[j])
            {
                c++;
            }
        }
        printf("%c \t %d\n",s[i],c);
        c=0;
    }
}