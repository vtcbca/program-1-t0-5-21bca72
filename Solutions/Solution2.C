/*Write a Program to Enter any number and check is Palindrome or not */

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r=0,a,s;
	clrscr();
	printf("Enter Value:");
	scanf("%d",&n);
	s=n;
	while(s>0)
	{
		a=s%10;
		r=(r*10)+a;
		s=s/10;
	}
	if(n==r)
	{
		printf("%d is a Palindrome Number.",n);
	}
	else
	{
		printf("%d is not a Palindrome Number.",n);
	}
	getch();
}