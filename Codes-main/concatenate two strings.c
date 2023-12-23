#include<stdio.h>
#include<string.h>
void main(){
    char s1[50];
    char s2[20];
    // char s3[50];
    printf("Enter the 1st string - ");
    fgets(s1,sizeof(s1),stdin);
    printf("Enter the 2nd string - ");
    fgets(s2,sizeof(s2),stdin);

    strcat(s1,s2);

    printf("\nThe resultant string is - %s",s1);

}