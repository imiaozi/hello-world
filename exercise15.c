#include<stdio.h>
void main()
{
	char ch;
	printf("input m for monday\nt for tuesday\nw for wednesday\nh for thursday\nf for friday\ns for saturday\nu for sunday\n");
	scanf("%ch", &ch);
	switch (ch)
	{
	case 'm':
	case 'M':
		printf("Monday");
		break;
	case 't':
	case 'T':
		printf("周二");
		break;
	case 'w':
	case 'W':
		printf("周三");
		break;
	case 'h':
	case 'H':
		printf("周四");
		break;
	case 'f':
	case 'F':
		printf("周五");
		break;
	case 's':
	case 'S':
		printf("周六");
		break;
	case 'u':
	case 'U':
		printf("星期天");
		break;
	default:
		printf("wrong input.");
		break;
	}
	getch();
}