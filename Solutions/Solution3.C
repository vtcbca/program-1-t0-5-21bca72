/*write a progarm to enter any number & check it is prime or not
Date:22\12\2021 */

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n;
	clrscr();
	printf("\n Enter any Value:"),
	scanf("%d",&n);
	clrscr();
	for(a=2;a<=(n-1);a++)

		if(n%a==0)
		break;
		if(a==n)
		{
		printf("\n It is a prime number");
		}
		else
		{
		printf("\n It is not a prime number");
		}


	getch();
}


