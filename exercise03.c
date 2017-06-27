#include<stdio.h>
#include<conio.h>
#include<Windows.h>

void main()
{
	int p, r, t, si;
	system("cls");
	printf("enter principle,Rate of interest & time to find simple interest:");
	scanf("%d%d%d", &p, &r, &t);
	si = p*r*t / 100;
	printf("simple interes=%d", si);
	getch();
}