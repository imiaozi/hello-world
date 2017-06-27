#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c;
	printf("请输入三个数字，我会找出其中最大的数：");
	scanf("%d%d%d", &a, &b, &c);
	if ((a > b) && (a > c))
		printf("%d最大", a);
	if ((b > c) && (b > a))
		printf("%d最大", b);
	if ((c > a) && (c > b))
		printf("%d最大", c);
	getch();
}