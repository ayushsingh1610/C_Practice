#include<stdio.h>
#include<string.h>
#include<math.h>
int power(int,int );
void main()
{
    int n,p;
    printf("Number - ");
    scanf("%d",&n);
    printf("Power - ");
    scanf("%d",&p);
    int ans=power(n,p);
    printf("The result is - %d",ans);
}
int power (int a, int b){
    if(b!=0)
    return (a*power(a, b-1 ));

    else
    return 1;

}