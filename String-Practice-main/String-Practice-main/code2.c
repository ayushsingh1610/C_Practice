// separate individual characters from a string.
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50]="my name is Ayush Singh.";
    int l=strlen(s);

    printf("The desired Output is -\n");

    for(int i=0;i<l;i++)
        printf("  %c ",s[i]);
}