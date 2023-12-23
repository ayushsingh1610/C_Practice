// print individual characters of a string in reverse order. 
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50]="My name is Ayush Singh";
    int l =strlen(s);

    printf("The reverse order is -\n");

    for(int i=l;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}