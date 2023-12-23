//  extract a substring from a given string.
#include<stdio.h>
#include<string.h>
void main()
{
    char s[100]="my name is Ayush SIngh";
    char sen[10];
    int l=strlen(s);
    int pos,len;
    printf("Enter the position to start extraction - ");
    scanf("%d",&pos);
    printf("Enter the length of substring - ");
    scanf("%d",&len);

    for(int i=0;i<l;i++)
    {
        if(i==pos)
        {
           strncat(sen,&s[i],len);
        }
    }
    for(int i=1;i<(strlen(sen));i++)
    {
        printf("%c",sen[i]);
    }
}