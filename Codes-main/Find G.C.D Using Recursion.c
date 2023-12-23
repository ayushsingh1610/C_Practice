#include<stdio.h>
int gcd(int n1,int n2);
int main()
{
    int n1,n2;
    printf("Enter the both number - ");
    scanf("%d %d",&n1,&n2);
    if (n1<n2)
    {
        int temp=n1;
        n1=n2;
        n2=temp;
    }
    printf("The GCD of number %d and %d is - %d",n1,n2,gcd(n1,n2));
    return 0;

}
int gcd(int n1,int n2)
{
    if(n2!=0)
    return gcd(n2,n1%n2);
    else
    return n1; 
}