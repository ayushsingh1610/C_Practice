// compare two strings without using string library functions.
#include<stdio.h>
#include<string.h>
void main(){
    char s1[50]="AYUSH";
    char s2[50]="AYUSH";
    int l=strlen(s1);
    int p=0;
    for(int i=0;i<l;i++)
    {
        if(s1[i]!=s2[i])
        {
            p=1;
            break;
        }
    }
    if(p==1)
    printf("The two string is not same");

    else
    printf("The two string is same");
}