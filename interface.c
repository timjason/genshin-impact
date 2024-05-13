#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include"warehouse.h"
#include"time.h"
int high, width;
extern yuan_shi, xing_chen, xing_chen0, xing_hui, xing_hui0, jiu_chan, xiang_yu;
void show();
void gotoxy(int x, int y);
void startup();
void choukache();
void duihuan();
void gotoxy(int x, int y)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(handle, pos);
}
void startup()
{
	high = 1;
	width = 2;
}
void choukache()
{
	system("CLS");
	gotoxy(53, 10);
	printf("角色活动池");
	gotoxy(53, 13);
	printf("武器池");
	gotoxy(53, 16);
	printf("常驻池");
	gotoxy(53, 19);
	printf("返回开始页面");
	int flag2 = 0;
	char key3 = 0;
	while (1)
	{
		switch (flag2)
		{
		case 0:
			gotoxy(51, 10);
			printf("◆");
			gotoxy(51, 13);
			printf("  ");
			gotoxy(51, 16);
			printf("  ");
			gotoxy(51, 19);
			printf("  ");
			key3 = _getch();
			if (key3 == 13)
			{
				upchou();
			}
			break;
		case 1:
			gotoxy(51, 10);
			printf("  ");
			gotoxy(51, 13);
			printf("◆");
			gotoxy(51, 16);
			printf("  ");
			gotoxy(51, 19);
			printf("  ");
			key3 = _getch();
			if (key3 == 13)
			{
				wuchou();
			}
			break;
		case 2:
			gotoxy(51, 10);
			printf("  ");
			gotoxy(51, 13);
			printf("  ");
			gotoxy(51, 16);
			printf("◆");
			gotoxy(51, 19);
			printf("  ");
			key3 = _getch();
			if (key3 == 13)
			{
				changchou();
			}
			break;
		case 3:
			gotoxy(51, 10);
			printf("  ");
			gotoxy(51, 13);
			printf("  ");
			gotoxy(51, 16);
			printf(" ");
			gotoxy(51, 19);
			printf("◆");
			key3 = _getch();
			if (key3 == 13)
			{
				show();
			}
			break;
		}

		switch (key3)
		{
		case 's':
		case 'S':
			if (flag2 < 4)
				flag2++;
			break;
		case 'W':
		case 'w':
			if (flag2 > 0)
				flag2--;
			break;
		}

	}
}
void duihuan()
{
	start();
	system("CLS");
	printf("原石:");
	printf("%d", yuan_shi);
	gotoxy(25, 0);
	printf("无主的星尘:");
	printf("%d", xing_chen);
	gotoxy(50, 0);
	printf("无主的星辉:");
	printf("%d", xing_hui);
	gotoxy(75, 0);
	printf("纠缠之缘:");
	printf("%d", jiu_chan);
	gotoxy(100, 0);
	printf("相遇之缘:");
	printf("%d", xiang_yu);
	gotoxy(53, 10);
	printf("原石兑换纠缠之缘");
	gotoxy(53, 13);
	printf("原石兑换相遇之缘");
	gotoxy(53, 16);
	printf("无主的星尘兑换纠缠之缘");
	gotoxy(53, 19);
	printf("无主的星尘兑换相遇之缘");
	gotoxy(53, 22);
	printf("无主的星辉兑换纠缠之缘");
	gotoxy(53, 25);
	printf("无主的星辉兑换相遇之缘");
	gotoxy(53, 28);
	printf("返回开始页面");
	int flag3 = 0;
	char key3;
	while (1)
	{
		switch (flag3)
		{
		case 0:
			gotoxy(51, 10);
			printf("◆");
			gotoxy(51, 13);
			printf("  ");
			gotoxy(51, 16);
			printf("  ");
			gotoxy(51, 19);
			printf("  ");
			gotoxy(51, 22);
			printf("  ");
			gotoxy(51, 25);
			gotoxy(53, 28);
			printf("返回开始页面");
			printf("  ");
			key3 = _getch();
			if (key3 == 13)
			{
				exchange1();
			}
			break;
		case 1:
			gotoxy(51, 10);
			printf("  ");
			gotoxy(51, 13);
			printf("◆");
			gotoxy(51, 16);
			printf("  ");
			gotoxy(51, 19);
			printf("  ");
			gotoxy(51, 22);
			printf("  ");
			gotoxy(51, 25);
			printf("  ");
			gotoxy(51, 28);
			printf("  ");
			key3 = _getch();
			if (key3 == 13)
			{
				exchange2();
			}
			break;
		case 2:
			gotoxy(51, 10);
			printf("  ");
			gotoxy(51, 13);
			printf("  ");
			gotoxy(51, 16);
			printf("◆");
			gotoxy(51, 19);
			printf("  ");
			gotoxy(51, 22);
			printf("  ");
			gotoxy(51, 25);
			printf("  ");
			gotoxy(51, 28);
			printf("  ");
			key3 = _getch();
			if (key3 == 13)
			{
				exchange3();
			}
			break;
		case 3:
			gotoxy(51, 10);
			printf("  ");
			gotoxy(51, 13);
			printf("  ");
			gotoxy(51, 16);
			printf("  ");
			gotoxy(51, 19);
			printf("◆");
			gotoxy(51, 22);
			printf("  ");
			gotoxy(51, 25);
			printf("  ");
			gotoxy(51, 28);
			printf("  ");
			key3 = _getch();
			if (key3 == 13)
			{
				exchange4();
			}
			break;
		case 4:
			gotoxy(51, 10);
			printf("  ");
			gotoxy(51, 13);
			printf("  ");
			gotoxy(51, 16);
			printf("  ");
			gotoxy(51, 19);
			printf("  ");
			gotoxy(51, 22);
			printf("◆");
			gotoxy(51, 25);
			printf("  ");
			gotoxy(51, 28);
			printf("  ");
			key3 = _getch();
			if (key3 == 13)
			{
				exchange5();
			}
			break;
		case 5:
			gotoxy(51, 10);
			printf("  ");
			gotoxy(51, 13);
			printf("  ");
			gotoxy(51, 16);
			printf("  ");
			gotoxy(51, 19);
			printf("  ");
			gotoxy(51, 22);
			printf("  ");
			gotoxy(51, 25);
			printf("◆");
			gotoxy(51, 28);
			printf("  ");
			key3 = _getch();
			if (key3 == 13)
			{
				exchange6();
			}
			break;
		case 6:
			gotoxy(51, 10);
			printf("  ");
			gotoxy(51, 13);
			printf("  ");
			gotoxy(51, 16);
			printf("  ");
			gotoxy(51, 19);
			printf("  ");
			gotoxy(51, 22);
			printf("  ");
			gotoxy(51, 25);
			printf("  ");
			gotoxy(51, 28);
			printf("◆");
			key3 = _getch();
			if (key3 == 13)
			{
				show();
			}
			break;
		}
		switch (key3)
		{
		case 's':
		case 'S':
			if (flag3 < 6)
				flag3++;
			break;
		case 'W':
		case 'w':
			if (flag3 > 0)
				flag3--;
			break;
		}
	}
}
void show()
{
	startup();
	up_cho();
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(hOut, &cci);
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hOut, &cci);
	system("CLS");
	gotoxy(50, 8);
	printf("——原神抽卡模拟器——");
	gotoxy(55, 10);
	printf("——by  练达 向思睿 邢铄楷 尹珺丰");
	gotoxy(53, 13);
	printf("开始抽卡");
	gotoxy(53, 16);
	printf("兑换");
	gotoxy(53, 19);
	printf("充值");
	gotoxy(53, 22);
	printf("退出抽卡");
	int flag1 = 0;
	char key2;
	while (1)
	{
		switch (flag1)
		{
		case 0:
			gotoxy(51, 13);
			printf("◆");
			gotoxy(51, 16);
			printf("  ");
			gotoxy(51, 19);
			printf("  ");
			gotoxy(51, 22);
			printf("  ");
			key2 = _getch();
			if (key2 == 13)
			{
				choukache();
			}
			break;
		case 1:
			gotoxy(51, 13);
			printf("  ");
			gotoxy(51, 16);
			printf("◆");
			gotoxy(51, 19);
			printf("  ");
			gotoxy(51, 22);
			printf("  ");
			key2 = _getch();
			if (key2 == 13)
			{
				duihuan();
			}
			break;
		case 2:
			gotoxy(51, 13);
			printf("  ");
			gotoxy(51, 16);
			printf("  ");
			gotoxy(51, 19);
			printf("◆");
			gotoxy(51, 22);
			printf("  ");
			key2 = _getch();
			if (key2 == 13)
			{
				chongzhi();
			}
			break;
		case 3:
			gotoxy(51, 13);
			printf("  ");
			gotoxy(51, 16);
			printf("  ");
			gotoxy(51, 19);
			printf(" ");
			gotoxy(51, 22);
			printf("◆");
			key2 = _getch();
			if (key2 == 13)
			{
				exit(0);
			}
			break;
		}
		switch (key2)
		{
		case 's':
		case 'S':
			if (flag1 < 3)
				flag1++;
			break;
		case 'W':
		case 'w':
			if (flag1 > 0)
				flag1--;
			break;
		}
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  //为fgets函数提供原型
#include <stdlib.h> //为perror函数提供原型
#include <string.h> //为strcpy函数和strcat函数提供原型
#include <time.h>   //为clock函数提供原型
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
void zifu()
{
	printf("\n\n◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◇◇◇◇◇◇◇◇◇\n");

	Sleep(30);

	printf("◇◇◇◆◆◇◇◇◇◇◇◇◆◆◆◆◆◆◆◆◇◇◇◇◇◇◇◇◆◆◇◇◇◇◇◇◇◆◆◆◇◇◇◇◇◇◇◇\n");

	Sleep(30);

	printf("◇◇◇◇◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◇◇◇◇◇◇◇◇◆◆◆◇◇◇◇◇◇◆◆◆◇◇◇◇◇◇◇◇\n");

	Sleep(30);

	printf("◇◇◇◇◆◆◆◆◆◆◆◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◆◇◇◇◇◇◇◆◇◇◇◇◇◇◇◇◇\n");

	Sleep(30);

	printf("◇◇◇◇◆◆◇◇◇◇◆◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◇◇◇◇◇◇◆◇◇◇◇◇◇◇◇◇\n");

	Sleep(30);

	printf("◇◇◇◇◆◆◆◆◇◇◆◆◇◇◇◆◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◆◆◇◇◇◆◇◇◆◆◆◇◇◇◇\n");

	Sleep(30);

	printf("◇◇◇◇◆◆◆◆◆◆◆◆◆◆◆◆◆◆◇◇◇◇◇◇◇◇◇◇◇◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◇◇◇◇\n");

	Sleep(30);

	printf("◇◇◇◇◆◇◇◆◆◆◆◆◆◆◇◇◆◆◇◇◇◇◇◇◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◇◆◆◇◇◇◇\n");

	Sleep(30);

	printf("◇◇◇◇◆◇◇◆◇◇◇◇◇◆◆◇◆◆◇◇◇◇◇◇◇◆◆◆◇◆◆◆◇◇◆◇◇◇◆◇◇◇◆◆◇◇◇◇\n");

	Sleep(30);

	printf("◇◇◇◆◆◇◇◆◆◆◆◆◆◆◆◆◆◇◇◇◇◇◇◇◇◇◇◇◇◆◆◇◇◇◆◇◇◆◆◆◆◆◆◆◇◇◇◇\n");

	Sleep(30);

	printf("◇◇◇◆◆◇◇◆◆◆◆◆◆◇◇◆◆◇◇◇◇◇◇◇◇◇◇◇◆◆◆◆◇◇◆◆◆◆◆◆◆◆◆◇◇◇◇◇\n");

	Sleep(30);

	printf("◇◇◇◆◆◇◇◆◆◇◇◇◇◆◆◆◆◇◇◇◇◇◇◇◇◇◇◆◆◆◆◆◆◆◆◇◇◇◆◇◇◇◆◇◇◇◇◇\n");

	Sleep(30);

	printf("◇◇◇◆◆◇◆◆◆◆◆◆◆◆◆◆◆◆◇◇◇◇◇◇◇◇◆◆◆◆◇◆◆◆◆◇◇◇◆◇◇◆◆◇◇◇◇◇\n");

	Sleep(30);

	printf("◇◇◇◆◆◇◇◆◆◆◆◆◆◆◇◇◇◇◇◇◇◇◇◇◇◆◆◆◇◆◇◇◆◆◆◆◆◆◆◆◆◆◆◇◇◇◇◇\n");

	Sleep(30);

	printf("◇◇◇◆◆◇◇◆◇◇◇◆◆◆◇◇◇◇◇◇◇◇◇◇◆◆◆◇◇◆◇◇◇◆◆◆◆◆◆◆◆◆◆◇◇◇◇◇\n");

	Sleep(30);

	printf("◇◇◆◆◇◇◇◆◆◇◇◇◆◇◆◆◇◇◇◇◇◇◇◆◆◆◇◇◇◆◇◇◇◇◆◇◇◇◆◇◇◆◆◇◇◇◇◇\n");

	Sleep(30);

	printf("◇◇◆◆◇◇◇◆◆◇◇◇◆◇◇◆◆◆◇◇◇◇◇◇◇◇◇◇◇◆◇◇◇◇◇◇◇◇◆◇◇◇◇◇◇◇◇◇\n");

	Sleep(30);

	printf("◇◆◆◆◇◇◆◆◆◇◇◇◆◇◇◇◆◆◆◇◇◇◇◇◇◇◇◇◇◆◇◇◇◇◇◇◇◇◆◇◇◇◇◇◇◇◇◇\n");

	Sleep(30);

	printf("◇◆◆◇◇◆◆◆◇◇◇◇◆◇◇◇◇◆◆◆◇◇◇◇◇◇◇◇◇◆◇◇◇◇◇◇◇◇◆◇◇◇◇◇◇◇◇◇\n");

	Sleep(30);

	printf("◆◆◇◇◆◆◆◇◆◆◆◆◆◇◇◇◇◇◆◆◇◇◇◇◇◇◇◇◆◆◇◇◇◇◇◇◇◇◆◇◇◇◇◇◇◇◇◇\n");

	Sleep(30);

	printf("◆◆◇◇◆◆◇◇◇◆◆◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◇◇◇◇◇◇◇◆◆◇◇◇◇◇◇◇◇◇\n");

	Sleep(30);

	printf("◆◇◇◇◇◇◇◇◇◇◆◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◇◇◇◇◇◇◇◆◆◇◇◇◇◇◇◇◇◇\n");

	Sleep(30);

	printf("◇◇◇◇◇◇◇◇◇◇◇◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◇◇◇◇◇◇◇◇◆◇◇◇◇◇◇◇◇◇\n\n\n");

	Sleep(1500);

	printf("◇◇◇◇◇◇◇◇◇◇◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇\n");

	Sleep(10);

	printf("◇◇◇◇◇◇◇◇◇◇◆◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇\n");

	Sleep(10);

	printf("◇◇◇◇◇◇◇◇◇◇◇◆◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◇◇\n");

	Sleep(10);

	printf("◇◇◇◇◇◆◆◇◇◇◇◇◆◇◇◇◇◆◇◇◇◇◇◇◇◇◇◆◆◆◆◆◆◆◆◇◇◇◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◆◇\n");

	Sleep(10);

	printf("◇◇◇◇◇◇◆◇◇◇◇◇◆◆◆◆◆◆◆◇◇◇◇◇◇◇◇◆◆◆◆◆◆◆◆◇◇◇◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◆◇\n");

	Sleep(10);

	printf("◇◇◇◇◇◇◆◆◆◆◆◆◆◆◆◆◆◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◇◇◇◆◇◇◇◇◇◇◇◇◇◆◆◆◇\n");

	Sleep(10);

	printf("◇◇◇◇◇◇◆◆◆◆◇◇◇◇◇◇◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◇◆◆◆◆◇◇◇◇◇◇◇◇◆◆◆◇\n");

	Sleep(10);

	printf("◇◇◇◇◇◇◆◆◇◇◇◇◇◇◇◇◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◆◆◆◆◆◆◆◆◆◇◇◇◇◇◇◇◇◆◆◆◇\n");

	Sleep(10);

	printf("◇◇◇◇◇◇◆◇◇◇◇◇◇◇◆◆◆◆◇◇◇◇◇◇◇◇◇◇◇◇◆◆◆◆◆◆◆◆◆◆◇◇◇◆◇◇◇◇◇◇◇◇◇◆◆◆◇\n");

	Sleep(10);

	printf("◇◇◇◇◇◆◆◆◆◆◆◆◆◆◆◆◆◆◇◇◇◇◇◇◇◆◆◆◆◆◆◆◆◆◆◆◇◇◆◆◇◇◆◆◇◇◇◇◇◇◇◇◇◆◆◆◇\n");

	Sleep(10);

	printf("◇◇◇◇◇◆◆◆◆◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◆◆◆◆◇◇◇◇◇◇◆◆◇◇◇◆◆◇◇◇◇◇◇◇◇◇◆◆◆◇\n");

	Sleep(10);

	printf("◇◇◇◇◇◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◇◇◇◇◇◇◆◆◇◇◇◆◆◇◇◇◇◇◇◇◇◇◆◆◆◇\n");

	Sleep(10);

	printf("◇◇◇◇◇◆◆◆◆◇◇◇◇◇◇◇◇◆◇◇◇◇◇◇◇◇◇◇◆◆◇◆◇◇◇◇◇◆◆◇◇◇◆◆◇◇◇◇◇◇◇◇◇◆◆◇◇\n");

	Sleep(10);

	printf("◇◇◇◇◇◆◆◆◆◇◇◇◆◆◆◆◆◆◆◇◇◇◇◇◇◇◇◇◆◆◇◆◆◇◇◇◇◆◆◇◇◇◆◆◇◇◇◇◇◇◇◇◇◇◆◇◇\n");

	Sleep(10);

	printf("◇◇◇◇◆◆◇◆◆◆◆◆◆◆◆◆◆◆◆◇◇◇◇◇◇◇◇◆◆◇◇◇◆◆◇◇◆◆◇◇◇◇◆◆◇◇◇◇◇◇◇◇◇◇◆◇◇\n");

	Sleep(10);

	printf("◇◇◇◇◆◆◇◇◆◇◇◇◇◇◇◇◆◆◇◇◇◇◇◇◇◇◇◆◆◇◇◆◆◆◆◇◆◆◇◇◇◇◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇\n");

	Sleep(10);

	printf("◇◇◇◆◆◆◇◇◆◇◇◇◇◇◇◇◆◆◇◇◇◇◇◇◇◆◆◆◆◆◆◆◆◆◆◆◆◇◇◇◇◇◆◇◇◇◇◇◇◇◇◇◆◆◆◆◇\n");

	Sleep(10);

	printf("◇◇◇◆◆◇◇◇◆◇◇◇◇◇◇◇◆◆◇◇◇◇◇◇◇◆◆◆◆◆◇◇◇◆◆◆◆◇◇◇◇◆◆◇◇◇◇◇◇◇◇◇◆◆◆◆◇\n");

	Sleep(10);

	printf("◇◇◆◆◇◇◇◇◆◇◇◇◇◇◆◆◆◆◇◇◇◇◇◇◇◇◆◇◇◇◇◇◇◇◆◆◇◆◆◇◇◆◆◇◇◇◇◇◇◇◇◇◆◆◆◆◇\n");

	Sleep(10);

	printf("◇◇◆◆◇◇◇◆◆◆◆◆◆◆◆◆◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◆◇◇◆◆◆◆◆◇◇◇◇◇◇◇◇◇◇◆◆◆◇\n");

	Sleep(10);

	printf("◇◆◆◇◇◇◇◆◆◆◆◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◆◇◇◇◇◆◆◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇\n");

	Sleep(10);

	printf("◆◆◇◇◇◇◇◇◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◆◆◇◇◇◇◇◇◆◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇\n");

	Sleep(10);

	printf("◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◆◇◇◇◇◇◇◇◇◇◆◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇◇\n");

	system("cls");


}
void jiemian()
{
	void recursur();
	recursur();
	zifu();
	int i = 0, caf = 33;
	char p = 0;
	FILE* fp;
	clock_t stime = 0, ftime = 0;
	char buf[5000] = { 0 }, seat[5000] = ".\\txt\\yuanshen(0).txt", ai[5];
	system("cls");
	PlaySound(TEXT(".\\原神\\Adobe Premiere Pro Auto-Save\\yuanshen.wav"), NULL, SND_FILENAME | SND_ASYNC);
	stime = clock();
	while (i <= 884)
	{
		if (i % 30 == 0)
		{
			caf = 43;
		}
		else
		{
			caf = 33;
		}
		strcpy(seat, ".\\txt\\yuanshen(");
		sprintf(ai, "%d", i);
		strcat(seat, ai);
		strcat(seat, ").txt");
		ftime = clock();
		if ((ftime - stime) >= caf)
		{
			i++;
			fp = fopen(seat, "r");
			fread(buf, sizeof(buf), 1, fp);
			buf[1920] = '\0';
			fclose(fp);
			fprintf(stdout, "%s", buf);
			//fprintf(stdout, "Frame:%d", i);
			stime += caf;
			recursur();
		}
	}
	system("cls");
}
void recursur()
{
	HANDLE hout;
	COORD coord;
	coord.X = 0;
	coord.Y = 0;
	hout = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hout, coord);
}
