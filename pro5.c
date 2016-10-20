#include<stdio.h>
#include<conio.h>
int main()
{
char c;
int a2,b3;
clrscr();
printf("Enter the alphabet ");
scanf("%c",&c);
a2=(c==a||c==e||c==i||c==o||c==u);
b3=(c=A||c==E||c==I||c==O||c==U);
if(a2||b3)
printf("Vowel character");
else
printf("Consonant character");
return 0;
}
