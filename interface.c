#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include"warehouse.h"
int high, width;
extern yuan_shi, xing_chen, xing_chen0, xing_hui, xing_hui0, jiu_chan, xiang_yu;
void show();
void gotoxy(int x, int y);
void startup();
void choukache();
void duihuan();
void gotoxy(int x, int y)//������ƶ�����x��y��λ��
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
	printf("��ɫ���");
	gotoxy(53, 13);
	printf("������");
	gotoxy(53, 16);
	printf("��פ��");
	gotoxy(53, 19);
	printf("���ؿ�ʼҳ��");
	int flag2 = 0;
	char key3 = 0;
	while (1)
	{
		switch (flag2)
		{
		case 0:
			gotoxy(51, 10);
			printf("��");
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
			printf("��");
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
			printf("��");
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
			printf("��");
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
	printf("ԭʯ:");
	printf("%d", yuan_shi);
	gotoxy(25, 0);
	printf("�������ǳ�:");
	printf("%d", xing_chen);
	gotoxy(50, 0);
	printf("�������ǻ�:");
	printf("%d", xing_hui);
	gotoxy(75, 0);
	printf("����֮Ե:");
	printf("%d", jiu_chan);
	gotoxy(100, 0);
	printf("����֮Ե:");
	printf("%d", xiang_yu);
	gotoxy(53, 10);
	printf("ԭʯ�һ�����֮Ե");
	gotoxy(53, 13);
	printf("ԭʯ�һ�����֮Ե");
	gotoxy(53, 16);
	printf("�������ǳ��һ�����֮Ե");
	gotoxy(53, 19);
	printf("�������ǳ��һ�����֮Ե");
	gotoxy(53, 22);
	printf("�������ǻԶһ�����֮Ե");
	gotoxy(53, 25);
	printf("�������ǻԶһ�����֮Ե");
	gotoxy(53, 28);
	printf("���ؿ�ʼҳ��");
	int flag3 = 0;
	char key3;
	while (1)
	{
		switch (flag3)
		{
		case 0:
			gotoxy(51, 10);
			printf("��");
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
			printf("���ؿ�ʼҳ��");
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
			printf("��");
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
			printf("��");
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
			printf("��");
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
			printf("��");
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
			printf("��");
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
			printf("��");
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
void show()//����ҳ��
{
	startup();
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(hOut, &cci);
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hOut, &cci);//���ع��
	system("CLS");
	gotoxy(50, 8);
	printf("����ԭ��鿨ģ��������");
	gotoxy(55, 10);
	printf("����by  ���� ��˼� ���忬 ���B��");
	gotoxy(53, 13);
	printf("��ʼ�鿨");
	gotoxy(53, 16);
	printf("�һ�");
	gotoxy(53, 19);
	printf("�鿨��¼");
	gotoxy(53, 22);
	printf("�˳��鿨");
	int flag1 = 0;
	char key2;
	while (1)
	{
		switch (flag1)
		{
		case 0:
			gotoxy(51, 13);
			printf("��");
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
			printf("��");
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
			printf("��");
			gotoxy(51, 22);
			printf("  ");
			key2 = _getch();
			if (key2 == 13)
			{
				//����
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
			printf("��");
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