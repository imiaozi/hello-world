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
		printf("�ܶ�");
		break;
	case 'w':
	case 'W':
		printf("����");
		break;
	case 'h':
	case 'H':
		printf("����");
		break;
	case 'f':
	case 'F':
		printf("����");
		break;
	case 's':
	case 'S':
		printf("����");
		break;
	case 'u':
	case 'U':
		printf("������");
		break;
	default:
		printf("wrong input.");
		break;
	}
	getch();
}