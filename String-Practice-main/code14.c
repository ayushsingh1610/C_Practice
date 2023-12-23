// check whether a substring is present in a string.
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50];
    char ss[50];
    char s1[50];
    int k=0;
    printf("Enter the string - ");
    fgets(s,sizeof(s),stdin);
    printf("Enter the substring - ");
    fgets(ss,sizeof(ss),stdin);
    for(int i=0;i<(strlen(s));i++)
    {
        if(s[i]==ss[k])
        {
             strncat(s1,&s[i],1);
             k++;
        }
    }
    int p=strcmp(s1,ss);
    if(p==0)
    printf("The substring is present ");
    else 
    printf("The substring is not present ");
}