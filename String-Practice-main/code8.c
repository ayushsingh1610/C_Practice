// count the total number of vowels or consonants in a string.
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50]="My name is Ayush Singh";
    strlwr(s);
    // char s1[50];
    int v=0,co=0;

    int l=strlen(s);

    for(int i=0;i<l;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        v++;

        else if(s[i]>='a' && s[i]<='z')
        co++;
    }
    printf("\nThe number of vowels are = %d",v);
    printf("\nThe number of consonant are = %d",co);
    
}