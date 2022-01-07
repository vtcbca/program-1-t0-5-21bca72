/*write a program to print inputed number in reverse*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r=0,a;
	clrscr();
	printf("\n Enter Any Number:");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		r=(r*10)+a;
		n=n/10;
	}
	printf("Reverse Number is %d",r);
	getch();
}