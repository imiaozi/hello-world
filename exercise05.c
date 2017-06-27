#include<stdio.h>
#include<conio.h>
void main()
{
	int s1, s2, s3, s4, s5, sum, per;
	printf("请分别输入五门课的成绩：");
	scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
	sum = s1 + s2 + s3 + s4 + s5;
	per = sum / 5;
	printf("总分：%d,平均分：%d", sum, per);
	getch();
}