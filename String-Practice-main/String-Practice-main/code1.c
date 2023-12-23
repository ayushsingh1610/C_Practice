//  length of a string without using library functions. 
#include<stdio.h>
void main(){
    char s[50]="My name is Ayush singh.";
    int l=0;

    for(int i=0;i<50;i++)
    {
        l++;
        if(s[i]=='.')
        {
            
            break;
        }
    }
    printf("The length of the given string is %d",l);
}