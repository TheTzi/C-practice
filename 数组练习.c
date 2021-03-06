#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//一维数组初始化 那个是错误的
//int arr[10] = {1,2,3,4,5,6};
//int arr[] = {1,2,3,4,5,6};
//int arr[10] = (1,2,3,4,5,6);*
//int arr[10] = {0};

//对于一维int型数组a[10]的错误引用是
//a[0]=1
//a[0]=5*2
//a[10]=2 *十个元素，最后一个下标是[9]
//a[1]=a[2]*a[0]

//int a[2][3]={1,2,3,4,5,6},值为4的数组元素是
//a[1][0]

//下面代码的结果
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//16 (3,4)表达式结果只是最后一个表达式结果 4 4*4byte=16

//关于一维数组描述不正确的是
//数组的下标是从0开始的
//数组在内存中是连续存放的
//数组鸣表示首元素的地址
//随着数组下标的由小到大，地址由高到低*

//冒泡排序

//
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	int flag = 1;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				tmp = arr[j];
//				arr[j] =arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	
//}
//int main()
//{
//	int a = 0;
//	int arr[] = { 1,5,7,9,0,3,2,4,6,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (a = 0; a < sz; a++)
//	{
//		printf("%d\n", arr[a]);
//	}
//	return 0;
//}

//创建一个整型数组
//实现函数init()初始化数组为全零
//实现printf()打印数组的每个元素
//实现reverse()函数完整数组元素的逆置


//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i=0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int a = 0;
//	for (a = 0; a < sz; a++)
//	{
//		printf("%d ", arr[a]);
//	}
//}
//
////my try
////void reverse(int arr[], int sz)
////{
////	int b = 0;
////	for (b = 0; b < sz-1; b++)
////	{
////		arr[b] = arr[sz-1-b];
////	}
////}
//
//// one possible solution
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*init(arr,sz);
//	print(arr, sz);*/
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//将两个一样大数组a和b的内容交换

//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//		return 0;
//}






