#include<stdio.h>
void main()
{
    int n,n1,r,sum=0;

    printf("Enter the number= ");
    scanf("%d", &n);
    n1=n;
    while(n>0)
    {
        r=n%10;
        sum = (sum*10)+r;
        n=n/10;
    }

    if (sum==n1)
    {
        printf("The number is palindrome = %d",n1);
    }
    else 
    {
        printf("The number is not a palindrome = %d",n1);
    }
}