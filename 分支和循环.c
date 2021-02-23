#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//判断一个数是否为奇数
//int main()
//{
//	int a = 0;
//	scanf("%d\n", &a);
//
//	if (1 == a%2 )
//	{
//		printf("odd number");
//	}
//	else
//	{
//		printf("even number");
//	}
//	return 0;
//}
////判断奇偶函数 ?总是判断even
//char classify(int x)
//{
//	int a = 0;
//	if (1 == a % 2)
//	{
//		printf("odd number");
//	}
//	else
//	{
//		printf("even number");
//	}
//}
//int main()
//{
//	int a = 0;
//	char output = "w";
//	scanf("%d", &a);
//	output = classify(a);
//
//	return 0;
//}

//输出1-100之间的奇数
//int main()
//{
//	int a = 1;
//	while (a <=100)
//	{
//		if (a%2 == 1)
//			printf("%d\n",a);
//		a++;
//
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d\n", i);
//		i += 2;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100;i += 2)
//	{
//		printf("%d\n", i);
//	}
//		
//	return 0;
//}

//switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期天\n");
//			break;
//	}
//	return 0;
//}
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("weekday\n");
//			break;
//		case 6:
//		case 7:
//			printf("weekend\n");
//			break;
//	}
//	return 0;
//}

//switch练习
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

//循环语句
//在屏幕上打印1-10的数字。
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//while语句中的break和continue
//break 代码实例
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		printf("%d ", i);
//		break;
//		i = i + 1;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}

//int main()
//{
//  int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < ‘0’ || ch > ‘9’)
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	scanf("%s", password);
//	//输入缓冲区还有一个\n
//	//读取\n
//	while(ch= getchar()!='\n')
//	//一直读取直到\n都被读取完
//	printf("请确认（Y/N）:>");
//	ret = getchar();//getchar读走了回车键（\n） 
//	if (ret == 'Y')
//	{
//		printf("确认成功");
//	}
//	return 0;
//}

//for循环
//int main()
//{
//	int i = 0;
//	//for(i=1/*初始化*/; i<=10/*判断部分*/; i++/*调整部分*/)
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//对比for\while
//int i = 0;
////实现相同的功能，使用while
//i = 1;//初始化部分
//while (i <= 10)//判断部分
//{
//	printf("hehe\n");
//	i = i + 1;//调整部分
//}
////实现相同的功能，使用while
//for (i = 1; i <= 10; i++) {
//	printf("hehe\n");
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}
////代码2
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//建议采取前闭区间后开区间写法
//int i = 0;
////前闭后开的写法
//for (i = 0; i < 10; i++)
//十次循环
//十次打印
//十个元素
//{
//}
////两边都是闭区间
//for (i = 0; i <= 9; i++)
//{
//}

//for循环变种
//int main()
//{
//	//变种1
//	//for (;;)
//	//{
//	//	printf("hehe\n");
//	//}
//	//不要随便省略
//	int i = 0;
//	for (; i < 10; i++)
//	{
//		int j = 0;
//		for (; j < 10; j++)
////j累加到10之时第二次外部循环进入仍就是10，因此不执行内部循环
//		{
//			printf("lita\n");
//		}
//	}
//	//变种2
//	//int x, y;
//	/*for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}*/
//	return 0;
//}

//请问循环要循环多少次？

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//do while循环
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} 
//	while (i <=10);
//	return 0;
//}
//int main()
//{
//	int i = 10;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d\n", i);
//	} while (i < 10);
//	return 0;
//}
//int main()
//{
//	int i = 10;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//	} while (i < 10);
//	return 0; 
//}

