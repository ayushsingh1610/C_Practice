// copy one string to another string.
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50]="My name is ayush singh";
    char s2[50];
    int l=strlen(s1);

    for(int i=0;i<l;i++)
    {
        s2[i]=s1[i];
    }
    printf("The copied string is -\n");
    for(int i=0;i<l;i++)
    {
        printf("%c",s2[i]);
    }
}