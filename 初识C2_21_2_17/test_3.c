#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//static ���ξֲ�����
//�ֲ������������ڱ䳤���������������٣�
//static����ȫ�ֱ���
//�ı��˱�����������-��̬ȫ�ֱ���֮���Ǹ����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//static���κ���
//�ı��˺�����������-��׼ȷ
//�ı��˺������������� �ⲿ -> �ڲ�
//�������������ⲿ��������

//�����ⲿ����
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
//	//extern �����ⲿ����
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;//a��һ����̬�ֲ�����
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

//��
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

//ָ��
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//��ŵ�ַ�ı���- ָ�����
//	//printf("%p\n", &a);//006FFE78
//	//printf("%p\n", p);
//	*p = 20;//* �����ò�����/��ӷ��ʲ�����
//	//��p���н����ò��� �ҵ�����ָ��Ķ���a ��a��ֵ���в���
//	printf("a = %d\n", a);
//	
//	return 0;
//}

//�ṹ��-�������Ӷ���-�Դ�����
struct Book
{

	char name[20];//C���Գ������
	short price;//55

};
int main()
{
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������",55 };
	struct Book* pb = &b1;
	printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);

	//����pb��ӡ�����ͼ۸�
	//�ṹ�����. ��Ա
	//�ṹ��ָ��-> ��Ա
	//printf("%s\n",(*pb).name);
	//printf("%s\n",(*pb).price);
	//��һ��д��
	//printf("%s\n",pb -> name);
	//printf("%s\n",pb -> price);

	return 0;

}