// read a sentence and replace lowercase characters with uppercase and vice versa.
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50]="My Name IS Ayush SINGH";
    // strupr(s);
    int l = strlen(s);
    for(int i=0;i<l;i++)
    {
        int a=(int)s[i];
        if(a>=65 && a<=90)
        a=a+32;
        
        else if(a>=97 && a<=122)
        a=a-32;
        
        s[i]=(char)a;
    }
    for(int i=0;i<l;i++)
    {
        printf("%c",s[i]);
    }
}