#include<stdio.h>
#include<conio.h>
void main()
{
	int n, a, r = 0;
	printf("请输入一串数字，我会把它转变为倒过来的另一串：");
	scanf("%d", &n);
	while (n >= 1)
	{
		a = n % 10;
		r = a + r * 10;
		n = n / 10;
	}
	printf("转变后的数字为：%d", r);
	getch();
}