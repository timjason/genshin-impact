#define  _CRT_SECURE_NO_WARNINGS
#include"string.h"
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
int san_xing[13] = { 0 };//三星命座
int si_xing[36] = { 0 };//四星角色（个数）命座
int si_xinghui[36] = { 0 };//四星角色给的星辉
int si_xingwu[18] = { 0 };//四星武器个数
int wu_xing[8] = { 0 };//五星角色（个数）命座
int wu_xingwu[10] = { 0 };//五星武器个数
int wu_xinghui[8] = { 0 };//五星角色给的星辉
int arr[9] = { 0 };//用来确定随机up

//up的选取
void up_cho()
{
	srand((unsigned)time(NULL));

	arr[0] = rand() % 7 + 1;//五星up
	arr[1] = rand() % 11 + 1;//四星up
	arr[2] = rand() % 11 + 13;//四星up
	arr[3] = rand() % 11 + 25;//四星up
	arr[4] = rand() % 4 + 1;//五星武器
	arr[5] = rand() % 4 + 5;//五星武器
	arr[6] = rand() % 5 + 1;//四星武器
	arr[7] = rand() % 5 + 7;//四星武器
	arr[8] = rand() % 5 + 13;//四星武器
	//这样调概率是为了不出现重复的up
}

//up池
void menu()
{

	printf("原神抽卡模拟器：\n");
	printf("---------------------------------------------------------------------\n");
	printf("限定up池：                                             \n");
	int currentIndex = 1;//当前读取的行
	FILE* file5 = fopen("./files/up/5.txt", "r");
	char ch_rank[20], en_rank[20], ch_name[20];
	while (!feof(file5))
	{
		if (currentIndex == arr[0])//如果读到指定行就输出
		{
			fscanf(file5, "%s %s %s", ch_rank, en_rank, ch_name);
			printf("五星限定up:%s %s %s \n", ch_rank, en_rank, ch_name);
			break;
		}
		fscanf(file5, "%s %s %s", ch_rank, en_rank, ch_name);
		currentIndex++;
	}
	fclose(file5);
	//5星up

	printf("四星up：                             \n");

	FILE* file4r = fopen("./files/up/4r.txt", "r");
	char c_rank[20], e_rank[20], c_name[20];
	int cur = 1;//当前读取的行
	while (!feof(file4r))
	{
		if (cur == arr[1])//如果读到指定行就输出
		{
			fscanf(file4r, "%s %s %s\n", c_rank, e_rank, c_name);
			printf("%s %s %s \n", c_rank, e_rank, c_name);
			break;
		}
		fscanf(file4r, "%s %s %s", c_rank, e_rank, c_name);
		cur++;
	}

	rewind(file4r);
	cur = 1;//当前读取的行变成第一行
	while (!feof(file4r))
	{
		if (cur == arr[2])//如果读到指定行就输出
		{
			fscanf(file4r, "%s %s %s\n", c_rank, e_rank, c_name);
			printf("%s %s %s \n", c_rank, e_rank, c_name);
			break;
		}
		fscanf(file4r, "%s %s %s", c_rank, e_rank, c_name);
		cur++;
	}
	rewind(file4r);
	cur = 1;//当前读取的行变成第一行
	while (!feof(file4r))
	{
		if (cur == arr[3])//如果读到指定行就输出
		{
			fscanf(file4r, "%s %s %s\n", c_rank, e_rank, c_name);
			printf("%s %s %s \n", c_rank, e_rank, c_name);
			break;
		}
		fscanf(file4r, "%s %s %s", c_rank, e_rank, c_name);
		cur++;
	}

	fclose(file4r);
	printf("---------------------------------------------------------------------\n");
	printf("抽卡数：1  or  10\n");
	printf("---------------------------------------------------------------------\n");
	printf("退出exit(0)\n");
}
//改了up的生成
void wuxing()
{
	FILE* file5 = fopen("./files/up/5.txt", "r");
	rewind(file5);
	if (up6 == 1)
	{
		int currentIndex = 1;//当前读取的行
		char ch_rank[20], en_rank[20], ch_name[20];
		while (!feof(file5))
		{
			if (currentIndex == arr[0])//如果读到指定行就输出
			{
				fscanf(file5, "%s %s %s", ch_rank, en_rank, ch_name);
				printf("%s %s %s ", ch_rank, en_rank, ch_name);
				if (wu_xing[arr[0]] != 0)
					printf("   无主的星辉 +%d\n", wu_xinghui[arr[0]]);
				else
					printf("\n");
				wu_xing[arr[0]]++;
				break;
			}
			fscanf(file5, "%s %s %s", ch_rank, en_rank, ch_name);
			currentIndex++;
		}
		up6 = 0, up2 = 0, up1++, up5++, uptotal++;
	}
	//大保底
	else
	{
		int wai = rand() % 13;
		if (wai < 7)
		{
			int wuwa = rand() % 7 + 1;
			while (wuwa == arr[0])
				wuwa = rand() % 7 + 1;
			//避免随机刚好到up角色
			rewind(file5);
			int currentIndex = 1;//当前读取的行
			while (!feof(file5))
			{
				char ch_rank[20], en_rank[20], ch_name[20];
				if (currentIndex == wuwa)//如果读到指定行就输出
				{
					fscanf(file5, "%s %s %s", ch_rank, en_rank, ch_name);
					printf("%s %s %s", ch_rank, en_rank, ch_name);
					if (wu_xing[wuwa] != 0)
						printf("   无主的星辉 +%d\n", wu_xinghui[wuwa]);
					else
						printf("\n");
					wu_xing[wuwa]++;
					break;
				}
				fscanf(file5, "%s %s %s", ch_rank, en_rank, ch_name);
				currentIndex++;
			}
			up1++;
			up2 = 0;
			up5++;
			uptotal++;
			up6 = 1;
		}
		//歪了其他五星
		else
		{
			int currentIndex = 1;//当前读取的行
			char ch_rank[20], en_rank[20], ch_name[20];
			while (!feof(file5))
			{
				if (currentIndex == arr[0])//如果读到指定行就输出
				{
					fscanf(file5, "%s %s %s", ch_rank, en_rank, ch_name);
					printf("%s %s %s", ch_rank, en_rank, ch_name);
					if (wu_xing[arr[0]] != 0)
						printf("   无主的星辉 +%d\n", wu_xinghui[arr[0]]);
					else
						printf("\n");
					wu_xing[arr[0]]++;
					break;
				}
				fscanf(file5, "%s %s %s", ch_rank, en_rank, ch_name);
				currentIndex++;
			}
			up1++;
			up2 = 0;
			up5++;
			uptotal++;
			up6 = 0;
		}
		//抽出up五星
		fclose(file5);
	}
}
//
void sixing()
{
	int four = rand() % 13;
	if (four < 7)
	{
		FILE* file4r = fopen("./files/up/4r.txt", "r");
		if (up7 == 1)
		{
			int ab = rand() % 2 + 1;//arr[1]-arr[3]随机一行
			int currentIndex = 1;//当前读取的行
			char ch_rank[20], en_rank[20], ch_name[20];
			rewind(file4r);
			while (!feof(file4r))
			{
				if (currentIndex == arr[ab])//如果读到指定行就输出
				{
					fscanf(file4r, "%s %s %s", ch_rank, en_rank, ch_name);
					printf("%s %s %s", ch_rank, en_rank, ch_name);
					if (si_xing[arr[ab]] > 0)
						printf("   无主的星辉 +%d\n", si_xinghui[arr[ab]]);
					else
						printf("\n");
					si_xing[arr[ab]]++;
					break;
				}
				fscanf(file4r, "%s %s %s", ch_rank, en_rank, ch_name);
				currentIndex++;
			}
			up7 = 0;
		}
		//保底出up四星
		else
		{
			int i = rand() % 13, m = rand() % 2 + 1;
			if (i < 7)
			{
				rewind(file4r);
				int currentIndex = 1;//当前读取的行
				char ch_rank[20], en_rank[20], ch_name[20];
				while (!feof(file4r))
				{
					if (currentIndex == arr[m])//如果读到指定行就输出
					{
						fscanf(file4r, "%s %s %s ", ch_rank, en_rank, ch_name);
						printf("%s %s %s", ch_rank, en_rank, ch_name);
						if (si_xing[arr[m]] > 0)
							printf("   无主的星辉 +%d\n", si_xinghui[arr[m]]);
						else
							printf("\n");
						si_xing[arr[m]]++;
						break;
					}
					fscanf(file4r, "%s %s %s", ch_rank, en_rank, ch_name);
					currentIndex++;
				}
				up7 = 0;
			}
			//非保底出up四星
			else
			{
				rewind(file4r);
				m = rand() % 35 + 1;
				while (m == arr[1] || m == arr[2] || m == arr[3])
					m = rand() % 35 + 1;
				//防止抽出up的4星
				int currentIndex = 1;//当前读取的行
				char ch_rank[20], en_rank[20], ch_name[20];
				while (!feof(file4r))
				{
					if (currentIndex == m)//如果读到指定行就输出
					{
						fscanf(file4r, "%s %s %s", ch_rank, en_rank, ch_name);
						printf("%s %s %s ", ch_rank, en_rank, ch_name);
						if (si_xing[m] > 0)
							printf("   无主的星辉 +%d\n", si_xinghui[m]);
						else
							printf("\n");
						si_xing[m]++;
						break;
					}
					fscanf(file4r, "%s %s %s", ch_rank, en_rank, ch_name);
					currentIndex++;
				}
				up7++;
			}
			//非保底出非up四星
		}
		fclose(file4r);
	}
	else
	{
		int nchang = rand() % 17 + 1;
		int currentIndex = 1;//当前读取的行
		FILE* file4w = fopen("./files/武器/4w.txt", "r");
		rewind(file4w);
		char ch_rank[20], en_rank[20], ch_name[20];
		while (!feof(file4w))
		{
			if (currentIndex == nchang)//如果读到指定行就输出
			{
				si_xingwu[nchang]++;//记录数据
				fscanf(file4w, "%s %s %s", ch_rank, en_rank, ch_name);
				printf("%s %s %s 无主的星辉 +2\n", ch_rank, en_rank, ch_name);
				break;
			}
			fscanf(file4w, "%s %s %s", ch_rank, en_rank, ch_name);
			currentIndex++;
		}

		fclose(file4w);
	}
	up1 = 0;
	up2++;
	up4++;
	uptotal++;
}
//
void sanxing()
{
	int three = rand() % 12 + 1;
	int currentIndex = 1;//当前读取的行
	FILE* file3 = fopen("./files/3.txt", "r");
	rewind(file3);
	char ch_rank[20], en_rank[20], ch_name[20];
	while (!feof(file3))
	{
		if (currentIndex == three)//如果读到指定行就输出
		{
			san_xing[three]++;
			fscanf(file3, "%s %s %s", ch_rank, en_rank, ch_name);
			printf("%s %s %s 无主的星尘 +15\n", ch_rank, en_rank, ch_name);
			break;
		}
		fscanf(file3, "%s %s %s", ch_rank, en_rank, ch_name);
		currentIndex++;
	}

	fclose(file3);

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
			start();
			if ((jiu_chan + yuan_shi / 160 + xing_chen / 75 + xing_hui / 5) < 10)
				printf("充钱吧，少年\n");
			else
			{
				for (int i = 0; i < x; i++)
				{
					if (1 <= jiu_chan)
					{
						one();
						Sleep(100);
					}
					else if (yuan_shi >= 160)
					{
						jiu_chan += 1;
						yuan_shi -= 160;
						one();
						Sleep(100);
					}
					else if (xing_chen >= 75)
					{
						jiu_chan += 1;
						xing_chen0 -= 75;
						one();
						Sleep(100);
					}
					else if (xing_hui >= 5)
					{
						jiu_chan += 1;
						xing_hui0 -= 5;
						one();
						Sleep(100);
					}
				}
			}
			start();
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

//武器池
void menuwu()
{
	printf("武器池:\n");
	printf("---------------------------------------------------------------------\n");
	int currentIndex = 1;//当前读取的行
	FILE* file5 = fopen("./files/武器/5.txt", "r");
	char ch_rank[20], en_rank[20], ch_name[20];
	printf("五星武器限定up:\n");

	while (!feof(file5))
	{
		if (currentIndex == arr[4])//如果读到指定行就输出
		{
			fscanf(file5, "%s %s %s", ch_rank, en_rank, ch_name);
			printf("%s %s %s \n", ch_rank, en_rank, ch_name);
			break;
		}
		fscanf(file5, "%s %s %s", ch_rank, en_rank, ch_name);
		currentIndex++;
	}

	currentIndex = 1;
	while (1)
	{
		if (currentIndex == arr[5])//如果读到指定行就输出
		{
			fscanf(file5, "%s %s %s", ch_rank, en_rank, ch_name);
			printf("%s %s %s \n", ch_rank, en_rank, ch_name);
			break;
		}
		fscanf(file5, "%s %s %s", ch_rank, en_rank, ch_name);
		currentIndex++;
	}

	fclose(file5);
	//5星up

	printf("四星武器up:\n");

	FILE* file4w = fopen("./files/武器/4w.txt", "r");
	char c_rank[20], e_rank[20], c_name[20];
	for (int i = 6; i == 6 || i == 7 || i == 8; i++)
	{
		rewind(file4w);
		int cur = 1;//当前读取的行
		while (1)
		{
			if (cur == arr[i])//如果读到指定行就输出
			{
				fscanf(file4w, "%s %s %s\n", c_rank, e_rank, c_name);
				printf("%s %s %s \n", c_rank, e_rank, c_name);
				break;
			}
			fscanf(file4w, "%s %s %s", c_rank, e_rank, c_name);
			cur++;
		}
	}
	fclose(file4w);
	//4星up

	printf("抽卡数：1  or  10\n");
	printf("---------------------------------------------------------------------\n");
	printf("退出exit(0)\n");
}
//武器up展示
void wuxingwu()
{
	FILE* file5w = fopen("./files/武器/5.txt", "r");
	rewind(file5w);
	if (w6 == 1)
	{
		int currentIndex = 1;//当前读取的行
		int wufive = rand() % 1 + 4;
		char ch_rank[20], en_rank[20], ch_name[20];
		while (!feof(file5w))
		{
			if (currentIndex == arr[wufive])//如果读到指定行就输出
			{
				wu_xingwu[arr[wufive]]++;
				fscanf(file5w, "%s %s %s", ch_rank, en_rank, ch_name);
				printf("%s %s %s 无主的星辉 +10\n", ch_rank, en_rank, ch_name);
				break;
			}
			fscanf(file5w, "%s %s %s", ch_rank, en_rank, ch_name);
			currentIndex++;
		}

		w6 = 0, w1++, w2 = 0, wtotal++, w5++;
	}
	//保底五星up
	else
	{
		int wai = rand() % 100;
		if (wai < 25)
		{
			int wufivewai = rand() % 7 + 1;
			while (wufivewai == arr[4] || wufivewai == arr[5])
				wufivewai = rand() % 7 + 1;
			int currentIndex = 1;//当前读取的行
			char ch_rank[20], en_rank[20], ch_name[20];
			while (!feof(file5w))
			{
				if (currentIndex == wufivewai)//如果读到指定行就输出
				{
					wu_xingwu[wufivewai]++;
					fscanf(file5w, "%s %s %s", ch_rank, en_rank, ch_name);
					printf("%s %s %s 无主的星辉 +10\n", ch_rank, en_rank, ch_name);
					break;
				}
				fscanf(file5w, "%s %s %s", ch_rank, en_rank, ch_name);
				currentIndex++;
			}
			w6++;
			w1++;
			w2 = 0;
			wtotal++;
			w5++;
		}
		//歪非up武器
		else
		{
			int wuqi = rand() % 13;
			if (wuqi < 7)
			{
				int currentIndex = 1;//当前读取的行
				char ch_rank[20], en_rank[20], ch_name[20];
				while (!feof(file5w))
				{
					if (currentIndex == arr[4])//如果读到指定行就输出
					{
						wu_xingwu[arr[4]]++;
						fscanf(file5w, "%s %s %s", ch_rank, en_rank, ch_name);
						printf("%s %s %s 无主的星辉 +10\n", ch_rank, en_rank, ch_name);
						break;
					}
					fscanf(file5w, "%s %s %s", ch_rank, en_rank, ch_name);
					currentIndex++;
				}
			}
			else
			{

				int currentIndex = 1;//当前读取的行
				char ch_rank[20], en_rank[20], ch_name[20];
				while (!feof(file5w))
				{
					if (currentIndex == arr[5])//如果读到指定行就输出
					{
						wu_xingwu[arr[5]]++;
						fscanf(file5w, "%s %s %s", ch_rank, en_rank, ch_name);
						printf("%s %s %s 无主的星辉 +10\n", ch_rank, en_rank, ch_name);
						break;
					}
					fscanf(file5w, "%s %s %s", ch_rank, en_rank, ch_name);
					currentIndex++;
				}
				w1++;
				w2 = 0;
				w5++;
				wtotal++;
				w6 = 0;
			}
		}
		fclose(file5w);
	}
}
//
void sixingwu()
{
	FILE* file4w = fopen("./files/武器/4w.txt", "r");
	rewind(file4w);
	if (w7 == 1)
	{
		int wufive = rand() % 2 + 6;
		char ch_rank[20], en_rank[20], ch_name[20];
		int currentIndex = 1;
		rewind(file4w);
		while (!feof(file4w))
		{
			if (currentIndex == arr[wufive])//如果读到指定行就输出
			{
				si_xingwu[arr[wufive]]++;//记录数据
				fscanf(file4w, "%s %s %s", ch_rank, en_rank, ch_name);
				printf("%s %s %s 无主的星辉 +2\n", ch_rank, en_rank, ch_name);
				break;
			}
			fscanf(file4w, "%s %s %s", ch_rank, en_rank, ch_name);
			currentIndex++;
		}
		w7 = 0, w1 = 0, w2++, wtotal++, w4++;
	}
	//保底4星up
	else
	{
		int four = rand() % 13;
		if (four < 7)
		{
			int fourwai = rand() % 100;
			if (fourwai < 75)
			{
				int fourbu = rand() % 2 + 6;
				char ch_rank[20], en_rank[20], ch_name[20];
				int currentIndex = 1;
				rewind(file4w);
				while (!feof(file4w))
				{
					if (currentIndex == arr[fourbu])//如果读到指定行就输出
					{
						si_xingwu[arr[fourbu]]++;//记录数据
						fscanf(file4w, "%s %s %s", ch_rank, en_rank, ch_name);
						printf("%s %s %s 无主的星辉 +2\n", ch_rank, en_rank, ch_name);
						break;
					}
					fscanf(file4w, "%s %s %s", ch_rank, en_rank, ch_name);
					currentIndex++;
				}
				w1 = 0, w2++, w4++, wtotal++, w7 = 0;
			}
			//非保底4星upc
			else
			{
				fourwai = rand() % 17 + 1;
				while (fourwai == arr[6] || fourwai == arr[7] || fourwai == arr[8])
					fourwai = rand() % 17 + 1;
				//如果又抽到up的就重新生成

				char ch_rank[20], en_rank[20], ch_name[20];
				int currentIndex = 1;
				rewind(file4w);
				while (!feof(file4w))
				{
					if (currentIndex == fourwai)//如果读到指定行就输出
					{
						si_xingwu[fourwai]++;//记录数据
						fscanf(file4w, "%s %s %s", ch_rank, en_rank, ch_name);
						printf("%s %s %s 无主的星辉 +2\n", ch_rank, en_rank, ch_name);
						break;
					}
					fscanf(file4w, "%s %s %s", ch_rank, en_rank, ch_name);
					currentIndex++;
				}
				w1 = 0, w2++, w4++, wtotal++, w7++;
			}
		}
		else
		{
			int mchang = rand() % 35 + 1;
			int currentIndex = 1;//当前读取的行

			FILE* file4r = fopen("./files/武器/4r.txt", "r");
			rewind(file4r);
			char ch_rank[20], en_rank[20], ch_name[20];
			while (!feof(file4r))
			{
				if (currentIndex == mchang)//如果读到指定行就输出
				{
					fscanf(file4r, "%s %s %s", ch_rank, en_rank, ch_name);
					printf("%s %s %s", ch_rank, en_rank, ch_name);
					if (si_xing[mchang] > 0)
						printf("   无主的星辉 +%d\n", si_xinghui[mchang]);
					else
						printf("\n");
					si_xing[mchang]++;
					break;
				}
				fscanf(file4r, "%s %s %s", ch_rank, en_rank, ch_name);
				currentIndex++;
			}
			w1 = 0, w2++, w4++, wtotal++;
			fclose(file4r);
		}
	}
	fclose(file4w);
}
//
void sanxingwu()
{
	int three = rand() % 12 + 1;//指定要读取的行
	int currentIndex = 1;//当前读取的行
	FILE* file3 = fopen("./files/3.txt", "r");
	rewind(file3);
	char ch_rank[20], en_rank[20], ch_name[20];
	while (!feof(file3))
	{
		if (currentIndex == three)//如果读到指定行就输出
		{
			san_xing[three]++;
			fscanf(file3, "%s %s %s", ch_rank, en_rank, ch_name);
			printf("%s %s %s 无主的星尘 +15\n", ch_rank, en_rank, ch_name);
			break;
		}
		fscanf(file3, "%s %s %s", ch_rank, en_rank, ch_name);
		currentIndex++;
	}

	fclose(file3);

	w1++;
	w2++;
	w3++;
	wtotal++;
}
//
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
			if ((jiu_chan + yuan_shi / 160 + xing_chen / 75 + xing_hui / 5) < 10)
				printf("充钱吧，少年\n");
			else
			{
				for (int i = 0; i < 10; i++)
				{
					if (1 <= jiu_chan)
					{						
						onewu();				
						Sleep(100);
					}
					else if (yuan_shi >= 160)
					{
						jiu_chan += 1;
						yuan_shi -= 160;
						onewu();
						Sleep(100);
					}
					else if (xing_chen >= 75)
					{
						jiu_chan += 1;
						xing_chen0 -= 75;
						onewu();
						Sleep(100);
					}
					else if (xing_hui >= 5)
					{
						jiu_chan += 1;
						xing_hui0 -= 5;
						onewu();
						Sleep(100);
					}
				}
			}
			start();
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

//常驻池
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
		int mwu = rand() % 6 + 1;
		int currentIndex = 1;//当前读取的行

		FILE* file5r = fopen("./files/常驻/5r.txt", "r");
		rewind(file5r);
		char ch_rank[20], en_rank[20], ch_name[20];
		while (!feof(file5r))
		{
			if (currentIndex == mwu)//如果读到指定行就输出
			{
				fscanf(file5r, "%s %s %s", ch_rank, en_rank, ch_name);
				printf("%s %s %s", ch_rank, en_rank, ch_name);
				if (wu_xing[mwu] != 0)
					printf("   无主的星辉 +%d\n", wu_xinghui[mwu]);
				else
					printf("\n");
				wu_xing[mwu]++;
				break;
			}
			fscanf(file5r, "%s %s %s", ch_rank, en_rank, ch_name);
			currentIndex++;
		}

		fclose(file5r);
	}
	else
	{
		int nwu = rand() % 8 + 1;
		int currentIndex = 1;//当前读取的行

		FILE* file5w = fopen("./files/常驻/5w.txt", "r");
		rewind(file5w);

		char ch_rank[20], en_rank[20], ch_name[20];
		while (!feof(file5w))
		{
			if (currentIndex == nwu)//如果读到指定行就输出
			{
				wu_xingwu[nwu]++;
				fscanf(file5w, "%s %s %s", ch_rank, en_rank, ch_name);
				printf("%s %s %s 无主的星辉 +10\n", ch_rank, en_rank, ch_name);
				break;
			}
			fscanf(file5w, "%s %s %s", ch_rank, en_rank, ch_name);
			currentIndex++;
		}

		fclose(file5w);

	}
	c1++;
	c2 = 0;
	c5++;
	ctotal++;
}
//
void sixingchangzhu()
{
	int fourchang = rand() % 13;
	if (fourchang < 7)
	{
		int mchang = rand() % 35 + 1;
		int currentIndex = 1;//当前读取的行

		FILE* file4r = fopen("./files/常驻/4r.txt", "r");
		rewind(file4r);
		char ch_rank[20], en_rank[20], ch_name[20];
		while (!feof(file4r))
		{
			if (currentIndex == mchang)//如果读到指定行就输出
			{
				si_xing[mchang]++;
				fscanf(file4r, "%s %s %s", ch_rank, en_rank, ch_name);
				printf("%s %s %s", ch_rank, en_rank, ch_name);
				if (si_xing[mchang] != 0)
					printf("   无主的星辉 +%d\n", si_xinghui[mchang]);
				else
					printf("\n");
				break;
			}
			fscanf(file4r, "%s %s %s", ch_rank, en_rank, ch_name);
			currentIndex++;
		}

		fclose(file4r);
	}
	else
	{
		int nchang = rand() % 17 + 1;
		int currentIndex = 1;//当前读取的行
		FILE* file4w = fopen("./files/常驻/4w.txt", "r");
		rewind(file4w);
		char ch_rank[20], en_rank[20], ch_name[20];
		while (!feof(file4w))
		{
			if (currentIndex == nchang)//如果读到指定行就输出
			{
				si_xingwu[nchang]++;//记录数据
				fscanf(file4w, "%s %s %s", ch_rank, en_rank, ch_name);
				printf("%s %s %s 无主的星辉 +2\n", ch_rank, en_rank, ch_name);
				break;
			}
			fscanf(file4w, "%s %s %s", ch_rank, en_rank, ch_name);
			currentIndex++;
		}

		fclose(file4w);
	}
	c1 = 0;
	c2++;
	c4++;
	ctotal++;

}
//
void sanxingchang()
{
	int three = rand() % 12 + 1;//指定要读取的行
	int currentIndex = 1;//当前读取的行
	FILE* file3 = fopen("./files/3.txt", "r");
	rewind(file3);
	char ch_rank[20], en_rank[20], ch_name[20];
	while (!feof(file3))
	{
		if (currentIndex == three)//如果读到指定行就输出
		{
			san_xing[three]++;
			fscanf(file3, "%s %s %s", ch_rank, en_rank, ch_name);
			printf("%s %s %s 无主的星尘 +15\n", ch_rank, en_rank, ch_name);
			break;
		}
		fscanf(file3, "%s %s %s", ch_rank, en_rank, ch_name);
		currentIndex++;
	}

	fclose(file3);

	c1++;
	c2++;
	c3++;
	ctotal++;
}
//
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
		else if (x == 10)
		{
			if (xiang_yu + yuan_shi / 160 + xing_chen / 75 + xing_hui / 5 < 10)
				printf("充钱吧，少年\n");
			else
			{
				for (int i = 0; i < x; i++)
				{
					if (1 <= xiang_yu)
					{
						onechang();	
						Sleep(100);
					}
					else if (yuan_shi >= 160)
					{
						xiang_yu += 1;
						yuan_shi -= 160;
						onechang();
						Sleep(100);
					}
					else if (xing_chen >= 75)
					{
						xiang_yu += 1;
						xing_chen0 -= 75;
						onechang();
						Sleep(100);
					}
					else if (xing_hui >= 5)
					{
						xiang_yu += 1;
						xing_hui0 -= 5;
						onechang();
						Sleep(100);
					}
				}
			}
			start();
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

//资源
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
