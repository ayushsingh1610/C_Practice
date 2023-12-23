#include<stdio.h>
int mul(int);
void main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    mul(n);
}
int mul(int p)
{
    int i;
    for(i=1;i<=10;i++){
    printf("%d * %d = %d\n",p,i,(p*i));
    }
    return 0;
}