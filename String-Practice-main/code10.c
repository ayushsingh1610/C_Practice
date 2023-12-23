// sort a string array in ascending order.
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50]="my 5na6me59 95is Ayus256h singh";
    strlwr(s);
    char s1[50];
    char s2[50];
    char s3[50];
    int l= strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]!= ' '){
        if(s[i]>='0' && s[i]<='9')
        {
          s1[i]=s[i];
        }
        else if( s[i]>='a' && s[i]<='z')
        {
            s2[i]=s[i];
        }
        }
    }
    int k=strlen(s1);
    int m=0;
    for(int j=0;j<50;j++)
    {
       s3[j]=s1[j];
       if(j>=k)
       {
        s3[j]=s2[m];
        m++;
       }
       printf("%c",s3[j]);
    }
}