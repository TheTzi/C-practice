#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//内部表达式不参与真实运算
//	printf("%d\n", s);
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//问：
//（1）、（2）两个地方分别输出多少？40 4/8
//（3）、（4）两个地方分别输出多少？10 4/8

//360笔试题

#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	//i = a++||++b||d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	return 0;
}
//程序输出的结果是什么？
//a = 1时呢

int main()
{
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c");
	return 0;
}

//实例2
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//%u是以十进制打印无符号数
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(!c)); 
	return 0;
}

//表达式求值说法不正确的是
//表达式求值先看是否存在整型提升或算术转换，再进行计算
//表达式真正计算的时候先看相邻操作符的优先级决定先算谁
//相邻操作符的优先级相同的情况下，看操作符的结核性决定计算顺序
//只要有优先级和结合性，表达式就能求出唯一值 *

