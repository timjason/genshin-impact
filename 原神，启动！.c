#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include <stdlib.h> //为perror函数提供原型
#include <string.h> //为strcpy函数和strcat函数提供原型
#include <time.h>   //为clock函数提供原型
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
#include"warehouse.h"
int main()
{
	jiemian();
	show();
}