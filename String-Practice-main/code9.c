// find the maximum number of characters in a string.
#include<stdio.h>
#include<string.h>
void main(){
    char s[50]="My name is Ayush Singh";
    strlwr(s);
    char ch;
    int c=0;
    int l=strlen(s);
    printf("Enter the character you want to check -");
    scanf("%c",&ch);
    for(int i=0;i<l;i++)
    {
        if(s[i]==ch)
         c++;
        
    }
    printf("The occurance of %c is %d",ch,c);

}