#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>

//int main()
//{
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//			printf("haha\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	
//	while (a <= 100)
//	{
//		printf("%d\n", a);
//		a += 2;
//	}
//		
//	return 0;
//}

//switch 实现多分支
//

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

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
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
//	printf("请输入密码：");
//	scanf("%s", password);//输入密码，并存放在password数组中
//	//读取缓冲区剩余数
//
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N）：");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("quit confirm\n");
//	}
//	
//	return 0;
//}

//请问循环要循环多少次？
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 1; i++, k++)//
//		k++;
//	return 0;
//}

//计算n的阶乘 我的尝试
//int main()
//{
//	int i = 0;
//	int n = 0;
//	
//	
//	scanf("输入数字：%d\n", &i);
//	for (i = 1;i <= n;i++)
//		if (i == a)
//			i *= i
//
//			printf("阶乘是：%d\n", &);
//	
//	return 0;
//}

//计算n的阶乘 范例1
//int main()
//{
//	int i = 0;
//	int n = 1;
//	int ret = 1;
//
//	scanf("%d", &n);
//
//	for (i = 1;i <= n; i++)
//	{
//		ret = ret * i;
//	}
//
//	printf("阶乘是：%d\n",ret);
//	return 0;
//}

//计算1！+2！...+10！
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//
//	printf("阶乘的和是：%d\n", sum);
//	return 0;
//}

//改良版 1到3阶乘和
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 3; n++)
//	{
//			ret = ret * n;
//		
//		sum = sum + ret;
//	}
//
//	printf("阶乘的和是：%d\n", sum);
//	return 0;
//}

// 在一个有序数组中查找具体的某个数字n。顺序法 复杂度=n
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("found, Subscript is; %d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("not in the array\n");
//
//	return 0;
//}

//二分/折半查找算法 对数函数复杂度
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz-1;
//
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("Found, subscript is: %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("Cannot find\n");
//	}
//
//
//	return 0;
//}

//演示多个字符从两端移动，向中间汇聚。
int main()
{

		char arr1[] = "welcome to bit...";
		char arr2[] = "#################";
		int left = 0;
		int right = strlen(arr1) - 1;
		printf("%s\n", arr2);
		//while循环实现
		while (left <= right)
		{
			Sleep(1000);
			system('cls');
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			left++;
			right--;
			printf("%s\n", arr2);
		}
		//for循环实现
		for (left = 0, right = strlen(src) - 1;
			left <= right;
			left++, right--)
		{
			Sleep(1000);
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			printf("%s\n", target);
		
	}
	return 0;
}

