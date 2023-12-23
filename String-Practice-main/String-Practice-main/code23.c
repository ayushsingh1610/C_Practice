//  find the largest words in a string.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[50]="Sneha is good";
    char ss[50]="";
    char max[10]="";
    char min[10]="";
    for(int i=0;i<strlen(s);i++)
    {
        if(isspace(s[i])==0)
        {
            strncat(ss,&s[i],1);
        }
        else{
            
            if(strlen(ss)>strlen(max))
            {
                strcpy(max,ss);
            }
            else if(strlen(ss)<strlen(min))
            {
                strcpy(min,ss);
            }
            strcpy(ss," ");
        }
        
    }
    printf("The largest word is- %s",max);
    // for(int i=0;i<strlen(max);i++)
    // {
    //     printf("%c",max[i]);
    // }
    printf("\nThe smallest word is -%s",min);
    // for(int i=0;i<strlen(min);i++)
    // {
    //     printf("%c",min[i]);
    // }
}
