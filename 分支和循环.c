#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//�ж�һ�����Ƿ�Ϊ����
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
////�ж���ż���� ?�����ж�even
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

//���1-100֮�������
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

//switch���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//			printf("����һ\n");
//			break;
//		case 2:
//			printf("���ڶ�\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;
//		case 4:
//			printf("������\n");
//			break;
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("������\n");
//			break;
//		case 7:
//			printf("������\n");
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

//switch��ϰ
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

//ѭ�����
//����Ļ�ϴ�ӡ1-10�����֡�
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

//while����е�break��continue
//break ����ʵ��
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
//		if (ch < ��0�� || ch > ��9��)
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
//	//���뻺��������һ��\n
//	//��ȡ\n
//	while(ch= getchar()!='\n')
//	//һֱ��ȡֱ��\n������ȡ��
//	printf("��ȷ�ϣ�Y/N��:>");
//	ret = getchar();//getchar�����˻س�����\n�� 
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	return 0;
//}

//forѭ��
//int main()
//{
//	int i = 0;
//	//for(i=1/*��ʼ��*/; i<=10/*�жϲ���*/; i++/*��������*/)
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//�Ա�for\while
//int i = 0;
////ʵ����ͬ�Ĺ��ܣ�ʹ��while
//i = 1;//��ʼ������
//while (i <= 10)//�жϲ���
//{
//	printf("hehe\n");
//	i = i + 1;//��������
//}
////ʵ����ͬ�Ĺ��ܣ�ʹ��while
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
////����2
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

//�����ȡǰ�����������д��
//int i = 0;
////ǰ�պ󿪵�д��
//for (i = 0; i < 10; i++)
//ʮ��ѭ��
//ʮ�δ�ӡ
//ʮ��Ԫ��
//{
//}
////���߶��Ǳ�����
//for (i = 0; i <= 9; i++)
//{
//}

//forѭ������
//int main()
//{
//	//����1
//	//for (;;)
//	//{
//	//	printf("hehe\n");
//	//}
//	//��Ҫ���ʡ��
//	int i = 0;
//	for (; i < 10; i++)
//	{
//		int j = 0;
//		for (; j < 10; j++)
////j�ۼӵ�10֮ʱ�ڶ����ⲿѭ�������Ծ���10����˲�ִ���ڲ�ѭ��
//		{
//			printf("lita\n");
//		}
//	}
//	//����2
//	//int x, y;
//	/*for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}*/
//	return 0;
//}

//����ѭ��Ҫѭ�����ٴΣ�

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//do whileѭ��
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

