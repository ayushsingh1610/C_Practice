// count the total number of words in a string.
#include<stdio.h>
#include<string.h>
void main(){
    char s[50]="my name is Ayush singh ";
    int c=0;
    int l=strlen(s);

    printf("The total number is - ");
    for(int i=0;i<l;i++)
    {
        if(s[i]==' ')
        c++;
    }
    printf("%d",c);
}
