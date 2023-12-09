#include"stdio.h"
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include"warehouse.h"
extern yuan_shi, xing_chen, xing_chen0, xing_hui, xing_hui0, jiu_chan, xiang_yu;
int up1 = 0;//10抽必中四星计数，每当出四星出现归零
int up2 = 0;//90抽必中五星计数，每当出五星归零
int up3 = 0;//三星武器总数
int up4 = 0;//四星角色加武器总数
int up5 = 0;//五星武器加角色总数
int uptotal = 0;//总抽数
int up6 = 0;//五星角色小保底计算
int up7 = 0;//四星角色保底计算
int san_xing[13] = { 0 };
int si_xing[36] = { 0 };
int si_xinghui[36] = { 0 };
int si_xingwu[18] = { 0 };
int wu_xing[8] = { 0 };
int wu_xingwu[10] = { 0 };
int wu_xinghui[8] = { 0 };
void menu()
{
	printf("原神抽卡模拟器：\n");
	printf("---------------------------------------------------------------------\n");
	printf("限定up池：                                             常驻池:\n");
	printf("五星限定up:流浪者\n");
	printf("四星up：烟绯，珐露珊，罗莎莉亚                              略\n");
	printf("---------------------------------------------------------------------\n");
	printf("抽卡数：1  or  10\n");
	printf("---------------------------------------------------------------------\n");
	printf("退出exit(0)\n");
}
void wuxing()
{
	if (up6 == 1)
	{
		printf("五星限定up ***** 流浪者");
		if (wu_xing[7] != 0)
			printf("   无主的星辉 +%d\n", wu_xinghui[0]);
		else
			printf("\n");
		wu_xing[7]++;
		up6 = 0, up2 = 0, up1++, up5++, uptotal++;
	}
	else
	{
		int wai = rand() % 13;
		if (wai < 7)
		{
			switch (wai)
			{
			case 0:printf("五星常驻up ***** 七七");
				if (wu_xing[0] != 0)
					printf("   无主的星辉 +%d\n", wu_xinghui[0]);
				else
					printf("\n");
				wu_xing[0]++;
				break;
			case 1:printf("五星常驻up ***** 迪卢克");
				if (wu_xing[1] != 0)
					printf("   无主的星辉 +%d\n", wu_xinghui[0]);
				else
					printf("\n");
				wu_xing[1]++;
				break;
			case 2:printf("五星常驻up ***** 莫娜");
				if (wu_xing[2] != 0)
					printf("   无主的星辉 +%d\n", wu_xinghui[0]);
				else
					printf("\n");
				wu_xing[2]++;
				break;
			case 3:printf("五星常驻up ***** 刻晴");
				if (wu_xing[3] != 0)
					printf("   无主的星辉 +%d\n", wu_xinghui[0]);
				else
					printf("\n");
				wu_xing[3]++;
				break;
			case 4:printf("五星常驻up ***** 琴");
				if (wu_xing[4] != 0)
					printf("   无主的星辉 +%d\n", wu_xinghui[0]);
				else
					printf("\n");
				wu_xing[4]++;
				break;
			case 5:printf("五星常驻up ***** 提纳里");
				if (wu_xing[6] != 0)
					printf("   无主的星辉 +%d\n", wu_xinghui[0]);
				else
					printf("\n");
				wu_xing[6]++;
				break;
			case 6:printf("五星常驻up ***** 迪希雅");
				if (wu_xing[6] != 0)
					printf("   无主的星辉 +%d\n", wu_xinghui[0]);
				else
					printf("\n");
				wu_xing[6]++;
				break;
			}
			up1++;
			up2 = 0;
			up5++;
			uptotal++;
			up6 = 1;
		}
		else
		{
			printf("五星限定up ***** 流浪者");
			if (wu_xing[7] != 0)
				printf("   无主的星辉 +%d\\n", wu_xinghui[0]);
			else
				printf("\n");
			wu_xing[7]++;
			up1++;
			up2 = 0;
			up5++;
			uptotal++;
			up6 = 0;
		}
	}
}
void sixing()
{

	int four = rand() % 13;
	if (four < 7)
	{
		if (up7 == 1)
		{
			int ab = rand() % 3;
			switch (ab)
			{
			case 0:printf("四星角色 **** 烟绯");
				if (si_xing[33] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[33]);
				else
					printf("\n");
				si_xing[33]++;
				break;
			case 1:printf("四星角色 **** 罗莎莉亚");
				if (si_xing[32] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[32]);
				else
					printf("\n");
				si_xing[32]++;
				break;
			case 2:printf("四星角色 **** 珐露珊");
				if (si_xing[30] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[30]);
				else
					printf("\n");
				si_xing[30]++;
				break;
			}
			up7 = 0;
		}
		else
		{
			int i = rand() % 13, m = rand() % 3;
			if (i < 7)
			{
				switch (m)
				{
				case 0:printf("四星角色 **** 烟绯");
					if (si_xing[33] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[33]);
					printf("\n");

					si_xing[33]++;
					break;
				case 1:printf("四星角色 **** 罗莎莉亚");
					if (si_xing[32] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[32]);
					printf("\n");
					si_xing[32]++;
					break;
				case 2:printf("四星角色 **** 珐露珊");
					if (si_xing[30] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[30]);
					printf("\n");
					si_xing[30]++;
					break;
				}
				up7 = 0;
			}
			else
			{
				m = rand() % 33;
				switch (m)
				{
				case 0:printf("四星角色 **** 诺艾尔");
					if (si_xing[0] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[0]);
					else
						printf("\n");
					si_xing[0]++;
					break;
				case 1:printf("四星角色 **** 凝光");
					if (si_xing[1] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[1]);
					else
						printf("\n");
					si_xing[1]++;
					break;
				case 2:printf("四星角色 **** 云堇");
					if (si_xing[2] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[2]);
					else
						printf("\n");
					si_xing[2]++;
					break;
				case 3:printf("四星角色 **** 五郎");
					if (si_xing[3] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[3]);
					else
						printf("\n");
					si_xing[3]++;
					break;
				case 4:printf("四星角色 **** 辛焱");
					if (si_xing[4] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[4]);
					else
						printf("\n");
					si_xing[4]++;
					break;
				case 5:printf("四星角色 **** 班尼特");
					if (si_xing[5] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[5]);
					else
						printf("\n");
					si_xing[5]++;
					break;
				case 6:printf("四星角色 **** 香菱");
					if (si_xing[6] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[6]);
					else
						printf("\n");
					si_xing[6]++;
					break;
				case 7:printf("四星角色 **** 安柏");
					if (si_xing[7] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[7]);
					else
						printf("\n");
					si_xing[7]++;
					break;
				case 8:printf("四星角色 **** 托马");
					if (si_xing[8] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[8]);
					else
						printf("\n");
					si_xing[8]++;
					break;
				case 9:printf("四星角色 **** 重云");
					if (si_xing[9] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[9]);
					else
						printf("\n");
					si_xing[9]++;
					break;
				case 10:printf("四星角色 **** 凯亚");
					if (si_xing[10] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[10]);
					else
						printf("\n");
					si_xing[10]++;
					break;
				case 11:printf("四星角色 **** 迪奥娜");
					if (si_xing[11] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[11]);
					else
						printf("\n");
					si_xing[11]++;
					break;
				case 12:printf("四星角色 **** 米卡");
					if (si_xing[12] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[12]);
					else
						printf("\n");
					si_xing[12]++;
					break;
				case 13:printf("四星角色 **** 莱依拉");
					if (si_xing[13] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[13]);
					else
						printf("\n");
					si_xing[13]++;
					break;
				case 14:printf("四星角色 **** 砂糖");
					if (si_xing[14] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[14]);
					else
						printf("\n");
					si_xing[14]++;
					break;
				case 15:printf("四星角色 **** 早柚");
					if (si_xing[15] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[15]);
					else
						printf("\n");
					si_xing[15]++;
					break;
				case 16:printf("四星角色 **** 鹿野院平藏");
					if (si_xing[16] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[16]);
					else
						printf("\n");
					si_xing[16]++;
					break;
				case 17:printf("四星角色 **** 行秋");
					if (si_xing[17] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[17]);
					else
						printf("\n");
					si_xing[17]++;
					break;
				case 18:printf("四星角色 **** 芭芭拉");
					if (si_xing[18] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[18]);
					else
						printf("\n");
					si_xing[18]++;
					break;
				case 19:printf("四星角色 **** 坎蒂丝");
					if (si_xing[19] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[19]);
					else
						printf("\n");
					si_xing[19]++;
					break;
				case 20:printf("四星角色 **** 北斗");
					if (si_xing[20] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[20]);
					else
						printf("\n");
					si_xing[20]++;
					break;
				case 21:printf("四星角色 **** 菲谢尔");
					if (si_xing[21] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[21]);
					else
						printf("\n");
					si_xing[21]++;
					break;
				case 22:printf("四星角色 **** 雷泽");
					if (si_xing[22] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[22]);
					else
						printf("\n");
					si_xing[22]++;
					break;
				case 23:printf("四星角色 **** 丽莎");
					if (si_xing[23] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[23]);
					else
						printf("\n");
					si_xing[23]++;
					break;
				case 24:printf("四星角色 **** 九条裟罗");
					if (si_xing[24] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[24]);
					else
						printf("\n");
					si_xing[24]++;
					break;
				case 25:printf("四星角色 **** 多莉");
					if (si_xing[25] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[25]);
					else
						printf("\n");
					si_xing[25]++;
					break;
				case 26:printf("四星角色 **** 柯莱");
					if (si_xing[26] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[26]);
					else
						printf("\n");
					si_xing[26]++;
					break;
				case 27:printf("四星角色 **** 瑶瑶");
					if (si_xing[27] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[27]);
					else
						printf("\n");
					si_xing[27]++;
					break;
				case 28:printf("四星角色 **** 卡维");
					if (si_xing[28] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[28]);
					else
						printf("\n");
					si_xing[28]++;
					break;
				case 29:printf("四星角色 **** 绮良良");
					if (si_xing[29] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[29]);
					else
						printf("\n");
					si_xing[29]++;
					break;
				case 31:printf("四星角色 **** 久岐忍");
					if (si_xing[31] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[31]);
					else
						printf("\n");
					si_xing[31]++;
					break;
				case 32:printf("四星角色 **** 琳妮特");
					if (si_xing[34] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[34]);
					else
						printf("\n");
					si_xing[34]++;
					break;
				case 33:printf("四星角色 **** 菲米尼");
					if (si_xing[35] != 0)
						printf("   无主的星辉 +%d\n", si_xinghui[35]);
					else
						printf("\n");
					si_xing[35]++;
					break;
				}
				up7++;
			}
		}
	}
	else
	{
		int n = rand() % 18;
		switch (n)
		{
		case 0:printf("四星武器 **** 弓藏   无主的星辉 +2\n"); si_xingwu[0]++;
			break;
		case 1:printf("四星武器 **** 祭礼弓   无主的星辉 +2\n"); si_xingwu[1]++;
			break;
		case 2:printf("四星武器 **** 绝弦   无主的星辉 +2\n"); si_xingwu[2]++;
			break;
		case 3:printf("四星武器 **** 西风猎弓   无主的星辉 +2\n"); si_xingwu[3]++;
			break;
		case 4:printf("四星武器 **** 昭心   无主的星辉 +2\n"); si_xingwu[4]++;
			break;
		case 5:printf("四星武器 **** 祭礼残章   无主的星辉 +2\n"); si_xingwu[5]++;
			break;
		case 6:printf("四星武器 **** 流浪乐章   无主的星辉 +2\n"); si_xingwu[6]++;
			break;
		case 7:printf("四星武器 **** 西风秘典   无主的星辉 +2\n"); si_xingwu[7]++;
			break;
		case 8:printf("四星武器 **** 西风长枪   无主的星辉 +2\n"); si_xingwu[8]++;
			break;
		case 9:printf("四星武器 **** 匣里灭辰   无主的星辉 +2\n"); si_xingwu[9]++;
			break;
		case 10:printf("四星武器 **** 雨裁   无主的星辉 +2\n"); si_xingwu[10]++;
			break;
		case 11:printf("四星武器 **** 祭礼大剑   无主的星辉 +2\n"); si_xingwu[11]++;
			break;
		case 12:printf("四星武器 **** 钟剑   无主的星辉 +2\n"); si_xingwu[12]++;
			break;
		case 13:printf("四星武器 **** 西风大剑   无主的星辉 +2\n"); si_xingwu[13]++;
			break;
		case 14:printf("四星武器 **** 匣里龙吟   无主的星辉 +2\n"); si_xingwu[14]++;
			break;
		case 15:printf("四星武器 **** 祭礼剑   无主的星辉 +2\n"); si_xingwu[15]++;
			break;
		case 16:printf("四星武器 **** 笛剑   无主的星辉 +2\n"); si_xingwu[16]++;
			break;
		case 17:printf("四星武器 **** 西风剑   无主的星辉 +2\n"); si_xingwu[17]++;
			break;
		}
	}
	up1 = 0;
	up2++;
	up4++;
	uptotal++;
}
void sanxing()
{
	int three = rand() % 13;
	switch (three)
	{
	case 0:printf("三星武器 *** 弹弓   无主的星尘 +15\n"); san_xing[0]++;
		break;
	case 1:printf("三星武器 *** 神射手之誓   无主的星尘 +15\n"); san_xing[1]++;
		break;
	case 2:printf("三星武器 *** 鸦羽弓   无主的星尘 +15\n"); san_xing[2]++;
		break;
	case 3:printf("三星武器 *** 翡玉法球   无主的星尘 +15\n"); san_xing[3]++;
		break;
	case 4:printf("三星武器 *** 讨龙英杰谭   无主的星尘 +15\n"); san_xing[4]++;
		break;
	case 5:printf("三星武器 *** 魔导绪论   无主的星尘 +15\n"); san_xing[5]++;
		break;
	case 6:printf("三星武器 *** 黑缨枪   无主的星尘 +15\n"); san_xing[6]++;
		break;
	case 7:printf("三星武器 *** 以理服人   无主的星尘 +15\n"); san_xing[7]++;
		break;
	case 8:printf("三星武器 *** 沐浴龙血的剑   无主的星尘 +15\n"); san_xing[8]++;
		break;
	case 9:printf("三星武器 *** 铁影阔剑   无主的星尘 +15\n"); san_xing[9]++;
		break;
	case 10:printf("三星武器 *** 飞天御剑   无主的星尘 +15\n"); san_xing[10]++;
		break;
	case 11:printf("三星武器 *** 黎明神剑   无主的星尘 +15\n"); san_xing[11]++;
		break;
	case 12:printf("三星武器 *** 冷刃   无主的星尘 +15\n"); san_xing[12]++;
		break;
	}
	up1++;
	up2++;
	up3++;
	uptotal++;
}
void one()
{
	int up = rand() % 10000;
	si_xingming();
	wu_xingming();
	if (up2 <= 73)
	{
		if (up1 <= 7)
		{
			if (up < 60)
			{
				wuxing();
			}
			else if (up >= 60 && up < 570)
			{
				sixing();
			}
			else
			{
				sanxing();
			}
		}
		else if (up1 >= 8)
		{
			if (up < 60)
			{
				wuxing();
			}
			else if (up >= 60 && up < 570 + 5100 * (up1 - 7))
			{
				sixing();
			}
			else
			{
				sanxing();
			}
		}
	}
	else
	{
		if (up1 <= 7)
		{
			if (up < 60 + 600 * (up2 - 73))
			{
				wuxing();
			}
			else if (up >= 60 && up < 570)
			{
				sixing();
			}
			else
			{
				sanxing();
			}
		}
		else if (up1 >= 8)
		{
			if (up < 60 + 600 * (up2 - 73))
			{
				wuxing();
			}
			else if (up >= 60 + 600 * (up2 - 73) && up < 510 + 60 + 5100 * (up1 - 7))
			{
				sixing();
			}
			else
			{
				sanxing();
			}
		}
	}
	printf("\n");
	jiu_chan--;
}
void upchou()
{
	system("cls");
	while (1)
	{
		menu();
		srand(time(0));
		start();
		int x = 0;
		printf("请输入抽卡数：\n");
		scanf_s("%d", &x);
		if (x == 1)
		{
			start();
			if (jiu_chan < 1 && yuan_shi < 160 && xing_chen < 75 && xing_hui < 5)
				printf("充钱吧，少年\n");
			if (x <= jiu_chan)
			{
				one();
			}
			else if (yuan_shi >= 160)
			{
				jiu_chan += 1;
				yuan_shi -= 160;
				one();
			}
			else if (xing_chen >= 75)
			{
				jiu_chan += 1;
				xing_chen0 -= 75;
				one();
			}
			else if (xing_hui >= 5)
			{
				jiu_chan += 1;
				xing_hui0 -= 5;
				one();
			}
		}
		else if (x == 10)
		{
			for (int i = 0; i < x; i++)
			{
				start();
				if (x <= jiu_chan)
				{
					one();
				}
				else if (yuan_shi >= 160)
				{
					jiu_chan += 1;
					yuan_shi -= 160;
					one();
				}
				else if (xing_chen >= 75)
				{
					jiu_chan += 1;
					xing_chen0 -= 75;
					one();
				}
				else if (xing_hui >= 5)
				{
					jiu_chan += 1;
					xing_hui0 -= 5;
					one();
				}
			}
		    if (jiu_chan < 1 && yuan_shi < 160 && xing_chen < 75 && xing_hui < 5)
			printf("充钱吧，少年\n");
		}
		 if (x == 0)
		{
			printf("总共抽取%d抽\n", uptotal);
			printf("五星共%d个\n", up5);
			printf("四星共%d个\n", up4);
			printf("三星共%d个\n", up3);
			system("pause");
			if (_kbhit)
			{
				choukache();
			}
			}
		system("pause");
		system("cls");
	}
}
int w1 = 0, w2 = 0, w3 = 0, w4 = 0, w5 = 0, w6 = 0, w7 = 0, wtotal = 0;
void menuwu()
{
	printf("武器池:\n");
	printf("---------------------------------------------------------------------\n");
	printf("抽卡数：1  or  10\n");
	printf("---------------------------------------------------------------------\n");
	printf("退出exit(0)\n");
}
void wuxingwu()
{
	if (w6 == 1)
	{
		int wufive = rand() % 2;
		switch (wufive)
		{
		case 0:printf("五星武器 ***** 阿莫斯之弓   无主的星辉 +10 \n");
			break;
		case 1:printf("五星武器 ***** 图莱杜拉的回忆   无主的星辉 +10\n");
			break;
		}
		w6 = 0, w1++, w2 = 0, wtotal++, w5++;
	}
	else
	{
		int wai = rand() % 100;
		if (wai < 25)
		{
			int wufivewai = rand() % 8;
			switch (wufivewai)
			{
			case 0:printf("五星武器 ***** 和璞鸢   无主的星辉 +10\n"); wu_xingwu[0]++;
				break;
			case 1:printf("五星武器 ***** 狼的末路   无主的星辉 +10\n"); wu_xingwu[1]++;
				break;
			case 2:printf("五星武器 ***** 风鹰剑   无主的星辉 +10\n"); wu_xingwu[2]++;
				break;
			case 3:printf("五星武器 ***** 四风原典   无主的星辉 +10\n"); wu_xingwu[3]++;
				break;
			case 4:printf("五星武器 ***** 天空之傲   无主的星辉 +10\n"); wu_xingwu[4]++;
				break;
			case 5:printf("五星武器 ***** 天空之翼   无主的星辉 +10\n"); wu_xingwu[5]++;
				break;
			case 6:printf("五星武器 ***** 天空之刃   无主的星辉 +10\n"); wu_xingwu[6]++;
				break;
			case 7:printf("五星武器 ***** 天空之卷   无主的星辉 +10\n"); wu_xingwu[7]++;
				break;
			}
			w6++;
			w1++;
			w2 = 0;
			wtotal++;
			w5++;
		}
		else
		{
			int wuqi = rand() % 13;
			if (wuqi < 7)
			{
				printf("五星武器 ***** 阿莫斯之弓\n");
			}
			else
			{
				printf("五星武器 ***** 图莱杜拉的回忆\n");
			}
			w1++;
			w2 = 0;
			w5++;
			wtotal++;
			w6 = 0;
		}
	}
}
void sixingwu()
{
	if (w7 == 1)
	{
		int wufive = rand() % 4;
		switch (wufive)
		{
		case 0:printf("四星武器 **** 祭礼剑   无主的星辉 +2\n"); si_xingwu[15]++;
			break;
		case 1:printf("四星武器 **** 匣里灭辰   无主的星辉 +2\n"); si_xingwu[9]++;
			break;
		case 2:printf("四星武器 **** 西风剑   无主的星辉 +2\n"); si_xingwu[17]++;
			break;
		case 3:printf("四星武器 **** 昭心   无主的星辉 +2\n"); si_xingwu[4]++;
			break;
		}
		w7 = 0, w1 = 0, w2++, wtotal++, w4++;
	}
	else
	{
		int four = rand() % 13;
		if (four < 7)
		{
			int fourwai = rand() % 100;
			if (fourwai < 75)
			{
				int fourbu = rand() % 4;
				switch (fourbu)
				{
				case 0:printf("四星武器 **** 祭礼剑   无主的星辉 +2\n"); si_xingwu[15]++;
					break;
				case 1:printf("四星武器 **** 匣里灭辰   无主的星辉 +2\n"); si_xingwu[9]++;
					break;
				case 2:printf("四星武器 **** 西风剑   无主的星辉 +2\n"); si_xingwu[17]++;
					break;
				case 3:printf("四星武器 **** 昭心   无主的星辉 +2\n"); si_xingwu[4]++;
					break;
				}
				w1 = 0, w2++, w4++, wtotal++, w7 = 0;
			}
			else
			{
				fourwai = rand() % 14;
				switch (fourwai)
				{
				case 0:printf("四星武器 **** 弓藏   无主的星辉 +2\n"); si_xingwu[0]++;
					break;
				case 1:printf("四星武器 **** 祭礼弓   无主的星辉 +2\n"); si_xingwu[1]++;
					break;
				case 2:printf("四星武器 **** 绝弦   无主的星辉 +2\n"); si_xingwu[2]++;
					break;
				case 3:printf("四星武器 **** 西风猎弓   无主的星辉 +2\n"); si_xingwu[3]++;
					break;
				case 4:printf("四星武器 **** 昭心   无主的星辉 +2\n"); si_xingwu[4]++;
					break;
				case 5:printf("四星武器 **** 祭礼残章   无主的星辉 +2\n"); si_xingwu[5]++;
					break;
				case 6:printf("四星武器 **** 流浪乐章   无主的星辉 +2\n"); si_xingwu[6]++;
					break;
				case 7:printf("四星武器 **** 西风秘典   无主的星辉 +2\n"); si_xingwu[7]++;
					break;
				case 8:printf("四星武器 **** 西风长枪   无主的星辉 +2\n"); si_xingwu[8]++;
					break;
				case 9:printf("四星武器 **** 匣里灭辰   无主的星辉 +2\n"); si_xingwu[9]++;
					break;
				case 10:printf("四星武器 **** 雨裁   无主的星辉 +2\n"); si_xingwu[10]++;
					break;
				case 11:printf("四星武器 **** 祭礼大剑   无主的星辉 +2\n"); si_xingwu[11]++;
					break;
				case 12:printf("四星武器 **** 钟剑   无主的星辉 +2\n"); si_xingwu[12]++;
					break;
				case 13:printf("四星武器 **** 西风大剑   无主的星辉 +2\n"); si_xingwu[13]++;
					break;
				case 14:printf("四星武器 **** 匣里龙吟   无主的星辉 +2\n"); si_xingwu[14]++;
					break;
				case 15:printf("四星武器 **** 祭礼剑   无主的星辉 +2\n"); si_xingwu[15]++;
					break;
				case 16:printf("四星武器 **** 笛剑   无主的星辉 +2\n"); si_xingwu[16]++;
					break;
				case 17:printf("四星武器 **** 西风剑   无主的星辉 +2\n"); si_xingwu[17]++;
					break;
				}
				w1 = 0, w2++, w4++, wtotal++, w7++;
			}
		}
		else
		{
			int fourj = rand() % 30;
			switch (fourj)
			{
			case 0:printf("四星角色 **** 诺艾尔");
				if (si_xing[0] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[0]);
				else
					printf("\n");
				si_xing[0]++;
				break;
			case 1:printf("四星角色 **** 凝光");
				if (si_xing[1] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[1]);
				else
					printf("\n");
				si_xing[1]++;
				break;
			case 2:printf("四星角色 **** 云堇");
				if (si_xing[2] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[2]);
				else
					printf("\n");
				si_xing[2]++;
				break;
			case 3:printf("四星角色 **** 五郎");
				if (si_xing[3] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[3]);
				else
					printf("\n");
				si_xing[3]++;
				break;
			case 4:printf("四星角色 **** 辛焱");
				if (si_xing[4] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[4]);
				else
					printf("\n");
				si_xing[4]++;
				break;
			case 5:printf("四星角色 **** 班尼特");
				if (si_xing[5] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[5]);
				else
					printf("\n");
				si_xing[5]++;
				break;
			case 6:printf("四星角色 **** 香菱");
				if (si_xing[6] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[6]);
				else
					printf("\n");
				si_xing[6]++;
				break;
			case 7:printf("四星角色 **** 安柏");
				if (si_xing[7] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[7]);
				else
					printf("\n");
				si_xing[7]++;
				break;
			case 8:printf("四星角色 **** 托马");
				if (si_xing[8] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[8]);
				else
					printf("\n");
				si_xing[8]++;
				break;
			case 9:printf("四星角色 **** 重云");
				if (si_xing[9] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[9]);
				else
					printf("\n");
				si_xing[9]++;
				break;
			case 10:printf("四星角色 **** 凯亚");
				if (si_xing[10] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[10]);
				else
					printf("\n");
				si_xing[10]++;
				break;
			case 11:printf("四星角色 **** 迪奥娜");
				if (si_xing[11] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[11]);
				else
					printf("\n");
				si_xing[11]++;
				break;
			case 12:printf("四星角色 **** 米卡");
				if (si_xing[12] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[12]);
				else
					printf("\n");
				si_xing[12]++;
				break;
			case 13:printf("四星角色 **** 莱依拉");
				if (si_xing[13] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[13]);
				else
					printf("\n");
				si_xing[13]++;
				break;
			case 14:printf("四星角色 **** 砂糖");
				if (si_xing[14] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[14]);
				else
					printf("\n");
				si_xing[14]++;
				break;
			case 15:printf("四星角色 **** 早柚");
				if (si_xing[15] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[15]);
				else
					printf("\n");
				si_xing[15]++;
				break;
			case 16:printf("四星角色 **** 鹿野院平藏");
				if (si_xing[16] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[16]);
				else
					printf("\n");
				si_xing[16]++;
				break;
			case 17:printf("四星角色 **** 行秋");
				if (si_xing[17] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[17]);
				else
					printf("\n");
				si_xing[17]++;
				break;
			case 18:printf("四星角色 **** 芭芭拉");
				if (si_xing[18] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[18]);
				else
					printf("\n");
				si_xing[18]++;
				break;
			case 19:printf("四星角色 **** 坎蒂丝");
				if (si_xing[19] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[19]);
				else
					printf("\n");
				si_xing[19]++;
				break;
			case 20:printf("四星角色 **** 北斗");
				if (si_xing[20] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[20]);
				else
					printf("\n");
				si_xing[20]++;
				break;
			case 21:printf("四星角色 **** 菲谢尔");
				if (si_xing[21] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[21]);
				else
					printf("\n");
				si_xing[21]++;
				break;
			case 22:printf("四星角色 **** 雷泽");
				if (si_xing[22] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[22]);
				else
					printf("\n");
				si_xing[22]++;
				break;
			case 23:printf("四星角色 **** 丽莎");
				if (si_xing[23] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[23]);
				else
					printf("\n");
				si_xing[23]++;
				break;
			case 24:printf("四星角色 **** 九条裟罗");
				if (si_xing[24] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[24]);
				else
					printf("\n");
				si_xing[24]++;
				break;
			case 25:printf("四星角色 **** 多莉");
				if (si_xing[25] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[25]);
				else
					printf("\n");
				si_xing[25]++;
				break;
			case 26:printf("四星角色 **** 柯莱");
				if (si_xing[26] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[26]);
				else
					printf("\n");
				si_xing[26]++;
				break;
			case 27:printf("四星角色 **** 瑶瑶");
				if (si_xing[27] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[27]);
				else
					printf("\n");
				si_xing[27]++;
				break;
			case 28:printf("四星角色 **** 卡维");
				if (si_xing[28] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[28]);
				else
					printf("\n");
				si_xing[28]++;
				break;
			case 29:printf("四星角色 **** 绮良良");
				if (si_xing[29] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[29]);
				else
					printf("\n");
				si_xing[29]++;
				break;
			case 30:printf("四星角色 **** 珐露珊");
				if (si_xing[30] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[30]);
				else
					printf("\n");
				si_xing[30]++;
				break;
			case 31:printf("四星角色 **** 久岐忍");
				if (si_xing[31] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[31]);
				else
					printf("\n");
				si_xing[31]++;
				break;
			case 32:printf("四星角色 **** 罗莎莉亚");
				if (si_xing[32] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[32]);
				else
					printf("\n");
				si_xing[32]++;
				break;
			case 33:printf("四星角色 **** 烟绯");
				if (si_xing[33] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[33]);
				else
					printf("\n");
				si_xing[33]++;
				break;
			case 34:printf("四星角色 **** 琳妮特");
				if (si_xing[34] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[34]);
				else
					printf("\n");
				si_xing[34]++;
				break;
			case 35:printf("四星角色 **** 菲米尼");
				if (si_xing[35] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[35]);
				else
					printf("\n");
				si_xing[35]++;
				break;
			}
			w1 = 0, w2++, w4++, wtotal++;
		}
	}
}
void sanxingwu()
{
	int three = rand() % 13;
	switch (three)
	{
	case 0:printf("三星武器 *** 弹弓   无主的星尘 +15\n"); san_xing[0]++;
		break;
	case 1:printf("三星武器 *** 神射手之誓   无主的星尘 +15\n"); san_xing[1]++;
		break;
	case 2:printf("三星武器 *** 鸦羽弓   无主的星尘 +15\n"); san_xing[2]++;
		break;
	case 3:printf("三星武器 *** 翡玉法球   无主的星尘 +15\n"); san_xing[3]++;
		break;
	case 4:printf("三星武器 *** 讨龙英杰谭   无主的星尘 +15\n"); san_xing[4]++;
		break;
	case 5:printf("三星武器 *** 魔导绪论   无主的星尘 +15\n"); san_xing[5]++;
		break;
	case 6:printf("三星武器 *** 黑缨枪   无主的星尘 +15\n"); san_xing[6]++;
		break;
	case 7:printf("三星武器 *** 以理服人   无主的星尘 +15\n"); san_xing[7]++;
		break;
	case 8:printf("三星武器 *** 沐浴龙血的剑   无主的星尘 +15\n"); san_xing[8]++;
		break;
	case 9:printf("三星武器 *** 铁影阔剑   无主的星尘 +15\n"); san_xing[9]++;
		break;
	case 10:printf("三星武器 *** 飞天御剑   无主的星尘 +15\n"); san_xing[10]++;
		break;
	case 11:printf("三星武器 *** 黎明神剑   无主的星尘 +15\n"); san_xing[11]++;
		break;
	case 12:printf("三星武器 *** 冷刃   无主的星尘 +15\n"); san_xing[12]++;
		break;
	}
	w1++;
	w2++;
	w3++;
	wtotal++;
}
void onewu()
{
	int wu = rand() % 10000;
	si_xingming();
	wu_xingming();
	if (w2 <= 73)
	{
		if (w1 <= 7)
		{
			if (wu < 70)
			{
				wuxingwu();
			}
			else if (wu >= 60 && wu < 660)
			{
				sixingwu();
			}
			else
			{
				sanxingwu();
			}
		}
		else if (w1 >= 8)
		{
			if (wu < 70)
			{
				wuxingwu();
			}
			else if (wu >= 60 && wu < 660 + 5100 * (w1 - 7))
			{
				sixingwu();
			}
			else
			{
				sanxingwu();
			}
		}
	}
	else
	{
		if (w1 <= 7)
		{
			if (wu < 70 + 600 * (w2 - 73))
			{
				wuxingwu();
			}
			else if (wu >= 70 && wu < 660)
			{
				sixingwu();
			}
			else
			{
				sanxingwu();
			}
		}
		else if (w1 >= 8)
		{
			if (wu < 70 + 600 * (w2 - 73))
			{
				wuxingwu();
			}
			else if (wu >= 70 + 600 * (w2 - 73) && wu < 660 + 5100 * (w1 - 7))
			{
				sixingwu();
			}
			else
			{
				sanxingwu();
			}
		}
	}
	printf("\n");
	jiu_chan--;
}
void wuchou()
{
	system("cls");
	int sign = 0;
	while (1)
	{
		menuwu();
		srand(time(0));
		start();
		int x = 0;
		printf("请输入抽卡数：\n");
		scanf_s("%d", &x);
		if (x == 1)
		{
			start();
			if (jiu_chan < 1 && yuan_shi < 160 && xing_chen < 75 && xing_hui < 5)
				printf("充钱吧，少年\n");
			if (x <= jiu_chan)
			{
				onewu();
			}
			else if (yuan_shi >= 160)
			{
				jiu_chan += 1;
				yuan_shi -= 160;
				onewu();
			}
			else if (xing_chen >= 75)
			{
				jiu_chan += 1;
				xing_chen0 -= 75;
				onewu();
			}
			else if (xing_hui >= 5)
			{
				jiu_chan += 1;
				xing_hui0 -= 5;
				onewu();
			}
		}
		else if (x == 10)
		{
			for (int i = 0; i < 10; i++)
			{
				start();
				if (x <= jiu_chan)
				{
					onewu();
				}
				else if (yuan_shi >= 160)
				{
					jiu_chan += 1;
					yuan_shi -= 160;
					onewu();
				}
				else if (xing_chen >= 75)
				{
					jiu_chan += 1;
					xing_chen0 -= 75;
					onewu();
				}
				else if (xing_hui >= 5)
				{
					jiu_chan += 1;
					xing_hui0 -= 5;
					onewu();
				}
			}
			if (jiu_chan < 1 && yuan_shi < 160 && xing_chen < 75 && xing_hui < 5)
				printf("充钱吧，少年\n");
		}
		 if (x == 0)
		{
			printf("总共抽取%d抽\n", wtotal);
			printf("五星共%d个\n", w5);
			printf("四星共%d个\n", w4);
			printf("三星共%d个\n", w3);
			system("pause");
			if (_kbhit)
			{
				choukache();
			}
		}
		system("pause");
		system("cls");
	}
}
int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, ctotal = 0;
void menuchang()
{
	printf("常驻池:\n");
	printf("---------------------------------------------------------------------\n");
	printf("抽卡数：1  or  10\n");
	printf("---------------------------------------------------------------------\n");
	printf("退出exit(0)\n");
}
void wuxingchangzhu()
{
	int five = rand() % 13;
	if (five < 7)
	{
		int mwu = rand() % 7;
		switch (mwu)
		{
		case 0:printf("五星常驻up ***** 七七");
		if (wu_xing[0] != 0)
			printf("   无主的星辉 +%d\n", wu_xinghui[0]);
		else
			printf("\n");
		wu_xing[0]++;
		break;
		case 1:printf("五星常驻up ***** 迪卢克");
			if (wu_xing[1] != 0)
				printf("   无主的星辉 +%d\n", wu_xinghui[0]);
			else
				printf("\n");
			wu_xing[1]++;
			break;
		case 2:printf("五星常驻up ***** 莫娜");
			if (wu_xing[2] != 0)
				printf("   无主的星辉 +%d\n", wu_xinghui[0]);
			else
				printf("\n");
			wu_xing[2]++;
			break;
		case 3:printf("五星常驻up ***** 刻晴");
			if (wu_xing[3] != 0)
				printf("   无主的星辉 +%d\n", wu_xinghui[0]);
			else
				printf("\n");
			wu_xing[3]++;
			break;
		case 4:printf("五星常驻up ***** 琴");
			if (wu_xing[4] != 0)
				printf("   无主的星辉 +%d\n", wu_xinghui[0]);
			else
				printf("\n");
			wu_xing[4]++;
			break;
		case 5:printf("五星常驻up ***** 提纳里");
			if (wu_xing[6] != 0)
				printf("   无主的星辉 +%d\n", wu_xinghui[0]);
			else
				printf("\n");
			wu_xing[6]++;
			break;
		case 6:printf("五星常驻up ***** 迪希雅");
			if (wu_xing[6] != 0)
				printf("   无主的星辉 +%d\n", wu_xinghui[0]);
			else
				printf("\n");
			wu_xing[6]++;
			break;
		}
	}
	else
	{
		int nwu = rand() % 9;
		switch (nwu)
		{
		case 0:printf("五星武器 ***** 和璞鸢   无主的星辉 +10\n"); wu_xingwu[0]++;
			break;
		case 1:printf("五星武器 ***** 狼的末路   无主的星辉 +10\n"); wu_xingwu[1]++;
			break;
		case 2:printf("五星武器 ***** 风鹰剑   无主的星辉 +10\n"); wu_xingwu[2]++;
			break;
		case 3:printf("五星武器 ***** 四风原典   无主的星辉 +10\n"); wu_xingwu[3]++;
			break;
		case 4:printf("五星武器 ***** 天空之傲   无主的星辉 +10\n"); wu_xingwu[4]++;
			break;
		case 5:printf("五星武器 ***** 天空之翼   无主的星辉 +10\n"); wu_xingwu[5]++;
			break;
		case 6:printf("五星武器 ***** 天空之刃   无主的星辉 +10\n"); wu_xingwu[6]++;
			break;
		case 7:printf("五星武器 ***** 天空之卷   无主的星辉 +10\n"); wu_xingwu[7]++;
			break;
		}
	}
	c1++;
	c2 = 0;
	c5++;
	ctotal++;
}
void sixingchangzhu()
{
	int fourchang = rand() % 13;
	if (fourchang < 7)
	{
		int mchang = rand() % 36;
		switch (mchang)
		{
		case 0:printf("四星角色 **** 诺艾尔");
			if (si_xing[0] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[0]);
			else
				printf("\n");
			si_xing[0]++;
			break;
		case 1:printf("四星角色 **** 凝光");
			if (si_xing[1] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[1]);
			else
				printf("\n");
			si_xing[1]++;
			break;
		case 2:printf("四星角色 **** 云堇");
			if (si_xing[2] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[2]);
			else
				printf("\n");
			si_xing[2]++;
			break;
		case 3:printf("四星角色 **** 五郎");
			if (si_xing[3] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[3]);
			else
				printf("\n");
			si_xing[3]++;
			break;
		case 4:printf("四星角色 **** 辛焱");
			if (si_xing[4] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[4]);
			else
				printf("\n");
			si_xing[4]++;
			break;
		case 5:printf("四星角色 **** 班尼特");
			if (si_xing[5] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[5]);
			else
				printf("\n");
			si_xing[5]++;
			break;
		case 6:printf("四星角色 **** 香菱");
			if (si_xing[6] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[6]);
			else
				printf("\n");
			si_xing[6]++;
			break;
		case 7:printf("四星角色 **** 安柏");
			if (si_xing[7] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[7]);
			else
				printf("\n");
			si_xing[7]++;
			break;
		case 8:printf("四星角色 **** 托马");
			if (si_xing[8] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[8]);
			else
				printf("\n");
			si_xing[8]++;
			break;
		case 9:printf("四星角色 **** 重云");
			if (si_xing[9] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[9]);
			else
				printf("\n");
			si_xing[9]++;
			break;
		case 10:printf("四星角色 **** 凯亚");
			if (si_xing[10] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[10]);
			else
				printf("\n");
			si_xing[10]++;
			break;
		case 11:printf("四星角色 **** 迪奥娜");
			if (si_xing[11] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[11]);
			else
				printf("\n");
			si_xing[11]++;
			break;
		case 12:printf("四星角色 **** 米卡");
			if (si_xing[12] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[12]);
			else
				printf("\n");
			si_xing[12]++;
			break;
		case 13:printf("四星角色 **** 莱依拉");
			if (si_xing[13] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[13]);
			else
				printf("\n");
			si_xing[13]++;
			break;
		case 14:printf("四星角色 **** 砂糖");
			if (si_xing[14] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[14]);
			else
				printf("\n");
			si_xing[14]++;
			break;
		case 15:printf("四星角色 **** 早柚");
			if (si_xing[15] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[15]);
			else
				printf("\n");
			si_xing[15]++;
			break;
		case 16:printf("四星角色 **** 鹿野院平藏");
			if (si_xing[16] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[16]);
			else
				printf("\n");
			si_xing[16]++;
			break;
		case 17:printf("四星角色 **** 行秋");
			if (si_xing[17] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[17]);
			else
				printf("\n");
			si_xing[17]++;
			break;
		case 18:printf("四星角色 **** 芭芭拉");
			if (si_xing[18] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[18]);
			else
				printf("\n");
			si_xing[18]++;
			break;
		case 19:printf("四星角色 **** 坎蒂丝");
			if (si_xing[19] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[19]);
			else
				printf("\n");
			si_xing[19]++;
			break;
		case 20:printf("四星角色 **** 北斗");
			if (si_xing[20] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[20]);
			else
				printf("\n");
			si_xing[20]++;
			break;
		case 21:printf("四星角色 **** 菲谢尔");
			if (si_xing[21] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[21]);
			else
				printf("\n");
			si_xing[21]++;
			break;
		case 22:printf("四星角色 **** 雷泽");
			if (si_xing[22] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[22]);
			else
				printf("\n");
			si_xing[22]++;
			break;
		case 23:printf("四星角色 **** 丽莎");
			if (si_xing[23] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[23]);
			else
				printf("\n");
			si_xing[23]++;
			break;
		case 24:printf("四星角色 **** 九条裟罗");
			if (si_xing[24] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[24]);
			else
				printf("\n");
			si_xing[24]++;
			break;
		case 25:printf("四星角色 **** 多莉");
			if (si_xing[25] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[25]);
			else
				printf("\n");
			si_xing[25]++;
			break;
		case 26:printf("四星角色 **** 柯莱");
			if (si_xing[26] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[26]);
			else
				printf("\n");
			si_xing[26]++;
			break;
		case 27:printf("四星角色 **** 瑶瑶");
			if (si_xing[27] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[27]);
			else
				printf("\n");
			si_xing[27]++;
			break;
		case 28:printf("四星角色 **** 卡维");
			if (si_xing[28] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[28]);
			else
				printf("\n");
			si_xing[28]++;
			break;
		case 29:printf("四星角色 **** 绮良良");
			if (si_xing[29] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[29]);
			else
				printf("\n");
			si_xing[29]++;
			break;
		case 30:printf("四星角色 **** 珐露珊");
			if (si_xing[30] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[30]);
			else
				printf("\n");
			si_xing[30]++;
			break;
		case 31:printf("四星角色 **** 久岐忍");
			if (si_xing[31] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[31]);
			else
				printf("\n");
			si_xing[31]++;
			break;
		case 32:printf("四星角色 **** 罗莎莉亚");
			if (si_xing[32] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[32]);
			else
				printf("\n");
			si_xing[32]++;
			break;
		case 33:printf("四星角色 **** 烟绯");
			if (si_xing[33] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[33]);
			else
				printf("\n");
			si_xing[33]++;
			break;
		case 34:printf("四星角色 **** 琳妮特");
			if (si_xing[34] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[34]);
			else
				printf("\n");
			si_xing[34]++;
			break;
		case 35:printf("四星角色 **** 菲米尼");
			if (si_xing[35] != 0)
				printf("   无主的星辉 +%d\n", si_xinghui[35]);
			else
				printf("\n");
			si_xing[35]++;
			break;
		}
	}
	else
	{
		int nchang = rand() % 18;
		switch (nchang)
		{
		case 0:printf("四星武器 **** 弓藏   无主的星辉 +2\n"); si_xingwu[0]++;
			break;
		case 1:printf("四星武器 **** 祭礼弓   无主的星辉 +2\n"); si_xingwu[1]++;
			break;
		case 2:printf("四星武器 **** 绝弦   无主的星辉 +2\n"); si_xingwu[2]++;
			break;
		case 3:printf("四星武器 **** 西风猎弓   无主的星辉 +2\n"); si_xingwu[3]++;
			break;
		case 4:printf("四星武器 **** 昭心   无主的星辉 +2\n"); si_xingwu[4]++;
			break;
		case 5:printf("四星武器 **** 祭礼残章   无主的星辉 +2\n"); si_xingwu[5]++;
			break;
		case 6:printf("四星武器 **** 流浪乐章   无主的星辉 +2\n"); si_xingwu[6]++;
			break;
		case 7:printf("四星武器 **** 西风秘典   无主的星辉 +2\n"); si_xingwu[7]++;
			break;
		case 8:printf("四星武器 **** 西风长枪   无主的星辉 +2\n"); si_xingwu[8]++;
			break;
		case 9:printf("四星武器 **** 匣里灭辰   无主的星辉 +2\n"); si_xingwu[9]++;
			break;
		case 10:printf("四星武器 **** 雨裁   无主的星辉 +2\n"); si_xingwu[10]++;
			break;
		case 11:printf("四星武器 **** 祭礼大剑   无主的星辉 +2\n"); si_xingwu[11]++;
			break;
		case 12:printf("四星武器 **** 钟剑   无主的星辉 +2\n"); si_xingwu[12]++;
			break;
		case 13:printf("四星武器 **** 西风大剑   无主的星辉 +2\n"); si_xingwu[13]++;
			break;
		case 14:printf("四星武器 **** 匣里龙吟   无主的星辉 +2\n"); si_xingwu[14]++;
			break;
		case 15:printf("四星武器 **** 祭礼剑   无主的星辉 +2\n"); si_xingwu[15]++;
			break;
		case 16:printf("四星武器 **** 笛剑   无主的星辉 +2\n"); si_xingwu[16]++;
			break;
		case 17:printf("四星武器 **** 西风剑   无主的星辉 +2\n"); si_xingwu[17]++;
			break;
		}
	}

	c1 = 0;
	c2++;
	c4++;
	ctotal++;
}
void sanxingchang()
{
	int three = rand() % 13;
	switch (three)
	{
	case 0:printf("三星武器 *** 弹弓   无主的星尘 +15\n"); san_xing[0]++;
		break;
	case 1:printf("三星武器 *** 神射手之誓   无主的星尘 +15\n"); san_xing[1]++;
		break;
	case 2:printf("三星武器 *** 鸦羽弓   无主的星尘 +15\n"); san_xing[2]++;
		break;
	case 3:printf("三星武器 *** 翡玉法球   无主的星尘 +15\n"); san_xing[3]++;
		break;
	case 4:printf("三星武器 *** 讨龙英杰谭   无主的星尘 +15\n"); san_xing[4]++;
		break;
	case 5:printf("三星武器 *** 魔导绪论   无主的星尘 +15\n"); san_xing[5]++;
		break;
	case 6:printf("三星武器 *** 黑缨枪   无主的星尘 +15\n"); san_xing[6]++;
		break;
	case 7:printf("三星武器 *** 以理服人   无主的星尘 +15\n"); san_xing[7]++;
		break;
	case 8:printf("三星武器 *** 沐浴龙血的剑   无主的星尘 +15\n"); san_xing[8]++;
		break;
	case 9:printf("三星武器 *** 铁影阔剑   无主的星尘 +15\n"); san_xing[9]++;
		break;
	case 10:printf("三星武器 *** 飞天御剑   无主的星尘 +15\n"); san_xing[10]++;
		break;
	case 11:printf("三星武器 *** 黎明神剑   无主的星尘 +15\n"); san_xing[11]++;
		break;
	case 12:printf("三星武器 *** 冷刃   无主的星尘 +15\n"); san_xing[12]++;
		break;
	}
	c1++;
	c2++;
	c3++;
	ctotal++;
}
void onechang()
{
	int chang = rand() % 10000;
	si_xingming();
	wu_xingming();
	if (c2 <= 73)
	{
		if (c1 <= 7)
		{
			if (chang < 60)
			{
				wuxingchangzhu();
			}
			else if (chang >= 60 && chang < 570)
			{
				sixingchangzhu();
			}
			else
			{
				sanxingchang();
			}
		}
		else if (c1 >= 8)
		{
			if (chang < 60)
			{
				wuxingchangzhu();
			}
			else if (chang >= 60 && chang < 570 + 5100 * (c1 - 7))
			{
				sixingchangzhu();
			}
			else
			{
				sanxingchang();
			}
		}
	}
	else
	{
		if (c1 <= 7)
		{
			if (chang < 60 + 600 * (c2 - 73))
			{
				wuxingchangzhu();
			}
			else if (chang >= 60 && chang < 570)
			{
				sixingchangzhu();
			}
			else
			{
				sanxingchang();
			}
		}
		else if (c1 >= 8)
		{
			if (chang < 60 + 600 * (c2 - 73))
			{
				wuxingchangzhu();
			}
			else if (chang >= 60 + 600 * (c2 - 73) && chang < 570 + 5100 * (c1 - 7))
			{
				sixingchangzhu();
			}
			else
			{
				sanxingchang();
			}
		}
	}
	printf("\n");
	xiang_yu--;
}
void changchou()
{
	system("cls");
	while (1)
	{
		menuchang();
		srand(time(0));
		start();
		int x = 0;
		printf("请输入抽卡数：\n");
		scanf_s("%d", &x);
		if (x == 1)
		{
			start();
			if (xiang_yu < 1 && yuan_shi < 160 && xing_chen < 75 && xing_hui < 5)
				printf("充钱吧，少年\n");
			if (x <= xiang_yu)
			{
				onechang();
			}
			else if(yuan_shi >= 160)
			{
				xiang_yu += 1;
				yuan_shi -= 160;
				onechang();
			}
			else if (xing_chen >= 75)
			{
				xiang_yu += 1;
				xing_chen0 -= 75;
				onechang();
			}
			else if (xing_hui >= 5)
			{
				xiang_yu += 1;
				xing_hui0 -= 5;
				onechang();
			}
		}
		else if (x == 10)
		{
			for (int i = 0; i < x; i++)
			{
				start();
				if (x <= xiang_yu)
				{
					onechang();
				}
				else if (yuan_shi >= 160)
				{
					xiang_yu += 1;
					yuan_shi -= 160;
					onechang();
				}
				else if (xing_chen >= 75)
				{
					xiang_yu += 1;
					xing_chen0 -= 75;
					onechang();
				}
				else if (xing_hui >= 5)
				{
					xiang_yu += 1;
					xing_hui0 -= 5;
					onechang();
				}
			}
			if (xiang_yu < 1 && yuan_shi < 160 && xing_chen < 75 && xing_hui < 5)
				printf("充钱吧，少年\n");
		}
         if (x == 0)
		{
			printf("总共抽取%d抽\n", ctotal);
			printf("五星共%d个\n", c5);
			printf("四星共%d个\n", c4);
			printf("三星共%d个\n", c3);
			system("pause");
			if (_kbhit)
			{
				choukache();
			}
		}
		system("pause");
		system("cls");
	}
}
int xing_chen0 = 0, xing_hui0 = 0;
int xingchen()
{
	int sum = 0;
	for (int i = 0; i < 13; i++)
	{
		sum += san_xing[i];
	}
	sum = 15 * sum;
	sum += xing_chen0;
	return sum;
}
void si_xingming()
{
	for (int i = 0; i < 36; i++)
	{
		if (si_xing[i] == 0)
			si_xinghui[i] = 0;
		else if (si_xing[i] > 0 && si_xing[i] < 6)
			si_xinghui[i] = 2;
		else if (si_xing[i] >= 6)
			si_xinghui[i] = 5;
	}
}
void wu_xingming()
{
	for (int i = 0; i < 8; i++)
	{
		if (wu_xing[i] == 0)
			wu_xinghui[i] = 0;
		else if (wu_xing[i] > 0 && wu_xing[i] < 6)
			wu_xinghui[i] = 10;
		else if (wu_xing[i] >= 6)
			wu_xinghui[i] = 25;
	}
}
int xinghui()
{
	int sum = 0;
	for (int i = 0; i < 36; i++)
	{
		sum += si_xinghui[i];
	}
	for (int i = 0; i < 18; i++)
	{
		sum += si_xingwu[i] * 2;
	}
	for (int i = 0; i < 8; i++)
	{
		sum += wu_xinghui[i];
	}
	for (int i = 0; i < 10; i++)
	{
		sum += wu_xingwu[i] * 10;
	}
	sum += xing_hui0;
	return sum;
}
