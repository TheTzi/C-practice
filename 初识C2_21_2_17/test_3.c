#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//static 修饰局部变量
//局部变量生命周期变长（除了作用域不销毁）
//static修饰全局变量
//改变了变量的作用域-静态全局变量之恩那个在自己所在的源文件内部使用
//static修饰函数
//改变了函数的作用域-不准确
//改变了函数的链接属性 外部 -> 内部
//正常函数具有外部链接属性

//声明外部函数
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum - %d\n",sum);
//	return 0;
//
//}
//int main()
//{
//	//extern 声明外部符号
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;//a是一个静态局部变量
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//宏
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	
//	max = MAX(a, b);
//	max = (a>b?a:b);
//	printf("max = %d\n", max);
//}

//指针
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//存放地址的变量- 指针变量
//	//printf("%p\n", &a);//006FFE78
//	//printf("%p\n", p);
//	*p = 20;//* 解引用操作符/间接访问操作符
//	//对p进行解引用操作 找到它所指向的对象a 并a的值进行操作
//	printf("a = %d\n", a);
//	
//	return 0;
//}

//结构体-描述复杂对象-自创类型
struct Book
{

	char name[20];//C语言程序设计
	short price;//55

};
int main()
{
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计",55 };
	struct Book* pb = &b1;
	printf("书名：%s\n", b1.name);
	printf("价格：%d元\n", b1.price);
	b1.price = 15;
	printf("修改后的价格：%d元\n", b1.price);

	//利用pb打印书名和价格
	//结构体变量. 成员
	//结构体指针-> 成员
	//printf("%s\n",(*pb).name);
	//printf("%s\n",(*pb).price);
	//另一种写法
	//printf("%s\n",pb -> name);
	//printf("%s\n",pb -> price);

	return 0;

}