#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//�ڲ����ʽ��������ʵ����
//	printf("%d\n", s);
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//�ʣ�
//��1������2�������ط��ֱ�������٣�40 4/8
//��3������4�������ط��ֱ�������٣�10 4/8

//360������

#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	//i = a++||++b||d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	return 0;
}
//��������Ľ����ʲô��
//a = 1ʱ��

int main()
{
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c");
	return 0;
}

//ʵ��2
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//%u����ʮ���ƴ�ӡ�޷�����
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(!c)); 
	return 0;
}

//���ʽ��ֵ˵������ȷ����
//���ʽ��ֵ�ȿ��Ƿ������������������ת�����ٽ��м���
//���ʽ���������ʱ���ȿ����ڲ����������ȼ���������˭
//���ڲ����������ȼ���ͬ������£����������Ľ���Ծ�������˳��
//ֻҪ�����ȼ��ͽ���ԣ����ʽ�������Ψһֵ *

