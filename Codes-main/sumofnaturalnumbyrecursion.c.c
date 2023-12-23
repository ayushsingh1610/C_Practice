// Sum of natural number by using recursion 
#include<stdio.h>
int sum(int a)
{
    if(a==0)
    return 0;

    else 
    return a+sum(a-1);
}
int main()
{
    int n,ans;
    printf("Enter the number - ");
    scanf("%d",&n);

    ans=sum(n);
    printf("The result of sum is - %d",ans);
    return 0;
}