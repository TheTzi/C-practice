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

//switch ʵ�ֶ��֧
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
//		{//switch����Ƕ��ʹ��
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
//	printf("���������룺");
//	scanf("%s", password);//�������룬�������password������
//	//��ȡ������ʣ����
//
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N����");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("quit confirm\n");
//	}
//	
//	return 0;
//}

//����ѭ��Ҫѭ�����ٴΣ�
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 1; i++, k++)//
//		k++;
//	return 0;
//}

//����n�Ľ׳� �ҵĳ���
//int main()
//{
//	int i = 0;
//	int n = 0;
//	
//	
//	scanf("�������֣�%d\n", &i);
//	for (i = 1;i <= n;i++)
//		if (i == a)
//			i *= i
//
//			printf("�׳��ǣ�%d\n", &);
//	
//	return 0;
//}

//����n�Ľ׳� ����1
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
//	printf("�׳��ǣ�%d\n",ret);
//	return 0;
//}

//����1��+2��...+10��
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
//	printf("�׳˵ĺ��ǣ�%d\n", sum);
//	return 0;
//}

//������ 1��3�׳˺�
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
//	printf("�׳˵ĺ��ǣ�%d\n", sum);
//	return 0;
//}

// ��һ�����������в��Ҿ����ĳ������n��˳�� ���Ӷ�=n
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

//����/�۰�����㷨 �����������Ӷ�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
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

//��ʾ����ַ��������ƶ������м��ۡ�
int main()
{

		char arr1[] = "welcome to bit...";
		char arr2[] = "#################";
		int left = 0;
		int right = strlen(arr1) - 1;
		printf("%s\n", arr2);
		//whileѭ��ʵ��
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
		//forѭ��ʵ��
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

