// ConsoleApplication14.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<stdio.h>

//int main()
//{
//   return 0;
//}


int main()
{
	printf("read the integer from keyboard:-");
	int x, y;
	scanf("%d", &x);
	x <<= 3; //����������
	y = x;
	printf("\n the left shifted data is =%d", y);
	return 0;
	//getch();
}