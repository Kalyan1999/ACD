
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int flag=0,i,j;
 char
keyword[32][10]={"auto","double","int","struct","break","else","long","switch", "case","enum","register","typedef","char","extern","return","union","const","float","short","unsigned","continue","for","signed",
"void","default","goto","sizeof","voltile","do","if","static","while"},string[10];


 printf("Enter the String:\n");
 gets(string);
 for(i=0;i<32;i++)
 {
 j=strcmp(string, keyword[i]);
 if(j==0)
 flag=1;
 }
 if(flag==0)
 printf("%s is not a keyword.",string);
 else
 printf("%s is a keyword.",string);
 getch();
}
