#include<stdio.h>
#include<conio.h>
void main()
{
	int n, a, r = 0;
	printf("������һ�����֣��һ����ת��Ϊ����������һ����");
	scanf("%d", &n);
	while (n >= 1)
	{
		a = n % 10;
		r = a + r * 10;
		n = n / 10;
	}
	printf("ת��������Ϊ��%d", r);
	getch();
}