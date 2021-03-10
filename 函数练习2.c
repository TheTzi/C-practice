#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//递归练习
//根据下面递归函数：调用函数Fun（2），返回值是多少
int Fun(int n)
{
	if (n == 5)
		return 2;
	else return 2 * Fun(n + 1);
}

//递归的描述错误的是
//存在限制条件，当满足这个限制条件的时候，递归便不再继续
//每次递归调用之后越来越接近这个限制条件
//递归可以无限递归下去
//递归层次太深，会出现栈溢出现象

//判断素数 打印100-200之间的素数
int judge_prime(int a)
{
	int j = 1; //2->n-1
	for (j = 2; j < a; j++)//优化j<=sqrt(n)
	{
		if (a % j == 0)
			return 0;
	}
	return 1;//a不能被整除（j == a)
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (judge_prime(i) == 1)
			printf("%d", i);
	}
	return 0;
}


//判断闰年 打印1000-2000之间的闰年
int judge_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
		if (judge_leap_year(year))
		{
			printf("%d", year);
		}

	return 0;
}

//输出乘法口诀表
void printTable(int a)
{
	int i = 0;
	for (i = 1; i <= a; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-3d ", i, j, i * j);//%-3d?
		}
		printf("\n");
	}
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printTable(a);
	return 0;
}

//递归方式打印整数的每一位
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num); //1234
	//递归
	print(num);
	return 0;
}

//编写函数不允许创建临时变量，求字符串的长度

int Strlen(const char* str)//递归的方法 不允许创建临时变量
{
	if (*str == '\0')
		return 0;
	else return 1 + Strlen(str + 1);//str+1从a的地址变成b的地址数起
}
int main()
{
	char* p = "abcdef";
	int len = Strlen(p);
	printf("%d\n", len);
	return 0;
}

//字符串逆序
//编写一个函数 reverse_string(char*string)(递归实现)
//将参数字符串中的字符反向排列

//普通函数实现
int reverse_string(char* string)
{
	int left = 0;
	int right = strlen(string) - 1;
	
	while (left <= right)
	{
		int tmp = string[left];
		string[left] = string[right];
		string[right] = string[tmp];
		left++;
		right--;
	}
}
int main()
{
	char string[] = "abcdef";
	reverse_string(string);
	printf("%s\n", string);

	return 0;
}

//递归实现
//逆序 a b c d e f
//1.a和f交换
//2.逆序b c d e
void reverse_string2(char arr[])
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr + 1) >= 2)
		reverse_string2(arr + 1);
	arr[len - 1] = tmp;
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);

	return 0;
}

//计算一个数的每位之和（递归实现）
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
int DigitSum(unsigned int num)
{
	if (num > 9)
	{
		return DigitSum(num / 10) + num % 10;
	}
	else
	{
		return num;
	}
}
int main()
{
	unsigned int num = 0;
	scanf("%d", num);
	int ret = DigitSum(num);
	printf("%d\n", ret);

	return 0;
}

//编写一个函数，实现n的k次方 用递归实现
//n^k = n* n^(k-1)
double Pow(int n, int k)
{
	if (k < 0)
		return(1.0 / Pow(n, -k));
	else if (k == 0)
		return 1;
	else
		return n * Pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf ", ret);
	return 0;
}

//非递归写法
//求n的阶乘
int factorial(int n)
{
	int result = 1;
	while (n > 1)
	{
		result *= n;
		n -= 1;
	}
	return result;
}

//求第n个斐波那契数
int result;
int fib(int n)
{
	int pre_result;
	int next_older_result;
	result = pre_result = 1;
	while (n > 2)
	{
		n -= 1;
		next_older_result = pre_result;
		pre_result = result;
		result = pre_result + next_older_result;
	}
	return result;
}
int main()
{
	int input = 5;
	fib(input);
	printf("%d\n", result);
	return 0;
}

//16 C