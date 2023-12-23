#include<stdio.h>
int digit(int a);
void main()
{
    int n,d;
    printf("Enter the number - ");
    scanf("%d",&n);
    
    int ans=digit(n);

    printf("The number of digit is - %d",ans);
}
int digit(int a)
{
    static int c=0;
    if(a!=0)
    {
        c++;
        digit(a/10);
    }
        return c;
    
    
}