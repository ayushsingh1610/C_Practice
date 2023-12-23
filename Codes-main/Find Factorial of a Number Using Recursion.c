#include<stdio.h>
int fac(int a);
int main()
{
    int n;
    printf("Enter the number - ");
    scanf("%d",&n);
    printf("The factorial of number is - %d",fac(n));
    return 0;

}
int fac(int a)
{
    if(a>0)
    return a*fac(a-1);

     else 
     return 1;
}