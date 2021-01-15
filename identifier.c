
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char a[10];
int flag, i=1;
printf("\n Enter an identifier:");
gets(a);
flag=1;
if(isalpha(a[0]))
{
 while(a[i]!='\0')
 {
 if(!isdigit(a[i])&&!isalpha(a[i]))
 { // Nut a Digit not a Alphbet
 flag=0;
 break;
 }
 i++;
 }
}
else
 {
 flag=0;
 }
if(flag==0)
{
printf("\n Not a valid identifier");
getchar();
}
else
{
printf("\n Valid identifier");
}
}
