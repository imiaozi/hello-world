#include<stdio.h>
#include<conio.h>
void main()
{
	int n, product;
	printf("输入一位数字（0-9）：");
	scanf("%d", &n);
	for (int i = 1; i <= 10; i++)
	{
		product = i*n;
		printf("%d*%d=%d\n", n, i, product);
	}
	getch();
}