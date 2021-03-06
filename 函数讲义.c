#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//库函数

/* strcpy example */

//int main()
//{
//	char str1[] = "Sample string";
//	char str2[40];
//	char str3[40];
//	strcpy(str2, str1);
//	strcpy(str3, "copy successful");
//	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
//	return 0;
//}

/* memset example */

//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//	return 0;
//}

//自定义函数

//get_max函数的设计

//int get_max(int x, int y) 
//{
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}

//交换两个整形变量的内容

//void Swap1(int x, int y) {//空 表示没有返回值
//	int tmp = 0;
//	tmp = x;//x,y交换 a，b没有交换
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* px, int* py) {
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1, num2);
//	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
//	Swap2(&num1, &num2);
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}

//传值调用
//传址调用

//判断一个数是不是素数（试除法做不出来）
//找出100-200之间的素数

//int judge_prime(int a)
//{
//	int j = 1; //2->n-1
//	for (j = 2; j < a; j++)//优化j<=sqrt(n)
//	{
//		if (a % j == 0)
//			return 0;
//	}
//	return 1;//a不能被整除（j == a)
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (judge_prime(i) == 1)
//			printf("%d", i);
//	}
//	return 0;
//}

//判断一年是不是闰年 scanf就行
//打印1000-2000年之间的闰年
//int judge_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for(year =1000; year<=2000; year++)
//		if (judge_leap_year(year))
//		{
//			printf("%d", year);
//		}
//
//	return 0;
//}
//

//整型有序数组的二分查找
                  //本质上是一个指针
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体数
//	//找到则返回这个数的下标，找不到返回-1
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//                     传递过去的是数组arr首元素的地址
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("no result\n");
//	}
//	else
//	{
//		printf("subscript is %d\n",ret);
//	}
//
//	return 0;
//}

//每调用一次，num+1的函数

//void Add(int* a)
//{
//    (*a)++;
//}
//int main()
//{
//    int num = 0;
//    Add(&num);
//    printf("%d\n",num);
//    return 0;
//}
//
////链式访问
//int main()
//{
//    int len = 0;
//
//    len = strlen("abc");
//    printf("%d", len);
//
//    printf("%d", strlen("abc"));
//}
// 
//int main()
//{
//    printf("%d", printf("%d", printf("%d", 43)));
//    //结果是啥？
//    return 0;
//}
//
////函数声明
//#include "test.h"
////函数Add的实现
//int Add(int x, int y) {
//    return x + y;
//}
// 

//函数递归

//史上最简单递归
//int main()
//{
//    printf("1");
//     main();
//    return 0;
//}


//接收一个无符号整型值，按照顺序打印它的每一位

//void print(int n)
//{
//    if (n > 9)
//    {
//        print(n / 10);    
//    }
//    printf("%d", n % 10);
//}
//int main()
//{
//    unsigned int num = 0;
//    scanf("%d", &num); //1234
//    //递归
//    print(num);
//    return 0;
//}

//编写函数不允许创建临时变量，求字符串的长度

//int Strlen(const char* str)//递归的方法 不允许创建临时变量
//{
//    if (*str == '\0')
//        return 0;
//    else return 1 + Strlen(str + 1);//str+1从a的地址变成b的地址数起
//} 
//int main()
//{
//    char* p = "abcdef";
//    int len = Strlen(p);
//    printf("%d\n", len);
//    return 0;
//}

//创建临时变量 用while循环语句
//int my_strlen(char* str)
//{
//    int count = 0;
//    while(*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//int main()
//{
//    char arr[] = "bit";
//
//    int len = my_strlen(arr);
//    printf("len = %d\n", len);
//    
//    return 0;
//}

//递归与迭代
//求n的阶乘

//int factorial(int n) 
//{
//    if (n <= 1)
//        return 1;
//    else
//        return n * factorial
//        (n - 1);
//}
//
////求第n个斐波那契数（不考虑溢出）
//int fib(int n) 
//{
//    if (n <= 2)
//        return 1;
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//
//int count = 0;//全局变量
//int fib(int n) {
//    if (n == 3)
//        count++;
//    if (n <= 2)
//        return 1;
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//
////非递归写法
////求n的阶乘
//int factorial(int n) 
//{
//    int result = 1;
//    while (n > 1)
//    {
//        result *= n;
//        n -= 1;
//    }
//    return result;
//}
//求第n个斐波那契数
//int result;
//int fib(int n) 
//{
//    int pre_result;
//    int next_older_result;
//    result = pre_result = 1;
//    while (n > 2)
//    {
//        n -= 1;
//        next_older_result = pre_result;
//        pre_result = result;
//        result = pre_result + next_older_result;
//    }
//    return result;
//}
//int main()
//{
//    int input = 5;
//    fib(input);
//    printf("%d\n", result);
//    return 0;
//}

//有限制条件依然不能用递归的情况 栈溢出
void test(int n)
{
    if (n < 10000)
    {
        test(n + 1);
    }
}
int main()
{
    test(1);
    return 0;
}

