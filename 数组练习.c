#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//һά�����ʼ�� �Ǹ��Ǵ����
//int arr[10] = {1,2,3,4,5,6};
//int arr[] = {1,2,3,4,5,6};
//int arr[10] = (1,2,3,4,5,6);*
//int arr[10] = {0};

//����һάint������a[10]�Ĵ���������
//a[0]=1
//a[0]=5*2
//a[10]=2 *ʮ��Ԫ�أ����һ���±���[9]
//a[1]=a[2]*a[0]

//int a[2][3]={1,2,3,4,5,6},ֵΪ4������Ԫ����
//a[1][0]

//�������Ľ��
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//16 (3,4)���ʽ���ֻ�����һ�����ʽ��� 4 4*4byte=16

//����һά������������ȷ����
//������±��Ǵ�0��ʼ��
//�������ڴ�����������ŵ�
//��������ʾ��Ԫ�صĵ�ַ
//���������±����С���󣬵�ַ�ɸߵ���*

//ð������

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

//����һ����������
//ʵ�ֺ���init()��ʼ������Ϊȫ��
//ʵ��printf()��ӡ�����ÿ��Ԫ��
//ʵ��reverse()������������Ԫ�ص�����


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

//������һ��������a��b�����ݽ���

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






