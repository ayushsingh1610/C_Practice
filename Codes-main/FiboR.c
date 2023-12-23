#include<stdio.h>
int Fibo(int);
int main()
{
    int a=0,b=1,n;
    printf("Enter the number - ");
    scanf("%d",&n);
    printf("Fibonacci series - %d %d",a,b);
    for (int i=2;i<=n;i++)
    printf(" %d",Fibo(i));
    
    return 0;
}
int Fibo(int x)
{
    if(x==0)
    return 0;

    else if(x==1)
    return 1;
    
    else 
    return Fibo(x-1)+Fibo(x-2);
}