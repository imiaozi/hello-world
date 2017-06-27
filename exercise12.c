#include<stdio.h>
void main()
{
	int year;
	printf("please enter a year:");
	scanf("%d", &year);
	if (year % 400 == 0)
		printf("year %d is a leap year", year);
	else if ((year % 100 == 0)&(year % 400 != 0))
		printf("year %d is not a leap year", year);
	else if (year % 4 == 0)
		printf("year %d is a leap year", year);
	getch();
}