// // find the number of times a given word 'the' appears in the given string.
// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char s[100]="the article  the  is  the  important  part  of  the  grammer  ";
//     char s1[20];
//     char sen[10]="the";
//     char s3[10];
//     int c=0,ans;
//     int l=strlen(s);
    
//     for(int i=0;i<l;i++)
//     {
//         strncat(s1,&s[i],1);
//         // if(s[i]==' ')
//         // {
//         ans = strcmp(s1,sen);
//         if(ans== 0)
//         {
//             c=c+1;
//         }
//         strcpy(s1," ");
//     }
//     printf("%d",ans);
//     printf("\n%d\n",c);
//     puts(s1);
// }
// #include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
    char s[50];
    char sen[50];
    char s1[50]="";
    int c=0,p=0;
	printf("Please input any string=");
	gets(s);
	printf("Please input word=");
	gets(sen);	
	strcat(s," ");
	strlwr(s);
	strlwr(sen);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]!=' ')
        {
    	 s1[p]=s[i];
    	 p++;
        }

    	else if(s[i]==' ')
    	{
    	s1[p]='\0';	
    	int ans=strcmp(s1,sen);
    	
			if(ans==0)
    		{
        	c++;
    		}
    	strcpy(s1,"");	
    	p=0;
    	}
  	}    
	printf("Frequency=%d",c);
// 	getch();
}