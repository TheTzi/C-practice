#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//�⺯��

/* strcpy example */

//int main()
//{
//	char str1[] = "Sample string";
//	char str2[40];
//	char str3[40];
//	strcpy(str2, str1);
//	strcpy(str3, "copy successful");
//	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
//	return 0;
//}

/* memset example */

//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//	return 0;
//}

//�Զ��庯��

//get_max���������

//int get_max(int x, int y) 
//{
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}

//�����������α���������

//void Swap1(int x, int y) {//�� ��ʾû�з���ֵ
//	int tmp = 0;
//	tmp = x;//x,y���� a��bû�н���
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* px, int* py) {
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	Swap1(num1, num2);
//	printf("Swap1::num1 = %d num2 = %d\n", num1, num2);
//	Swap2(&num1, &num2);
//	printf("Swap2::num1 = %d num2 = %d\n", num1, num2);
//	return 0;
//}

//��ֵ����
//��ַ����

//�ж�һ�����ǲ����������Գ�������������
//�ҳ�100-200֮�������

//int judge_prime(int a)
//{
//	int j = 1; //2->n-1
//	for (j = 2; j < a; j++)//�Ż�j<=sqrt(n)
//	{
//		if (a % j == 0)
//			return 0;
//	}
//	return 1;//a���ܱ�������j == a)
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (judge_prime(i) == 1)
//			printf("%d", i);
//	}
//	return 0;
//}

//�ж�һ���ǲ������� scanf����
//��ӡ1000-2000��֮�������
//int judge_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for(year =1000; year<=2000; year++)
//		if (judge_leap_year(year))
//		{
//			printf("%d", year);
//		}
//
//	return 0;
//}
//

//������������Ķ��ֲ���
                  //��������һ��ָ��
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}
//int main()
//{
//	//���ֲ���
//	//��һ�����������в��Ҿ�����
//	//�ҵ��򷵻���������±꣬�Ҳ�������-1
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//                     ���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("no result\n");
//	}
//	else
//	{
//		printf("subscript is %d\n",ret);
//	}
//
//	return 0;
//}

//ÿ����һ�Σ�num+1�ĺ���

//void Add(int* a)
//{
//    (*a)++;
//}
//int main()
//{
//    int num = 0;
//    Add(&num);
//    printf("%d\n",num);
//    return 0;
//}
//
////��ʽ����
//int main()
//{
//    int len = 0;
//
//    len = strlen("abc");
//    printf("%d", len);
//
//    printf("%d", strlen("abc"));
//}
// 
//int main()
//{
//    printf("%d", printf("%d", printf("%d", 43)));
//    //�����ɶ��
//    return 0;
//}
//
////��������
//#include "test.h"
////����Add��ʵ��
//int Add(int x, int y) {
//    return x + y;
//}
// 

//�����ݹ�

//ʷ����򵥵ݹ�
//int main()
//{
//    printf("1");
//     main();
//    return 0;
//}


//����һ���޷�������ֵ������˳���ӡ����ÿһλ

//void print(int n)
//{
//    if (n > 9)
//    {
//        print(n / 10);    
//    }
//    printf("%d", n % 10);
//}
//int main()
//{
//    unsigned int num = 0;
//    scanf("%d", &num); //1234
//    //�ݹ�
//    print(num);
//    return 0;
//}

//��д��������������ʱ���������ַ����ĳ���

//int Strlen(const char* str)//�ݹ�ķ��� ����������ʱ����
//{
//    if (*str == '\0')
//        return 0;
//    else return 1 + Strlen(str + 1);//str+1��a�ĵ�ַ���b�ĵ�ַ����
//} 
//int main()
//{
//    char* p = "abcdef";
//    int len = Strlen(p);
//    printf("%d\n", len);
//    return 0;
//}

//������ʱ���� ��whileѭ�����
//int my_strlen(char* str)
//{
//    int count = 0;
//    while(*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//int main()
//{
//    char arr[] = "bit";
//
//    int len = my_strlen(arr);
//    printf("len = %d\n", len);
//    
//    return 0;
//}

//�ݹ������
//��n�Ľ׳�

//int factorial(int n) 
//{
//    if (n <= 1)
//        return 1;
//    else
//        return n * factorial
//        (n - 1);
//}
//
////���n��쳲��������������������
//int fib(int n) 
//{
//    if (n <= 2)
//        return 1;
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//
//int count = 0;//ȫ�ֱ���
//int fib(int n) {
//    if (n == 3)
//        count++;
//    if (n <= 2)
//        return 1;
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//
////�ǵݹ�д��
////��n�Ľ׳�
//int factorial(int n) 
//{
//    int result = 1;
//    while (n > 1)
//    {
//        result *= n;
//        n -= 1;
//    }
//    return result;
//}
//���n��쳲�������
//int result;
//int fib(int n) 
//{
//    int pre_result;
//    int next_older_result;
//    result = pre_result = 1;
//    while (n > 2)
//    {
//        n -= 1;
//        next_older_result = pre_result;
//        pre_result = result;
//        result = pre_result + next_older_result;
//    }
//    return result;
//}
//int main()
//{
//    int input = 5;
//    fib(input);
//    printf("%d\n", result);
//    return 0;
//}

//������������Ȼ�����õݹ����� ջ���
void test(int n)
{
    if (n < 10000)
    {
        test(n + 1);
    }
}
int main()
{
    test(1);
    return 0;
}

