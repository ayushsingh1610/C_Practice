// count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50]="my name is 1 ayush#$ singh";
    int l=strlen(s);
    // char s[50]=strupr(s);
    int a=0,d=0,sp=0,space=1;
    for(int i=0;i<l;i++)
    {
        if(s[i]>='a'&& s[i]<='z')
        a++;

        else if(s[i]>='0' && s[i]<= '9')
        d++;

        else if(s[i]==' ')
        space++;

        else
        sp++;
    }
    printf("The number of alphabets are - %d\n",a);
    printf("The number of digits are - %d\n",d);
    printf("The number of words are - %d\n",space);
    printf("The number of special character are - %d",sp);
}