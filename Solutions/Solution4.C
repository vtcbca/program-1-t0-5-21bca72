/* write a program to print fiboncci series */

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0,d=1,e;
	clrscr();
	printf("\n enter a number:");
	scanf("%d",&b);
	printf("\n Fiboncci Series: %d",c);
	e=d+c;
	for(a=3;a<=b;a++)
	{
		printf("%d",e);
		d=c;
		c=e;
		e=d+c;
	}
	getch();
}