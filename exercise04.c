#include<stdio.h>
#include<conio.h>
void main()
{
	float c, f;
	printf("请输入摄氏温度：");
	scanf("%f", &c);
	f = 1.8*c + 32;
	printf("%f摄氏度=%f华氏度", c, f);
	getch();
}