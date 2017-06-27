#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b;
	printf("不用第三个变量交换两个变量的值：\n请输入两个数");
	scanf("%d%d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("交换后的两个数：%d,%d", a, b);
	getch();
}