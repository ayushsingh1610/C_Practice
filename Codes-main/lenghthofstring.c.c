#include<stdio.h>
#include<string.h>
void main(){
    char s[30];
    int len;

    printf("Enter the string - ");
    fgets(s,sizeof(s),stdin);

    len=strlen(s);

    printf("The length of given string - %d",len);

}