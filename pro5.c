#include<stdio.h>
#include<conio.h>
int main()
{
char c;
clrscr();
printf("Enter the alphabet ");
scanf("%c",&c);
if((c==a||c==e||c==i||c==o||c==u)||(c==A||c==E||c==I||c==O||c==U))
printf("Vowel character");
else
printf("Consonant character");
return 0;
}
