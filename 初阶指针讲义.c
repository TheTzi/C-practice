#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;//在内存中开辟一块空间
//	int* p = &a;//这里我们对变量a，取出它的地址，可以使用&操作符。
//	  //将a的地址存放在p变量中，p就是一个之指针变量。
//	return 0;
//}

//指针类型的意义是什么

//指针+-整数
//指针的类型决定了指针向前或者向后走一步有多大（距离）
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}

//指针的解引用
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0; //重点在调试的过程中观察内存的变化。
//	*pi = 0; //重点在调试的过程中观察内存的变化。
//	return 0;
//}

//指针的类型决定了，对指针解引用的时候有多大的权限（能操作几个字节）。 比如： char* 的
//指针解引用就只能访问一个字节，而 int* 的指针的解引用就能访问四个字节。

//int main()
//{
//	int arr[10] = { 0 };
//	int* p=arr;//数组名-首元素地址
//	// char*p =arr//无法把数组每一个元素改成1 只完成了两个半整型空间（10个字节）的改变
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//野指针

// 指针未初始化
//int main()
//{
//	int* p;//局部变量指针未初始化，默认为随机值
//	*p = 20;
//	return 0;
//}

//指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p++) = i;
//	}
//	return 0;
//}

//指针指向的空间释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int *p = test();
//	*p = 20;//形参调用的地址在出函数test的时候销毁数据了
//	//再通过地址访问空间访问的是随机地址空间
//	//栈区的数据编译器会保留一次，在输出一次就不是10了
//	return 0;
//}

//如何规避野指针
//1. 指针初始化
//2. 小心指针越界
//3. 指针指向空间释放即使置NULL

//4. 指针使用之前检查有效性
//int main()
//{
//	int* p = NULL;
//	//....
//	int a = 10;
//	p = &a;
//	if (p != NULL)//赋值、初始化指针
//	{
//		*p = 20;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//
//	pa = NULL;//空指针是不能访问的
//
//}

//指针运算

////指针 + -整数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;
//	}
//	return 0;
//}
//
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}
//
////指针 - 指针
//
//int my_strlen(char* s) 
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	&arr[9] - &arr[0];//得到的其实是中间的元素个数
//	&arr[9] - &arr[0];//错 歧义
//	//相减的两个数必须属于同一块空间
//	return 0;
//}
//
////模拟实现strlen- 求字符串长度
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//递归的方式
//	//计数器的方式 b i t \0
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
////指针的关系运算
//for (vp = &values[N_VALUES]; vp > &values[0];)//更好
//{
//	*--vp = 0;
//}
//
//for (vp = &values[N_VALUES-1]; vp >= &values[0];vp--)
//{
//	*vp = 0;
//}
//
////指针和数组
//
////数组名是什么
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%p\n", arr);//首元素的地址
//	printf("%p\n", &arr[0]);//同上
//	printf("%p\n", &arr);//打印结果和上面一样 但实际不一样
//
//	printf("%p\n", &arr[0]+1);//+4字节 整型大小
//	printf("%p\n", &arr+1);//+40字节 数组大小（10个整型）
////例外 1.&arr- &数组名 -数组名不是首元素的地址-数组名表示整个数组
////&数组名取的是整个数组的地址
////2.sizeof(arr)-sizeof(数组名) 数组名表示的是整个数组
////sizeof(数组名)计算的是整个数组的大小
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr; //指针存放数组首元素的地址
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d", arr[i]);
//		printf("%d", *(p + i));
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p   <====> p+%d = %p\n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}
//
////二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	int*** pppa = &ppa;
//	return 0;
//}
//
//
////指针数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr2[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		arr2[i];
//		*(arr2[i]);
//	}
//	return 0;
//}
