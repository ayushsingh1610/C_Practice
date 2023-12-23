#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool armstrong(int a, int k);
bool prime(int b);
int main()
{
    int n,d;
    printf("Enter the number - ");
    scanf("%d",&n);

    printf("Enter the number of digit in n - ");
    scanf("%d",&d);

    bool x = armstrong(n,d);
    bool y = prime(n);

    if (x == true)
    {
        printf("The number is armstrong - %d",n);
    }
    else if (y ==true)
    {
        printf("The number is prime - %d",n);
    }
    else if (x == true && y == true)
    {
        printf("The number is both prime and armstrong - %d",n);
    }
    else 
    {
        printf("The number is neither prime nor armstrong");
    }
    return 0;
}
bool armstrong(int a,int k)
{
    int sum=0;
    int a1=a;

    while (a>0)
        {
            int r=a%10;
            int c=pow(r,k);
            sum=sum+c;
            a=a/10;
        }
    if (sum == a1)
    {
        return true ;
    }
    else 
    {
        return false;
    }
}
bool prime(int b)
{
    int c=0;
    for(int i=1;i<b;i++)
        {
            if(b%i==0)
            {
                 c++;
            }
        }
    if (c==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}