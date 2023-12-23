// count the number of punctuation characters present in a string.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[50];
    int c=0;

    printf("Enter the string - ");
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        if(ispunct(s[i]))
        {
            c++;
        }
    }
    printf("Frequency = %d",c);
}