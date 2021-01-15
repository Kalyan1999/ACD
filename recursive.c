#include<stdio.h>
#include<ctype.h>
#include<string.h>
void Tprime();
void Eprime();
void E();
void check();
void T();

char expression[10];
int count, flag;

int main()
{
 count = 0;
 flag = 0;
 printf("\nEnter an Algebraic Expression:\t");
 scanf("%s", expression);
 E();
 if((strlen(expression) == count) && (flag == 0))
 {
 printf("\nThe Expression %s is Valid\n", expression);
 }
 else
 {
 printf("\nThe Expression %s is Invalid\n", expression);
 }
}

void E()
{
 T();
 Eprime();
}
void T()
{
 check();
 Tprime();
}

