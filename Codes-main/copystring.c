#include<stdio.h>
#include<string.h>
void main()
{
    char s1[30];
    char s2[30];
    printf("Enter the string - ");
    fgets(s1,sizeof(s1),stdin);
    for (int i=0;i<strlen(s1);i++)
        {
            s2[i]=s1[i];
        }
    printf("The copied string is - %s",s2);
}