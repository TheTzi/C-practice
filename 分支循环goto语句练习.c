#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>

//����n�Ľ׳�
//int main()
//{
//	int n = 0;
//	printf("input:>");
//	scanf("%d", &n);
//	int a = 0;
//	int ret = 1;
//	for (a = 1; a <= n; a++)
//	{
//		ret = ret * a;
//	}
//	printf("output; %d", ret);
//	
//
//	return 0;
//}

//����1��10�׳˺�
//int main()
//{
//	
//	int a = 1;
//	int ret = 1;
//	int b = 1;
//	int sum = 0;
//	for (b = 1; b <= 3; b++)
//	{
//		//���ָķ� ɾȥa=1�����ret = 1
//		for (; a <= b; a++)
//			{
//				ret = ret * a;
//			}
//		sum = ret + sum;
//	}
//	
//	printf("sum= %d", sum);
//
//
//	return 0;
//}
//int main()
//{
//	int ret = 1;
//	int b = 1;
//	int sum = 0;
//	for (b = 1; b <= 3; b++)
//	{
//		ret = ret * b;
//		sum = ret + sum;
//	}
//
//	printf("sum= %d", sum);
//
//	return 0;
//}

//��һ�����������в���ĳ������n
//��������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("found, subscript is: %d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("no result");
//	return 0;
//}

//�۰�/���ֲ��ҷ�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (right + left) / 2;
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
//			printf("found, subscript is: %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("no result");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[3] = { 1,2,3 };
//	printf("%d",sizeof(arr[3]));
//	return 0;
//}
//��д���룬��ʾ����ַ��������ƶ������м���
//int main()
//{
//	char arr1[] = "welcome to bit...";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	//whileѭ��ʵ��
//	while (left <= right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	//forѭ��ʵ��
//	for (left = 0, right = strlen(src) - 1;
//		left <= right;
//		left++, right--)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", target);
//	}
//	retutn 0;
//}
