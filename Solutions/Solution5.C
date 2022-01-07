/* Write A program to check weather inputed number is Armstrong number or not*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s,sum=0,a;
	clrscr();
	printf("Enter value:");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		s=n%10;
		sum=sum+(s*s*s);
		n=n/10;
	}
	if(sum==a)
	{
		printf("%d  Number Is Armstrong",sum);
	}
	else
	{
		printf("%d Number Is not an Armstrong",sum);
	}
	getch();
}