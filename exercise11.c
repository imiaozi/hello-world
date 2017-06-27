#include<stdio.h>
void main()
{
	int a, b;
	printf("请输入两个数a & b：");
	scanf("%d%d", &a, &b);
	(a > b) ? printf("a is greater") : printf("b is greater");
	getch();
}