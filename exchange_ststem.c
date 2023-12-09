#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include"warehouse.h"
int yuan_shi = 160 * 20;
int jiu_chan = 0;
int xiang_yu = 0;
int xing_chen = 0;
int xing_hui = 0;
void start()
{
	xing_chen = xingchen();
	xing_hui = xinghui();
}
void exchange0()
{
	system("cls");
	gotoxy(30,5);
	printf("请输入您要兑换的数量：");
}
void exchange1()
{
	int a;
	exchange0();
	scanf_s("%d", &a);
	if (a * 160 > yuan_shi)
	{
		gotoxy(30, 6);
		printf("您输入的数字过大");
	}
	else
	{
		jiu_chan += a;
		yuan_shi -= a * 160;
	}
	system("pause");
	if (_kbhit)
	{
		duihuan();
	}
}
void exchange2()
{
	int a;
	exchange0();
	scanf_s("%d", &a);
	if (a * 160 > yuan_shi)
	{
		gotoxy(30, 6);
		printf("您输入的数字过大");
	}
	else
	{
		xiang_yu += a;
		yuan_shi -= a * 160;
	}
	system("pause");
	if (_kbhit)
	{
		duihuan();
	}
}
void exchange3()
{
	int a;
	exchange0();
	scanf_s("%d", &a);
	if (a * 75 > xing_chen)
	{
		gotoxy(30, 6);
		printf("您输入的数字过大");
	}
	else
	{
		jiu_chan += a;
		xing_chen -= a * 75;
	}
	system("pause");
	if (_kbhit)
	{
		duihuan();
	}
}
void exchange4()
{
	int a;
	exchange0();
	scanf_s("%d", &a);
	if (a * 75 > xing_chen)
	{
		gotoxy(30, 6);
		printf("您输入的数字过大");
	}
	else
	{
		xiang_yu += a;
		xing_chen -= a * 75;
	}
	system("pause");
	if (_kbhit)
	{
		duihuan();
	}
}
void exchange5()
{
	int a;
	exchange0();
	scanf_s("%d", &a);
	if (a * 5 > xing_hui)
	{
		gotoxy(30, 6);
		printf("您输入的数字过大");
	}
	else
	{
		jiu_chan += a;
		xing_hui -= a * 5;
	}
	system("pause");
	if (_kbhit)
	{
		duihuan();
	}
}
void exchange6()
{
	int a;
	exchange0();
	scanf_s("%d", &a);
	if (a * 5 > xing_hui)
	{
		gotoxy(30, 6);
		printf("您输入的数字过大");
	}
	else
	{
		xiang_yu += a;
		xing_hui -= a * 5;
	}
	system("pause");
	if (_kbhit)
	{
		duihuan();
	}
}