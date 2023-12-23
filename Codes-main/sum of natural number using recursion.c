#include<stdio.h>
int sum(int a);
int main()
{
    int n;
    printf("Enter the number - ");
    scanf("%d",&n);

    printf("The sum of natural number till the number - %d ",sum(n));
    return 0;
}
int sum(int a)
{
    if(a!=0)
     return (a+sum(a-1));

     else
     return a;
}
