#include"stdio.h"
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include"warehouse.h"
extern yuan_shi, xing_chen, xing_chen0, xing_hui, xing_hui0, jiu_chan, xiang_yu;
int up1 = 0;//10��������Ǽ�����ÿ�������ǳ��ֹ���
int up2 = 0;//90��������Ǽ�����ÿ�������ǹ���
int up3 = 0;//������������
int up4 = 0;//���ǽ�ɫ����������
int up5 = 0;//���������ӽ�ɫ����
int uptotal = 0;//�ܳ���
int up6 = 0;//���ǽ�ɫС���׼���
int up7 = 0;//���ǽ�ɫ���׼���
int san_xing[13] = { 0 };
int si_xing[36] = { 0 };
int si_xinghui[36] = { 0 };
int si_xingwu[18] = { 0 };
int wu_xing[8] = { 0 };
int wu_xingwu[10] = { 0 };
int wu_xinghui[8] = { 0 };
void menu()
{
	printf("ԭ��鿨ģ������\n");
	printf("---------------------------------------------------------------------\n");
	printf("�޶�up�أ�                                             ��פ��:\n");
	printf("�����޶�up:������\n");
	printf("����up����糣���¶ɺ����ɯ����                              ��\n");
	printf("---------------------------------------------------------------------\n");
	printf("�鿨����1  or  10\n");
	printf("---------------------------------------------------------------------\n");
	printf("�˳�exit(0)\n");
}
void wuxing()
{
	if (up6 == 1)
	{
		printf("�����޶�up ***** ������");
		if (wu_xing[7] != 0)
			printf("   �������ǻ� +%d\n", wu_xinghui[0]);
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
			case 0:printf("���ǳ�פup ***** ����");
				if (wu_xing[0] != 0)
					printf("   �������ǻ� +%d\n", wu_xinghui[0]);
				else
					printf("\n");
				wu_xing[0]++;
				break;
			case 1:printf("���ǳ�פup ***** ��¬��");
				if (wu_xing[1] != 0)
					printf("   �������ǻ� +%d\n", wu_xinghui[0]);
				else
					printf("\n");
				wu_xing[1]++;
				break;
			case 2:printf("���ǳ�פup ***** Ī��");
				if (wu_xing[2] != 0)
					printf("   �������ǻ� +%d\n", wu_xinghui[0]);
				else
					printf("\n");
				wu_xing[2]++;
				break;
			case 3:printf("���ǳ�פup ***** ����");
				if (wu_xing[3] != 0)
					printf("   �������ǻ� +%d\n", wu_xinghui[0]);
				else
					printf("\n");
				wu_xing[3]++;
				break;
			case 4:printf("���ǳ�פup ***** ��");
				if (wu_xing[4] != 0)
					printf("   �������ǻ� +%d\n", wu_xinghui[0]);
				else
					printf("\n");
				wu_xing[4]++;
				break;
			case 5:printf("���ǳ�פup ***** ������");
				if (wu_xing[6] != 0)
					printf("   �������ǻ� +%d\n", wu_xinghui[0]);
				else
					printf("\n");
				wu_xing[6]++;
				break;
			case 6:printf("���ǳ�פup ***** ��ϣ��");
				if (wu_xing[6] != 0)
					printf("   �������ǻ� +%d\n", wu_xinghui[0]);
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
			printf("�����޶�up ***** ������");
			if (wu_xing[7] != 0)
				printf("   �������ǻ� +%d\\n", wu_xinghui[0]);
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
			case 0:printf("���ǽ�ɫ **** ���");
				if (si_xing[33] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[33]);
				else
					printf("\n");
				si_xing[33]++;
				break;
			case 1:printf("���ǽ�ɫ **** ��ɯ����");
				if (si_xing[32] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[32]);
				else
					printf("\n");
				si_xing[32]++;
				break;
			case 2:printf("���ǽ�ɫ **** ��¶ɺ");
				if (si_xing[30] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[30]);
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
				case 0:printf("���ǽ�ɫ **** ���");
					if (si_xing[33] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[33]);
					printf("\n");

					si_xing[33]++;
					break;
				case 1:printf("���ǽ�ɫ **** ��ɯ����");
					if (si_xing[32] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[32]);
					printf("\n");
					si_xing[32]++;
					break;
				case 2:printf("���ǽ�ɫ **** ��¶ɺ");
					if (si_xing[30] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[30]);
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
				case 0:printf("���ǽ�ɫ **** ŵ����");
					if (si_xing[0] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[0]);
					else
						printf("\n");
					si_xing[0]++;
					break;
				case 1:printf("���ǽ�ɫ **** ����");
					if (si_xing[1] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[1]);
					else
						printf("\n");
					si_xing[1]++;
					break;
				case 2:printf("���ǽ�ɫ **** ����");
					if (si_xing[2] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[2]);
					else
						printf("\n");
					si_xing[2]++;
					break;
				case 3:printf("���ǽ�ɫ **** ����");
					if (si_xing[3] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[3]);
					else
						printf("\n");
					si_xing[3]++;
					break;
				case 4:printf("���ǽ�ɫ **** ����");
					if (si_xing[4] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[4]);
					else
						printf("\n");
					si_xing[4]++;
					break;
				case 5:printf("���ǽ�ɫ **** ������");
					if (si_xing[5] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[5]);
					else
						printf("\n");
					si_xing[5]++;
					break;
				case 6:printf("���ǽ�ɫ **** ����");
					if (si_xing[6] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[6]);
					else
						printf("\n");
					si_xing[6]++;
					break;
				case 7:printf("���ǽ�ɫ **** ����");
					if (si_xing[7] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[7]);
					else
						printf("\n");
					si_xing[7]++;
					break;
				case 8:printf("���ǽ�ɫ **** ����");
					if (si_xing[8] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[8]);
					else
						printf("\n");
					si_xing[8]++;
					break;
				case 9:printf("���ǽ�ɫ **** ����");
					if (si_xing[9] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[9]);
					else
						printf("\n");
					si_xing[9]++;
					break;
				case 10:printf("���ǽ�ɫ **** ����");
					if (si_xing[10] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[10]);
					else
						printf("\n");
					si_xing[10]++;
					break;
				case 11:printf("���ǽ�ɫ **** �ϰ���");
					if (si_xing[11] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[11]);
					else
						printf("\n");
					si_xing[11]++;
					break;
				case 12:printf("���ǽ�ɫ **** �׿�");
					if (si_xing[12] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[12]);
					else
						printf("\n");
					si_xing[12]++;
					break;
				case 13:printf("���ǽ�ɫ **** ������");
					if (si_xing[13] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[13]);
					else
						printf("\n");
					si_xing[13]++;
					break;
				case 14:printf("���ǽ�ɫ **** ɰ��");
					if (si_xing[14] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[14]);
					else
						printf("\n");
					si_xing[14]++;
					break;
				case 15:printf("���ǽ�ɫ **** ����");
					if (si_xing[15] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[15]);
					else
						printf("\n");
					si_xing[15]++;
					break;
				case 16:printf("���ǽ�ɫ **** ¹ҰԺƽ��");
					if (si_xing[16] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[16]);
					else
						printf("\n");
					si_xing[16]++;
					break;
				case 17:printf("���ǽ�ɫ **** ����");
					if (si_xing[17] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[17]);
					else
						printf("\n");
					si_xing[17]++;
					break;
				case 18:printf("���ǽ�ɫ **** �Ű���");
					if (si_xing[18] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[18]);
					else
						printf("\n");
					si_xing[18]++;
					break;
				case 19:printf("���ǽ�ɫ **** ����˿");
					if (si_xing[19] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[19]);
					else
						printf("\n");
					si_xing[19]++;
					break;
				case 20:printf("���ǽ�ɫ **** ����");
					if (si_xing[20] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[20]);
					else
						printf("\n");
					si_xing[20]++;
					break;
				case 21:printf("���ǽ�ɫ **** ��л��");
					if (si_xing[21] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[21]);
					else
						printf("\n");
					si_xing[21]++;
					break;
				case 22:printf("���ǽ�ɫ **** ����");
					if (si_xing[22] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[22]);
					else
						printf("\n");
					si_xing[22]++;
					break;
				case 23:printf("���ǽ�ɫ **** ��ɯ");
					if (si_xing[23] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[23]);
					else
						printf("\n");
					si_xing[23]++;
					break;
				case 24:printf("���ǽ�ɫ **** ��������");
					if (si_xing[24] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[24]);
					else
						printf("\n");
					si_xing[24]++;
					break;
				case 25:printf("���ǽ�ɫ **** ����");
					if (si_xing[25] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[25]);
					else
						printf("\n");
					si_xing[25]++;
					break;
				case 26:printf("���ǽ�ɫ **** ����");
					if (si_xing[26] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[26]);
					else
						printf("\n");
					si_xing[26]++;
					break;
				case 27:printf("���ǽ�ɫ **** ����");
					if (si_xing[27] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[27]);
					else
						printf("\n");
					si_xing[27]++;
					break;
				case 28:printf("���ǽ�ɫ **** ��ά");
					if (si_xing[28] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[28]);
					else
						printf("\n");
					si_xing[28]++;
					break;
				case 29:printf("���ǽ�ɫ **** �����");
					if (si_xing[29] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[29]);
					else
						printf("\n");
					si_xing[29]++;
					break;
				case 31:printf("���ǽ�ɫ **** �����");
					if (si_xing[31] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[31]);
					else
						printf("\n");
					si_xing[31]++;
					break;
				case 32:printf("���ǽ�ɫ **** ������");
					if (si_xing[34] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[34]);
					else
						printf("\n");
					si_xing[34]++;
					break;
				case 33:printf("���ǽ�ɫ **** ������");
					if (si_xing[35] != 0)
						printf("   �������ǻ� +%d\n", si_xinghui[35]);
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
		case 0:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[0]++;
			break;
		case 1:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[1]++;
			break;
		case 2:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[2]++;
			break;
		case 3:printf("�������� **** �����Թ�   �������ǻ� +2\n"); si_xingwu[3]++;
			break;
		case 4:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[4]++;
			break;
		case 5:printf("�������� **** �������   �������ǻ� +2\n"); si_xingwu[5]++;
			break;
		case 6:printf("�������� **** ��������   �������ǻ� +2\n"); si_xingwu[6]++;
			break;
		case 7:printf("�������� **** �����ص�   �������ǻ� +2\n"); si_xingwu[7]++;
			break;
		case 8:printf("�������� **** ���糤ǹ   �������ǻ� +2\n"); si_xingwu[8]++;
			break;
		case 9:printf("�������� **** ϻ����   �������ǻ� +2\n"); si_xingwu[9]++;
			break;
		case 10:printf("�������� **** ���   �������ǻ� +2\n"); si_xingwu[10]++;
			break;
		case 11:printf("�������� **** �����   �������ǻ� +2\n"); si_xingwu[11]++;
			break;
		case 12:printf("�������� **** �ӽ�   �������ǻ� +2\n"); si_xingwu[12]++;
			break;
		case 13:printf("�������� **** �����   �������ǻ� +2\n"); si_xingwu[13]++;
			break;
		case 14:printf("�������� **** ϻ������   �������ǻ� +2\n"); si_xingwu[14]++;
			break;
		case 15:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[15]++;
			break;
		case 16:printf("�������� **** �ѽ�   �������ǻ� +2\n"); si_xingwu[16]++;
			break;
		case 17:printf("�������� **** ���罣   �������ǻ� +2\n"); si_xingwu[17]++;
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
	case 0:printf("�������� *** ����   �������ǳ� +15\n"); san_xing[0]++;
		break;
	case 1:printf("�������� *** ������֮��   �������ǳ� +15\n"); san_xing[1]++;
		break;
	case 2:printf("�������� *** ѻ��   �������ǳ� +15\n"); san_xing[2]++;
		break;
	case 3:printf("�������� *** ������   �������ǳ� +15\n"); san_xing[3]++;
		break;
	case 4:printf("�������� *** ����Ӣ��̷   �������ǳ� +15\n"); san_xing[4]++;
		break;
	case 5:printf("�������� *** ħ������   �������ǳ� +15\n"); san_xing[5]++;
		break;
	case 6:printf("�������� *** ��ӧǹ   �������ǳ� +15\n"); san_xing[6]++;
		break;
	case 7:printf("�������� *** �������   �������ǳ� +15\n"); san_xing[7]++;
		break;
	case 8:printf("�������� *** ��ԡ��Ѫ�Ľ�   �������ǳ� +15\n"); san_xing[8]++;
		break;
	case 9:printf("�������� *** ��Ӱ����   �������ǳ� +15\n"); san_xing[9]++;
		break;
	case 10:printf("�������� *** ��������   �������ǳ� +15\n"); san_xing[10]++;
		break;
	case 11:printf("�������� *** ������   �������ǳ� +15\n"); san_xing[11]++;
		break;
	case 12:printf("�������� *** ����   �������ǳ� +15\n"); san_xing[12]++;
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
		printf("������鿨����\n");
		scanf_s("%d", &x);
		if (x == 1)
		{
			start();
			if (jiu_chan < 1 && yuan_shi < 160 && xing_chen < 75 && xing_hui < 5)
				printf("��Ǯ�ɣ�����\n");
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
			printf("��Ǯ�ɣ�����\n");
		}
		 if (x == 0)
		{
			printf("�ܹ���ȡ%d��\n", uptotal);
			printf("���ǹ�%d��\n", up5);
			printf("���ǹ�%d��\n", up4);
			printf("���ǹ�%d��\n", up3);
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
	printf("������:\n");
	printf("---------------------------------------------------------------------\n");
	printf("�鿨����1  or  10\n");
	printf("---------------------------------------------------------------------\n");
	printf("�˳�exit(0)\n");
}
void wuxingwu()
{
	if (w6 == 1)
	{
		int wufive = rand() % 2;
		switch (wufive)
		{
		case 0:printf("�������� ***** ��Ī˹֮��   �������ǻ� +10 \n");
			break;
		case 1:printf("�������� ***** ͼ�������Ļ���   �������ǻ� +10\n");
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
			case 0:printf("�������� ***** ����   �������ǻ� +10\n"); wu_xingwu[0]++;
				break;
			case 1:printf("�������� ***** �ǵ�ĩ·   �������ǻ� +10\n"); wu_xingwu[1]++;
				break;
			case 2:printf("�������� ***** ��ӥ��   �������ǻ� +10\n"); wu_xingwu[2]++;
				break;
			case 3:printf("�������� ***** �ķ�ԭ��   �������ǻ� +10\n"); wu_xingwu[3]++;
				break;
			case 4:printf("�������� ***** ���֮��   �������ǻ� +10\n"); wu_xingwu[4]++;
				break;
			case 5:printf("�������� ***** ���֮��   �������ǻ� +10\n"); wu_xingwu[5]++;
				break;
			case 6:printf("�������� ***** ���֮��   �������ǻ� +10\n"); wu_xingwu[6]++;
				break;
			case 7:printf("�������� ***** ���֮��   �������ǻ� +10\n"); wu_xingwu[7]++;
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
				printf("�������� ***** ��Ī˹֮��\n");
			}
			else
			{
				printf("�������� ***** ͼ�������Ļ���\n");
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
		case 0:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[15]++;
			break;
		case 1:printf("�������� **** ϻ����   �������ǻ� +2\n"); si_xingwu[9]++;
			break;
		case 2:printf("�������� **** ���罣   �������ǻ� +2\n"); si_xingwu[17]++;
			break;
		case 3:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[4]++;
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
				case 0:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[15]++;
					break;
				case 1:printf("�������� **** ϻ����   �������ǻ� +2\n"); si_xingwu[9]++;
					break;
				case 2:printf("�������� **** ���罣   �������ǻ� +2\n"); si_xingwu[17]++;
					break;
				case 3:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[4]++;
					break;
				}
				w1 = 0, w2++, w4++, wtotal++, w7 = 0;
			}
			else
			{
				fourwai = rand() % 14;
				switch (fourwai)
				{
				case 0:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[0]++;
					break;
				case 1:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[1]++;
					break;
				case 2:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[2]++;
					break;
				case 3:printf("�������� **** �����Թ�   �������ǻ� +2\n"); si_xingwu[3]++;
					break;
				case 4:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[4]++;
					break;
				case 5:printf("�������� **** �������   �������ǻ� +2\n"); si_xingwu[5]++;
					break;
				case 6:printf("�������� **** ��������   �������ǻ� +2\n"); si_xingwu[6]++;
					break;
				case 7:printf("�������� **** �����ص�   �������ǻ� +2\n"); si_xingwu[7]++;
					break;
				case 8:printf("�������� **** ���糤ǹ   �������ǻ� +2\n"); si_xingwu[8]++;
					break;
				case 9:printf("�������� **** ϻ����   �������ǻ� +2\n"); si_xingwu[9]++;
					break;
				case 10:printf("�������� **** ���   �������ǻ� +2\n"); si_xingwu[10]++;
					break;
				case 11:printf("�������� **** �����   �������ǻ� +2\n"); si_xingwu[11]++;
					break;
				case 12:printf("�������� **** �ӽ�   �������ǻ� +2\n"); si_xingwu[12]++;
					break;
				case 13:printf("�������� **** �����   �������ǻ� +2\n"); si_xingwu[13]++;
					break;
				case 14:printf("�������� **** ϻ������   �������ǻ� +2\n"); si_xingwu[14]++;
					break;
				case 15:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[15]++;
					break;
				case 16:printf("�������� **** �ѽ�   �������ǻ� +2\n"); si_xingwu[16]++;
					break;
				case 17:printf("�������� **** ���罣   �������ǻ� +2\n"); si_xingwu[17]++;
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
			case 0:printf("���ǽ�ɫ **** ŵ����");
				if (si_xing[0] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[0]);
				else
					printf("\n");
				si_xing[0]++;
				break;
			case 1:printf("���ǽ�ɫ **** ����");
				if (si_xing[1] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[1]);
				else
					printf("\n");
				si_xing[1]++;
				break;
			case 2:printf("���ǽ�ɫ **** ����");
				if (si_xing[2] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[2]);
				else
					printf("\n");
				si_xing[2]++;
				break;
			case 3:printf("���ǽ�ɫ **** ����");
				if (si_xing[3] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[3]);
				else
					printf("\n");
				si_xing[3]++;
				break;
			case 4:printf("���ǽ�ɫ **** ����");
				if (si_xing[4] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[4]);
				else
					printf("\n");
				si_xing[4]++;
				break;
			case 5:printf("���ǽ�ɫ **** ������");
				if (si_xing[5] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[5]);
				else
					printf("\n");
				si_xing[5]++;
				break;
			case 6:printf("���ǽ�ɫ **** ����");
				if (si_xing[6] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[6]);
				else
					printf("\n");
				si_xing[6]++;
				break;
			case 7:printf("���ǽ�ɫ **** ����");
				if (si_xing[7] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[7]);
				else
					printf("\n");
				si_xing[7]++;
				break;
			case 8:printf("���ǽ�ɫ **** ����");
				if (si_xing[8] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[8]);
				else
					printf("\n");
				si_xing[8]++;
				break;
			case 9:printf("���ǽ�ɫ **** ����");
				if (si_xing[9] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[9]);
				else
					printf("\n");
				si_xing[9]++;
				break;
			case 10:printf("���ǽ�ɫ **** ����");
				if (si_xing[10] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[10]);
				else
					printf("\n");
				si_xing[10]++;
				break;
			case 11:printf("���ǽ�ɫ **** �ϰ���");
				if (si_xing[11] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[11]);
				else
					printf("\n");
				si_xing[11]++;
				break;
			case 12:printf("���ǽ�ɫ **** �׿�");
				if (si_xing[12] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[12]);
				else
					printf("\n");
				si_xing[12]++;
				break;
			case 13:printf("���ǽ�ɫ **** ������");
				if (si_xing[13] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[13]);
				else
					printf("\n");
				si_xing[13]++;
				break;
			case 14:printf("���ǽ�ɫ **** ɰ��");
				if (si_xing[14] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[14]);
				else
					printf("\n");
				si_xing[14]++;
				break;
			case 15:printf("���ǽ�ɫ **** ����");
				if (si_xing[15] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[15]);
				else
					printf("\n");
				si_xing[15]++;
				break;
			case 16:printf("���ǽ�ɫ **** ¹ҰԺƽ��");
				if (si_xing[16] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[16]);
				else
					printf("\n");
				si_xing[16]++;
				break;
			case 17:printf("���ǽ�ɫ **** ����");
				if (si_xing[17] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[17]);
				else
					printf("\n");
				si_xing[17]++;
				break;
			case 18:printf("���ǽ�ɫ **** �Ű���");
				if (si_xing[18] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[18]);
				else
					printf("\n");
				si_xing[18]++;
				break;
			case 19:printf("���ǽ�ɫ **** ����˿");
				if (si_xing[19] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[19]);
				else
					printf("\n");
				si_xing[19]++;
				break;
			case 20:printf("���ǽ�ɫ **** ����");
				if (si_xing[20] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[20]);
				else
					printf("\n");
				si_xing[20]++;
				break;
			case 21:printf("���ǽ�ɫ **** ��л��");
				if (si_xing[21] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[21]);
				else
					printf("\n");
				si_xing[21]++;
				break;
			case 22:printf("���ǽ�ɫ **** ����");
				if (si_xing[22] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[22]);
				else
					printf("\n");
				si_xing[22]++;
				break;
			case 23:printf("���ǽ�ɫ **** ��ɯ");
				if (si_xing[23] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[23]);
				else
					printf("\n");
				si_xing[23]++;
				break;
			case 24:printf("���ǽ�ɫ **** ��������");
				if (si_xing[24] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[24]);
				else
					printf("\n");
				si_xing[24]++;
				break;
			case 25:printf("���ǽ�ɫ **** ����");
				if (si_xing[25] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[25]);
				else
					printf("\n");
				si_xing[25]++;
				break;
			case 26:printf("���ǽ�ɫ **** ����");
				if (si_xing[26] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[26]);
				else
					printf("\n");
				si_xing[26]++;
				break;
			case 27:printf("���ǽ�ɫ **** ����");
				if (si_xing[27] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[27]);
				else
					printf("\n");
				si_xing[27]++;
				break;
			case 28:printf("���ǽ�ɫ **** ��ά");
				if (si_xing[28] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[28]);
				else
					printf("\n");
				si_xing[28]++;
				break;
			case 29:printf("���ǽ�ɫ **** �����");
				if (si_xing[29] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[29]);
				else
					printf("\n");
				si_xing[29]++;
				break;
			case 30:printf("���ǽ�ɫ **** ��¶ɺ");
				if (si_xing[30] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[30]);
				else
					printf("\n");
				si_xing[30]++;
				break;
			case 31:printf("���ǽ�ɫ **** �����");
				if (si_xing[31] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[31]);
				else
					printf("\n");
				si_xing[31]++;
				break;
			case 32:printf("���ǽ�ɫ **** ��ɯ����");
				if (si_xing[32] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[32]);
				else
					printf("\n");
				si_xing[32]++;
				break;
			case 33:printf("���ǽ�ɫ **** ���");
				if (si_xing[33] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[33]);
				else
					printf("\n");
				si_xing[33]++;
				break;
			case 34:printf("���ǽ�ɫ **** ������");
				if (si_xing[34] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[34]);
				else
					printf("\n");
				si_xing[34]++;
				break;
			case 35:printf("���ǽ�ɫ **** ������");
				if (si_xing[35] != 0)
					printf("   �������ǻ� +%d\n", si_xinghui[35]);
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
	case 0:printf("�������� *** ����   �������ǳ� +15\n"); san_xing[0]++;
		break;
	case 1:printf("�������� *** ������֮��   �������ǳ� +15\n"); san_xing[1]++;
		break;
	case 2:printf("�������� *** ѻ��   �������ǳ� +15\n"); san_xing[2]++;
		break;
	case 3:printf("�������� *** ������   �������ǳ� +15\n"); san_xing[3]++;
		break;
	case 4:printf("�������� *** ����Ӣ��̷   �������ǳ� +15\n"); san_xing[4]++;
		break;
	case 5:printf("�������� *** ħ������   �������ǳ� +15\n"); san_xing[5]++;
		break;
	case 6:printf("�������� *** ��ӧǹ   �������ǳ� +15\n"); san_xing[6]++;
		break;
	case 7:printf("�������� *** �������   �������ǳ� +15\n"); san_xing[7]++;
		break;
	case 8:printf("�������� *** ��ԡ��Ѫ�Ľ�   �������ǳ� +15\n"); san_xing[8]++;
		break;
	case 9:printf("�������� *** ��Ӱ����   �������ǳ� +15\n"); san_xing[9]++;
		break;
	case 10:printf("�������� *** ��������   �������ǳ� +15\n"); san_xing[10]++;
		break;
	case 11:printf("�������� *** ������   �������ǳ� +15\n"); san_xing[11]++;
		break;
	case 12:printf("�������� *** ����   �������ǳ� +15\n"); san_xing[12]++;
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
		printf("������鿨����\n");
		scanf_s("%d", &x);
		if (x == 1)
		{
			start();
			if (jiu_chan < 1 && yuan_shi < 160 && xing_chen < 75 && xing_hui < 5)
				printf("��Ǯ�ɣ�����\n");
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
				printf("��Ǯ�ɣ�����\n");
		}
		 if (x == 0)
		{
			printf("�ܹ���ȡ%d��\n", wtotal);
			printf("���ǹ�%d��\n", w5);
			printf("���ǹ�%d��\n", w4);
			printf("���ǹ�%d��\n", w3);
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
	printf("��פ��:\n");
	printf("---------------------------------------------------------------------\n");
	printf("�鿨����1  or  10\n");
	printf("---------------------------------------------------------------------\n");
	printf("�˳�exit(0)\n");
}
void wuxingchangzhu()
{
	int five = rand() % 13;
	if (five < 7)
	{
		int mwu = rand() % 7;
		switch (mwu)
		{
		case 0:printf("���ǳ�פup ***** ����");
		if (wu_xing[0] != 0)
			printf("   �������ǻ� +%d\n", wu_xinghui[0]);
		else
			printf("\n");
		wu_xing[0]++;
		break;
		case 1:printf("���ǳ�פup ***** ��¬��");
			if (wu_xing[1] != 0)
				printf("   �������ǻ� +%d\n", wu_xinghui[0]);
			else
				printf("\n");
			wu_xing[1]++;
			break;
		case 2:printf("���ǳ�פup ***** Ī��");
			if (wu_xing[2] != 0)
				printf("   �������ǻ� +%d\n", wu_xinghui[0]);
			else
				printf("\n");
			wu_xing[2]++;
			break;
		case 3:printf("���ǳ�פup ***** ����");
			if (wu_xing[3] != 0)
				printf("   �������ǻ� +%d\n", wu_xinghui[0]);
			else
				printf("\n");
			wu_xing[3]++;
			break;
		case 4:printf("���ǳ�פup ***** ��");
			if (wu_xing[4] != 0)
				printf("   �������ǻ� +%d\n", wu_xinghui[0]);
			else
				printf("\n");
			wu_xing[4]++;
			break;
		case 5:printf("���ǳ�פup ***** ������");
			if (wu_xing[6] != 0)
				printf("   �������ǻ� +%d\n", wu_xinghui[0]);
			else
				printf("\n");
			wu_xing[6]++;
			break;
		case 6:printf("���ǳ�פup ***** ��ϣ��");
			if (wu_xing[6] != 0)
				printf("   �������ǻ� +%d\n", wu_xinghui[0]);
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
		case 0:printf("�������� ***** ����   �������ǻ� +10\n"); wu_xingwu[0]++;
			break;
		case 1:printf("�������� ***** �ǵ�ĩ·   �������ǻ� +10\n"); wu_xingwu[1]++;
			break;
		case 2:printf("�������� ***** ��ӥ��   �������ǻ� +10\n"); wu_xingwu[2]++;
			break;
		case 3:printf("�������� ***** �ķ�ԭ��   �������ǻ� +10\n"); wu_xingwu[3]++;
			break;
		case 4:printf("�������� ***** ���֮��   �������ǻ� +10\n"); wu_xingwu[4]++;
			break;
		case 5:printf("�������� ***** ���֮��   �������ǻ� +10\n"); wu_xingwu[5]++;
			break;
		case 6:printf("�������� ***** ���֮��   �������ǻ� +10\n"); wu_xingwu[6]++;
			break;
		case 7:printf("�������� ***** ���֮��   �������ǻ� +10\n"); wu_xingwu[7]++;
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
		case 0:printf("���ǽ�ɫ **** ŵ����");
			if (si_xing[0] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[0]);
			else
				printf("\n");
			si_xing[0]++;
			break;
		case 1:printf("���ǽ�ɫ **** ����");
			if (si_xing[1] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[1]);
			else
				printf("\n");
			si_xing[1]++;
			break;
		case 2:printf("���ǽ�ɫ **** ����");
			if (si_xing[2] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[2]);
			else
				printf("\n");
			si_xing[2]++;
			break;
		case 3:printf("���ǽ�ɫ **** ����");
			if (si_xing[3] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[3]);
			else
				printf("\n");
			si_xing[3]++;
			break;
		case 4:printf("���ǽ�ɫ **** ����");
			if (si_xing[4] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[4]);
			else
				printf("\n");
			si_xing[4]++;
			break;
		case 5:printf("���ǽ�ɫ **** ������");
			if (si_xing[5] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[5]);
			else
				printf("\n");
			si_xing[5]++;
			break;
		case 6:printf("���ǽ�ɫ **** ����");
			if (si_xing[6] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[6]);
			else
				printf("\n");
			si_xing[6]++;
			break;
		case 7:printf("���ǽ�ɫ **** ����");
			if (si_xing[7] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[7]);
			else
				printf("\n");
			si_xing[7]++;
			break;
		case 8:printf("���ǽ�ɫ **** ����");
			if (si_xing[8] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[8]);
			else
				printf("\n");
			si_xing[8]++;
			break;
		case 9:printf("���ǽ�ɫ **** ����");
			if (si_xing[9] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[9]);
			else
				printf("\n");
			si_xing[9]++;
			break;
		case 10:printf("���ǽ�ɫ **** ����");
			if (si_xing[10] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[10]);
			else
				printf("\n");
			si_xing[10]++;
			break;
		case 11:printf("���ǽ�ɫ **** �ϰ���");
			if (si_xing[11] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[11]);
			else
				printf("\n");
			si_xing[11]++;
			break;
		case 12:printf("���ǽ�ɫ **** �׿�");
			if (si_xing[12] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[12]);
			else
				printf("\n");
			si_xing[12]++;
			break;
		case 13:printf("���ǽ�ɫ **** ������");
			if (si_xing[13] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[13]);
			else
				printf("\n");
			si_xing[13]++;
			break;
		case 14:printf("���ǽ�ɫ **** ɰ��");
			if (si_xing[14] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[14]);
			else
				printf("\n");
			si_xing[14]++;
			break;
		case 15:printf("���ǽ�ɫ **** ����");
			if (si_xing[15] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[15]);
			else
				printf("\n");
			si_xing[15]++;
			break;
		case 16:printf("���ǽ�ɫ **** ¹ҰԺƽ��");
			if (si_xing[16] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[16]);
			else
				printf("\n");
			si_xing[16]++;
			break;
		case 17:printf("���ǽ�ɫ **** ����");
			if (si_xing[17] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[17]);
			else
				printf("\n");
			si_xing[17]++;
			break;
		case 18:printf("���ǽ�ɫ **** �Ű���");
			if (si_xing[18] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[18]);
			else
				printf("\n");
			si_xing[18]++;
			break;
		case 19:printf("���ǽ�ɫ **** ����˿");
			if (si_xing[19] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[19]);
			else
				printf("\n");
			si_xing[19]++;
			break;
		case 20:printf("���ǽ�ɫ **** ����");
			if (si_xing[20] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[20]);
			else
				printf("\n");
			si_xing[20]++;
			break;
		case 21:printf("���ǽ�ɫ **** ��л��");
			if (si_xing[21] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[21]);
			else
				printf("\n");
			si_xing[21]++;
			break;
		case 22:printf("���ǽ�ɫ **** ����");
			if (si_xing[22] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[22]);
			else
				printf("\n");
			si_xing[22]++;
			break;
		case 23:printf("���ǽ�ɫ **** ��ɯ");
			if (si_xing[23] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[23]);
			else
				printf("\n");
			si_xing[23]++;
			break;
		case 24:printf("���ǽ�ɫ **** ��������");
			if (si_xing[24] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[24]);
			else
				printf("\n");
			si_xing[24]++;
			break;
		case 25:printf("���ǽ�ɫ **** ����");
			if (si_xing[25] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[25]);
			else
				printf("\n");
			si_xing[25]++;
			break;
		case 26:printf("���ǽ�ɫ **** ����");
			if (si_xing[26] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[26]);
			else
				printf("\n");
			si_xing[26]++;
			break;
		case 27:printf("���ǽ�ɫ **** ����");
			if (si_xing[27] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[27]);
			else
				printf("\n");
			si_xing[27]++;
			break;
		case 28:printf("���ǽ�ɫ **** ��ά");
			if (si_xing[28] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[28]);
			else
				printf("\n");
			si_xing[28]++;
			break;
		case 29:printf("���ǽ�ɫ **** �����");
			if (si_xing[29] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[29]);
			else
				printf("\n");
			si_xing[29]++;
			break;
		case 30:printf("���ǽ�ɫ **** ��¶ɺ");
			if (si_xing[30] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[30]);
			else
				printf("\n");
			si_xing[30]++;
			break;
		case 31:printf("���ǽ�ɫ **** �����");
			if (si_xing[31] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[31]);
			else
				printf("\n");
			si_xing[31]++;
			break;
		case 32:printf("���ǽ�ɫ **** ��ɯ����");
			if (si_xing[32] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[32]);
			else
				printf("\n");
			si_xing[32]++;
			break;
		case 33:printf("���ǽ�ɫ **** ���");
			if (si_xing[33] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[33]);
			else
				printf("\n");
			si_xing[33]++;
			break;
		case 34:printf("���ǽ�ɫ **** ������");
			if (si_xing[34] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[34]);
			else
				printf("\n");
			si_xing[34]++;
			break;
		case 35:printf("���ǽ�ɫ **** ������");
			if (si_xing[35] != 0)
				printf("   �������ǻ� +%d\n", si_xinghui[35]);
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
		case 0:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[0]++;
			break;
		case 1:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[1]++;
			break;
		case 2:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[2]++;
			break;
		case 3:printf("�������� **** �����Թ�   �������ǻ� +2\n"); si_xingwu[3]++;
			break;
		case 4:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[4]++;
			break;
		case 5:printf("�������� **** �������   �������ǻ� +2\n"); si_xingwu[5]++;
			break;
		case 6:printf("�������� **** ��������   �������ǻ� +2\n"); si_xingwu[6]++;
			break;
		case 7:printf("�������� **** �����ص�   �������ǻ� +2\n"); si_xingwu[7]++;
			break;
		case 8:printf("�������� **** ���糤ǹ   �������ǻ� +2\n"); si_xingwu[8]++;
			break;
		case 9:printf("�������� **** ϻ����   �������ǻ� +2\n"); si_xingwu[9]++;
			break;
		case 10:printf("�������� **** ���   �������ǻ� +2\n"); si_xingwu[10]++;
			break;
		case 11:printf("�������� **** �����   �������ǻ� +2\n"); si_xingwu[11]++;
			break;
		case 12:printf("�������� **** �ӽ�   �������ǻ� +2\n"); si_xingwu[12]++;
			break;
		case 13:printf("�������� **** �����   �������ǻ� +2\n"); si_xingwu[13]++;
			break;
		case 14:printf("�������� **** ϻ������   �������ǻ� +2\n"); si_xingwu[14]++;
			break;
		case 15:printf("�������� **** ����   �������ǻ� +2\n"); si_xingwu[15]++;
			break;
		case 16:printf("�������� **** �ѽ�   �������ǻ� +2\n"); si_xingwu[16]++;
			break;
		case 17:printf("�������� **** ���罣   �������ǻ� +2\n"); si_xingwu[17]++;
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
	case 0:printf("�������� *** ����   �������ǳ� +15\n"); san_xing[0]++;
		break;
	case 1:printf("�������� *** ������֮��   �������ǳ� +15\n"); san_xing[1]++;
		break;
	case 2:printf("�������� *** ѻ��   �������ǳ� +15\n"); san_xing[2]++;
		break;
	case 3:printf("�������� *** ������   �������ǳ� +15\n"); san_xing[3]++;
		break;
	case 4:printf("�������� *** ����Ӣ��̷   �������ǳ� +15\n"); san_xing[4]++;
		break;
	case 5:printf("�������� *** ħ������   �������ǳ� +15\n"); san_xing[5]++;
		break;
	case 6:printf("�������� *** ��ӧǹ   �������ǳ� +15\n"); san_xing[6]++;
		break;
	case 7:printf("�������� *** �������   �������ǳ� +15\n"); san_xing[7]++;
		break;
	case 8:printf("�������� *** ��ԡ��Ѫ�Ľ�   �������ǳ� +15\n"); san_xing[8]++;
		break;
	case 9:printf("�������� *** ��Ӱ����   �������ǳ� +15\n"); san_xing[9]++;
		break;
	case 10:printf("�������� *** ��������   �������ǳ� +15\n"); san_xing[10]++;
		break;
	case 11:printf("�������� *** ������   �������ǳ� +15\n"); san_xing[11]++;
		break;
	case 12:printf("�������� *** ����   �������ǳ� +15\n"); san_xing[12]++;
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
		printf("������鿨����\n");
		scanf_s("%d", &x);
		if (x == 1)
		{
			start();
			if (xiang_yu < 1 && yuan_shi < 160 && xing_chen < 75 && xing_hui < 5)
				printf("��Ǯ�ɣ�����\n");
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
				printf("��Ǯ�ɣ�����\n");
		}
         if (x == 0)
		{
			printf("�ܹ���ȡ%d��\n", ctotal);
			printf("���ǹ�%d��\n", c5);
			printf("���ǹ�%d��\n", c4);
			printf("���ǹ�%d��\n", c3);
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
