// ConsoleApplication14.cpp : 定义控制台应用程序的入口点。
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
	x <<= 3; //工作不正常
	y = x;
	printf("\n the left shifted data is =%d", y);
	return 0;
	//getch();
}