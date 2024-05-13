#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include"warehouse.h"
int yuan_shi = 160 * 20;
int jiu_chan = 0;
int xiang_yu = 0;
int xing_chen = 0;
int xing_hui = 0;
extern xing_hui0, xing_chen0;
int q1 = 0, q2 = 0, q3 = 0, q4 = 0, q5 = 0, q6 = 0;
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
		xing_chen0 -= a * 75;
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
		xing_chen0 -= a * 75;
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
		xing_hui0 -= a * 5;
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
		xing_hui0 -= a * 5;
	}
	system("pause");
	if (_kbhit)
	{
		duihuan();
	}
}
void chongzhi6_1()
{
	gotoxy(20, 9);
	printf("60原石");
	gotoxy(20, 11);
	printf("RMB6.00");
}
void chongzhi6_2()
{
	gotoxy(20, 9);
	printf("60原石(双倍+60)");
	gotoxy(22, 11);
	printf("RMB6.00");
}
void chongzhi30_1()
{
	gotoxy(50, 9);
	printf("300原石(额外赠原石30)");
	gotoxy(52, 11);
	printf("RMB30.00");
}
void chongzhi30_2()
{
	gotoxy(50, 9);
	printf("300原石(双倍+300)");
	gotoxy(52, 11);
	printf("RMB30.00");
}
void chongzhi98_1()
{
	gotoxy(80, 9);
	printf("980原石(额外赠原石110)");
	gotoxy(82, 11);
	printf("RMB98.00");
}
void chongzhi98_2()
{
	gotoxy(80, 9);
	printf("980原石(双倍+980)");
	gotoxy(82, 11);
	printf("RMB98.00");
}
void chongzhi198_1()
{
	gotoxy(20, 16);
	printf("1980原石(额外赠原石260)");
	gotoxy(22, 18);
	printf("RMB198.00");
}
void chongzhi198_2()
{
	gotoxy(20, 16);
	printf("1980原石(双倍+1980)");
	gotoxy(22, 18);
	printf("RMB198.00");
}
void chongzhi328_1()
{
	gotoxy(50, 16);
	printf("3280原石(额外赠原石600)");
	gotoxy(52, 18);
	printf("RMB328.00");
}
void chongzhi328_2()
{
	gotoxy(50, 16);
	printf("3280原石(双倍+3280)");
	gotoxy(52, 18);
	printf("RMB328.00");
}
void chongzhi648_1()
{
	gotoxy(80, 16);
	printf("6480原石(额外赠原石1600)");
	gotoxy(82, 18);
	printf("RMB648.00");
}
void chongzhi648_2()
{
	gotoxy(80, 16);
	printf("6480原石(双倍+6480)");
	gotoxy(82, 18);
	printf("RMB648.00");
}
void wancheng1()
{
	system("CLS");
	if (q1 == 0)
	{
		gotoxy(45, 10);
		printf("成功获得原石+120\n");
		q1 = 1;
		yuan_shi = yuan_shi + 120;
		system("pause");
	}
	else
	{
		gotoxy(45, 10);
		printf("成功获得原石+60\n");
		yuan_shi = yuan_shi + 60;
		system("pause");
	}
	chongzhi();
}
void wancheng2()
{
	system("CLS");
	if (q2 == 0)
	{
		gotoxy(45, 10);
		printf("成功获得原石+600\n");
		q2 = 1;
		yuan_shi = yuan_shi + 600;
		system("pause");
	}
	else
	{
		gotoxy(45, 10);
		printf("成功获得原石+330\n");
		yuan_shi = yuan_shi + 330;
		system("pause");
	}
	chongzhi();
}
void wancheng3()
{
	system("CLS");
	if (q3 == 0)
	{
		gotoxy(45, 10);
		printf("成功获得原石+1960\n");
		q3 = 1;
		yuan_shi = yuan_shi + 1960;
		system("pause");
	}
	else
	{
		gotoxy(45, 10);
		printf("成功获得原石+1090\n");
		yuan_shi = yuan_shi + 1090;
		system("pause");
	}
	chongzhi();
}
void wancheng4()
{
	system("CLS");
	if (q4 == 0)
	{
		gotoxy(45, 10);
		printf("成功获得原石+3960\n");
		q4 = 1;
		yuan_shi = yuan_shi + 3930;
		system("pause");
	}
	else
	{
		gotoxy(45, 10);
		printf("成功获得原石+2240\n");
		yuan_shi = yuan_shi + 2240;
		system("pause");
	}
	chongzhi();
}
void wancheng5()
{
	system("CLS");
	if (q5 == 0)
	{
		gotoxy(45, 10);
		printf("成功获得原石+6560\n");
		q5 = 1;
		yuan_shi = yuan_shi + 6560;
		system("pause");
	}
	else
	{
		gotoxy(45, 10);
		printf("成功获得原石+3880\n");
		yuan_shi = yuan_shi + 3880;
		system("pause");
	}
	chongzhi();
}
void wancheng6()
{
	system("CLS");
	if (q6 == 0)
	{
		gotoxy(45, 10);
		printf("成功获得原石+12960\n");
		q6 = 1;
		yuan_shi = yuan_shi + 12960;
		system("pause");
	}
	else
	{
		gotoxy(45, 10);
		printf("成功获得原石+8080\n");
		yuan_shi = yuan_shi + 8080;
		system("pause");
	}
	chongzhi();
}
void chongzhi()
{
	system("CLS");
	if (q1 == 0)
	{
		chongzhi6_2();
	}
	else
	{
		chongzhi6_1();
	}
	if (q2 == 0)
	{
		chongzhi30_2();
	}
	else
	{
		chongzhi30_1();
	}
	if (q3 == 0)
	{
		chongzhi98_2();
	}
	else
	{
		chongzhi98_1();
	}
	if (q4 == 0)
	{
		chongzhi198_2();
	}
	else
	{
		chongzhi198_1();
	}
	if (q5 == 0)
	{
		chongzhi328_2();
	}
	else
	{
		chongzhi328_1();
	}
	if (q6 == 0)
	{
		chongzhi648_2();
	}
	else
	{
		chongzhi648_1();
	}
	gotoxy(100, 18);
	printf("退出");
	int flag1 = 0;
	char key2;
	while (1)
	{
		switch (flag1)
		{
		case 0:
			gotoxy(18, 11);
			printf("◆");
			gotoxy(50, 11);
			printf("  ");
			gotoxy(80, 11);
			printf("  ");
			gotoxy(20, 18);
			printf("  ");
			gotoxy(50, 18);
			printf("  ");
			gotoxy(80, 18);
			printf("  ");
			gotoxy(98, 18);
			printf("  ");
			key2 = _getch();
			if (key2 == 13)
			{
				wancheng1();
			}
			break;
		case 1:
			gotoxy(18, 11);
			printf("  ");
			gotoxy(50, 11);
			printf("◆");
			gotoxy(80, 11);
			printf("  ");
			gotoxy(20, 18);
			printf("  ");
			gotoxy(50, 18);
			printf("  ");
			gotoxy(80, 18);
			printf("  ");
			gotoxy(98, 18);
			printf("  ");
			key2 = _getch();
			if (key2 == 13)
			{
				wancheng2();
			}
			break;
		case 2:
			gotoxy(18, 11);
			printf("  ");
			gotoxy(50, 11);
			printf("  ");
			gotoxy(80, 11);
			printf("◆");
			gotoxy(20, 18);
			printf("  ");
			gotoxy(50, 18);
			printf("  ");
			gotoxy(80, 18);
			printf("  ");
			gotoxy(98, 18);
			printf("  ");
			key2 = _getch();
			if (key2 == 13)
			{
				wancheng3();
			}
			break;
		case 3:
			gotoxy(18, 11);
			printf("  ");
			gotoxy(50, 11);
			printf("  ");
			gotoxy(80, 11);
			printf("  ");
			gotoxy(20, 18);
			printf("◆");
			gotoxy(50, 18);
			printf("  ");
			gotoxy(80, 18);
			printf("  ");
			gotoxy(98, 18);
			printf("  ");
			key2 = _getch();
			if (key2 == 13)
			{
				wancheng4();
			}
			break;
		case 4:
			gotoxy(18, 11);
			printf("  ");
			gotoxy(50, 11);
			printf("  ");
			gotoxy(80, 11);
			printf("  ");
			gotoxy(20, 18);
			printf("  ");
			gotoxy(50, 18);
			printf("◆");
			gotoxy(80, 18);
			printf("  ");
			gotoxy(98, 18);
			printf("  ");
			key2 = _getch();
			if (key2 == 13)
			{
				wancheng5();
			}
			break;
		case 5:
			gotoxy(18, 11);
			printf("  ");
			gotoxy(50, 11);
			printf("  ");
			gotoxy(80, 11);
			printf("  ");
			gotoxy(20, 18);
			printf("  ");
			gotoxy(50, 18);
			printf("  ");
			gotoxy(80, 18);
			printf("◆");
			gotoxy(98, 18);
			printf("  ");
			key2 = _getch();
			if (key2 == 13)
			{
				wancheng6();
			}
			break;
		case 6:
			gotoxy(18, 11);
			printf("  ");
			gotoxy(50, 11);
			printf("  ");
			gotoxy(80, 11);
			printf("  ");
			gotoxy(20, 18);
			printf("  ");
			gotoxy(50, 18);
			printf("  ");
			gotoxy(80, 18);
			printf("  ");
			gotoxy(98, 18);
			printf("◆");
			key2 = _getch();
			if (key2 == 13)
			{
				show();
			}
		}
		switch (key2)
		{
		case'A':
		case'a':
			if (flag1 > 0 && flag1 != 3)
				flag1--;
			break;
		case'D':
		case'd':
			if (flag1 != 2 && flag1 < 6)
				flag1++;
			break;
		case'W':
		case'w':
			if (flag1 < 6)
				flag1 = flag1 - 3;
			break;
		case'S':
		case's':
			if (flag1 < 3)
				flag1 = flag1 + 3;
			break;
		}
	}
}