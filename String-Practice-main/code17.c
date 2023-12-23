// find the largest and smallest words in a string. 
#include<stdio.h>
#include<string.h>
void main()
{
    char s[100]="The weather is normal today";
    char s1[50];
    int large=0,small=0,len;
    for(int i=0;i<strlen(s);i++)
    { 
        int sp= strcmp(&s[i]," ");
        if(sp!=0)
        {
            strncat(s1,&s[i],1);
        }
        else
        {
            len=strlen(s1);
        }
        strcpy(s1," ");
    }
    if(len>large)
    {
       large = len;
    }
    else if(len<small)
    {
        small = len;
    }
    printf("%d \n %d",large,small);
}