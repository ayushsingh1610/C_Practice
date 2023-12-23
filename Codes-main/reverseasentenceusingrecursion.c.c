#include<stdio.h>
void rev();
int main(){
    printf("Enter the sentence -");
    rev();
    return 0;
}
void rev()
{
    char c;
    scanf("%c",&c);
    if(c!='\n')
    {
        
        printf("%c",c);
        rev();
        
    }
}