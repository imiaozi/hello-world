#include<stdio.h>
#include<conio.h>
void main()
{
	int s1, s2, s3, s4, s5, sum, per;
	printf("��ֱ��������ſεĳɼ���");
	scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
	sum = s1 + s2 + s3 + s4 + s5;
	per = sum / 5;
	printf("�ܷ֣�%d,ƽ���֣�%d", sum, per);
	getch();
}