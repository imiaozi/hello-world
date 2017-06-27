#include <stdio.h>
#include <conio.h>
void main()
{
	int a, b, s;
	clrscr();
	printf("Enter 2 no:");
	scanf("%d%d", &a, &b);
	s = a + b;
	printf("sum=%d", s);
	getch();
}