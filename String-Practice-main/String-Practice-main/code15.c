// remove characters from a string except alphabets.
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50];
    char ss[50];
    printf("Enter the string - ");
    fgets(s,sizeof(s),stdin);
    
    for(int i=0;i<(strlen(s));i++)
        {
            for(char ch='a';ch<='z';ch++)
                {
                 if(s[i]==ch)
                 {
                    strncat(ss,&s[i],1);
                 }
                }
        }
    for(int i=0;i<(strlen(ss));i++)
    {
        printf("%c",ss[i]);
    }
}
