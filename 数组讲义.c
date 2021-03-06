#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//type_t   arr_name   [const_n];
//type_t 是指数组的元素类型
//const_n 是一个常量表达式，用来指定数组的大小
//int main()
//{	
//	char arr2[3] = { 'a','b','c' };
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	return 0;
//}


////数组创建的实例
////代码1
//int arr1[10];
////代码2
//int count = 10;
//int arr2[count];//数组时候可以正常创建？必须创建常量
////代码3
//char arr3[10];
//float arr4[1];
//double arr5[20];
//注：数组创建，[] 中要给一个常量才可以，不能使用变量。

//int main()
//{
//	char arr[] = "abcdef";//[a] [b] [c] [d] [e] [f] [\0]
//	printf("%c\n",arr[3]);
//	int len = strlen(arr);
//	//i<len
//	int i = 0;
//	for (i = 0; i < 6; i++)//i<(int)strlen(arr)
//	{
//		printf("%c\n",arr[i]);
//	}
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 0 };//数组的不完全初始化
//	   //计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对数组内容赋值,数组是使用下标来访问的，下标从0开始。所以：
//	int i = 0;//做下标
//	for (i = 0; i < 10; i++)//这里写10，好不好？
//	{
//		arr[i] = i;
//	}
//	//输出数组的内容
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&add[%d]= %p\n",i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = {0};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			arr[i][j] = i * 4 + j;
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n ",i, j, arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要拍的数据已经有序
//		//每趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//
//{
//	int arr[] = { 4,8,7,6,5,9,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	bubble_sort(arr,sz);//冒泡排序函数，将arr排成升序
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	//arr是数组，我们对数组arr进行传参时，实际上传递过的是数组arr首元素的地址 &arr[0]
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//  printf("%p\n", &arr);//数组名表示整个数组
//  printf("%p\n", &arr+1);
//	printf("%d\n", *arr);

//	//输出结果
//	return 0;
//}