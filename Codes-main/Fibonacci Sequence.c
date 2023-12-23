#include<stdio.h>
int main()
{
    int a,b,c,n;

    printf("Enter the number -");
    scanf("%d",&n);

    a=0;
    b=1;
    c=a+b;
    printf("Fiboancci series are - %d %d",a,b);
    for (int i=2;i<=n;i++)
    {
     printf(" %d",c);
    a=b;
    b=c;
    c=a+b;
    }
    return 0;
}