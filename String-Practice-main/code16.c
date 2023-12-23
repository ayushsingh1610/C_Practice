//  combine two strings manually.
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50]="My name is ";
    char s2[50]="Ayush singh";
    char s3[50];
    int p=0;
    for(int i=0;i<sizeof(s3);i++)
    {
       if(i<strlen(s1))
       {
       s3[i]=s1[i];
       }
       else if(i>=strlen(s1) && i<sizeof(s3))
       {
       s3[i]=s2[p];
       p++;
       }
    }
    printf("The concatenated string is - \n");
    puts(s3);
    // strcat(s1,s2);
    // puts(s1);
}