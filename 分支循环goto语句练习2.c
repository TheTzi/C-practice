#define _CRT_SECURE_NO_WARNINGS 1
//模拟用户登录（三次机会）

int main()
{
	char psw[10] = "";
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; ++i)
	{
		printf("please input:");
		scanf("%s", psw);
		if (strcmp(psw, "password") == 0)
			break;
	}
	if (i == 3)
		printf("exit\n");
	else
		printf("log in\n");
}

//将三个数从小到大输出

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("input:>");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);

	return 0;
}

//打印1-100中所有3的倍数

int main()
{
	int a = 0;

	for (a = 1; a < 100; a++)
	{
		if (a % 3 == 0)
			printf("%d\n", a);
	}

	return 0;
}

//辗转相除法 求给定两个数的最大公约数

int main()
{
	int m = 24;
	int n = 18;
	int r = 0;
	while (m % r)
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("%d\n", n);
	return 0;
}

//打印1000到2000年之间的闰年

int main()
//能被4整除且不能被100整除的是闰年,能被400整除也是闰年
//if((year % 4 == 0) && (year % 100 != 0))||(year % 400 == 0)
//{
//		printf("%d ", year);
//		count++;
//		}
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\nocunt = %d\n", count);
	return 0;
}

//打印100-200之间的素数

//素数判断规则之一 试除法

//2到i-1都不能被i整除
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}

//优化

//2到i-1中至少有一个数字能被二整除 取反
//a和b中至少有一个数字<=开平方i
//sqrt 开平方的数学库函数
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)//偶数不可能是素数
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)//i=a*b a < sqrt(i) or b < sqrt(i)
			//或j<=i/2
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}
//《素数求解的n种境界》

//数1-100中出现9的数字个数
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; 1 <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
		printf("count = %d\n", count);
		return 0;
	}
}

//分数求和
//计算1/1-1/2+1/3-...+1/99-1/100

int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; 1 <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}

//求10个整数中的最大值

int main()
{
	int arr[] = { -1,-2,-3 - 4,-5,-6,-7,-8,-9,-10 };
	int max = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max = %d\n", max);
	return 0;
}

//输出9*9乘法口诀表

int main()
{
	int i = 0;
	//确定打印9行
	for (i = 1; i <= 9; i++)
	{
		//打印一行
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			//%2d表示打印两位，不够两位用空格补齐 右对齐
			//%-2d左对齐
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}

//二分查找函数

int bin_search(int arr[], int left, int right, int key)

{
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) >> 1;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
			return mid;//找到了，返回下标
	}
	return -1;//找不到
}

//猜数字游戏
//电脑生成随机数
//猜数字 提示相对大小

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("**********************************\n");
	printf("*********** 1.play     **********\n");
	printf("*********** 0.exit     **********\n");
	printf("**********************************\n");
}
//TDD-测试驱动开发。
//RAND_MAX--rand函数能返回随机数的最大值。
void game()
{
	int random_num = rand() % 100 + 1;//生成随机数（1-100之间）
	int input = 0;
	while (1)
	{
		printf("请输入猜的数字>:");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("猜大了\n");
		}
		else if (input < random_num)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	//时间戳
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("猜数字游戏开始\n");
			game();//游戏过程
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("选择错误,请重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}

//goto语句 

//goto again

int main()
{
again:
	printf("1\n");
	goto again;
	return 0;
}

int main()
{
	printf("hello\n");
	goto again;
	printf("1");
again:
	printf("world");
	return 0;
}

//应用：直接跳出多层循环

for (...)
for (...)
{
	for (...)
	{
		if (disaster)
			goto error;
	}
}
…
error :
if (disaster)
// 处理错误情况

//一个关机程序

int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");//执行系统命令 关机
again:
	printf("电脑将在1分钟内关机，如果输入：我是天才，就取消关机!\n请输入:>");
	scanf("%s", input);
	if (0 == strcmp(input, "我是天才"))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("电脑将在1分钟内关机，如果输入：我是猪，就取消关机!\n请输入:>");
		scanf("%s", input);
		if (0 == strcmp(input, "我是猪"))
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}

//搜索系统 服务 戒网瘾程序 视频p47
