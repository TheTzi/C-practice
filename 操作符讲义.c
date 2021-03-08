#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//除法 取模
//int main()
//{
//	int a = 5 / 2;//商2 余1
//	return 0;
//}

//移位操作符


//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	num1& num2;
//	num1 | num2;
//	num1^ num2;
//	return 0;
//}

//不能创建临时变量（第三个变量），实现两个数的交换。
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//求一个整数存储在内存中的二进制中1的个数

//对于正数(补码就是源码)

//int main()
//{
//	int num = 10;
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}
  
//包含负数的统计

//int main()
//{
//	int num = -1;
//	int count = 0;
//	int i = 0;
//	for(i=0; i<32;i++)
//	{
//		if (((num >> i)&1) == 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//第三种解法见练习


//赋值操作符

//int main()
//{
//	int a = 0;
//	if (!a)
//	{
//		printf("hao");
//	}
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int a = 10;
//	int* p = &a; //取地址操作符
//	*p; //解引用操作符 就是a 指针大小-4字节32位平台 8/64
//	sizeof a;
//	sizeof(int);//后面是类型就不能省略括号
//	sizeof(char*);
//	sizeof(arr);
//	sizeof(int[10]);
//
//	return 0;
//}

//~对一个数的二进制按位取反
//int main()
//{
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111 -补码
//	//11111111111111111111111111111110 -反码
//	//10000000000000000000000000000001 -原码
//	printf("%d\n",~a);
//	return 0;
//}

//置 11<->15
//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//
//	//00000000000000000000000000001011
//	//00000000000000000000000000000100
//	//1<<2;
//	//00000000000000000000000000000001
//	//0000000000000000000000  0000001111
//
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	//1111
//	//1011 &
//	//1011
//	int a = 11;
//	return 0;
//}

//条件操作符
//exp1 ? exp2 : exp3
//1.
//if (a > 5)
//b = 3;
//else
//b = -3;
//转换成条件表达式，是什么样？
//2.使用条件表达式实现找两个数中较大值。

//逗号表达式
//代码1
//int a = 1;
//int b = 2;
//int c = (a > b, a = b + 10, a, b = a + 1);//逗号表达式
//c是多少？
////代码2
//if (a = b + 1, c = a / 2, d > 0)
////代码3 a = get_val();
//count_val(a);
//while (a > 0) {
//	//业务处理
//	a = get_val();
//	count_val(a);
//}
//如果使用逗号表达式，改写：
//while (a = get_val(), count_val(a), a > 0) {
//	//业务处理
//}

//下标引用、函数调用和结构成员
//int arr[10];//创建数组
//arr[9] = 10;//实用下标引用操作符。
//[] 的两个操作数是arr和9

//void test1()
 //{
 //printf("hehe\n");
 //}
 //void test2(const char* str)
 //{
	// printf("%s\n", str);
 //}
 //int main()
 //{
	// test1();            //实用（）作为函数调用操作符。
	// test2("hello bit.");//实用（）作为函数调用操作符。
	// return 0;
 //}
//

//3.访问一个结构的成员
//.结构体变量.成员名
//->结构体指针->成员名

struct Stu
{
	//成员变量
	char name[10];
	int age;
	char sex[5];
	double score;
};
void set_age1(struct Stu stu) {
	stu.age = 18;
}
void set_age2(struct Stu* pStu) {
	pStu->age = 18;//结构成员访问
}
int main()
{
	//使用struct stu这个类型创建了一个学生对象s1，并初始化
	struct Stu stu = {"王子","15","女"};
	printf("%s\n", stu.name);
	printf("%d\n", stu.age);//结构体变量.成员名
	printf("%s\n", stu.sex);
	struct Stu* pStu = &stu;//结构成员访问

	stu.age = 20;//结构成员访问
	set_age1(stu);

	//结构体指针->成员名
	pStu->age = 20;//结构成员访问 = (*pStu).age
	set_age2(pStu);
	return 0;
}

//表达式求值
//隐式类型转换
////负数的整形提升
//char c1 = -1;
//变量c1的二进制位(补码)中只有8个比特位：
//1111111
//因为 char 为有符号的 char
//所以整形提升的时候，高位补充符号位，即为1
//提升之后的结果是：
//11111111111111111111111111111111
////正数的整形提升
//char c2 = 1;
//变量c2的二进制位(补码)中只有8个比特位：
//00000001
//因为 char 为有符号的 char
//所以整形提升的时候，高位补充符号位，即为0
//提升之后的结果是：
//00000000000000000000000000000001
////无符号整形提升，高位补0

//操作符的属性
//求复杂表达式有三分影响因素
//操作符优先级
//操作符结合性
//是否控制求值顺序










