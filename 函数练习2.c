#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//�ݹ���ϰ
//��������ݹ麯�������ú���Fun��2��������ֵ�Ƕ���
int Fun(int n)
{
	if (n == 5)
		return 2;
	else return 2 * Fun(n + 1);
}

//�ݹ�������������
//���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//ÿ�εݹ����֮��Խ��Խ�ӽ������������
//�ݹ�������޵ݹ���ȥ
//�ݹ���̫������ջ�������

//�ж����� ��ӡ100-200֮�������
int judge_prime(int a)
{
	int j = 1; //2->n-1
	for (j = 2; j < a; j++)//�Ż�j<=sqrt(n)
	{
		if (a % j == 0)
			return 0;
	}
	return 1;//a���ܱ�������j == a)
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (judge_prime(i) == 1)
			printf("%d", i);
	}
	return 0;
}


//�ж����� ��ӡ1000-2000֮�������
int judge_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
		if (judge_leap_year(year))
		{
			printf("%d", year);
		}

	return 0;
}

//����˷��ھ���
void printTable(int a)
{
	int i = 0;
	for (i = 1; i <= a; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-3d ", i, j, i * j);//%-3d?
		}
		printf("\n");
	}
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printTable(a);
	return 0;
}

//�ݹ鷽ʽ��ӡ������ÿһλ
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num); //1234
	//�ݹ�
	print(num);
	return 0;
}

//��д��������������ʱ���������ַ����ĳ���

int Strlen(const char* str)//�ݹ�ķ��� ����������ʱ����
{
	if (*str == '\0')
		return 0;
	else return 1 + Strlen(str + 1);//str+1��a�ĵ�ַ���b�ĵ�ַ����
}
int main()
{
	char* p = "abcdef";
	int len = Strlen(p);
	printf("%d\n", len);
	return 0;
}

//�ַ�������
//��дһ������ reverse_string(char*string)(�ݹ�ʵ��)
//�������ַ����е��ַ���������

//��ͨ����ʵ��
int reverse_string(char* string)
{
	int left = 0;
	int right = strlen(string) - 1;
	
	while (left <= right)
	{
		int tmp = string[left];
		string[left] = string[right];
		string[right] = string[tmp];
		left++;
		right--;
	}
}
int main()
{
	char string[] = "abcdef";
	reverse_string(string);
	printf("%s\n", string);

	return 0;
}

//�ݹ�ʵ��
//���� a b c d e f
//1.a��f����
//2.����b c d e
void reverse_string2(char arr[])
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr + 1) >= 2)
		reverse_string2(arr + 1);
	arr[len - 1] = tmp;
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);

	return 0;
}

//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
int DigitSum(unsigned int num)
{
	if (num > 9)
	{
		return DigitSum(num / 10) + num % 10;
	}
	else
	{
		return num;
	}
}
int main()
{
	unsigned int num = 0;
	scanf("%d", num);
	int ret = DigitSum(num);
	printf("%d\n", ret);

	return 0;
}

//��дһ��������ʵ��n��k�η� �õݹ�ʵ��
//n^k = n* n^(k-1)
double Pow(int n, int k)
{
	if (k < 0)
		return(1.0 / Pow(n, -k));
	else if (k == 0)
		return 1;
	else
		return n * Pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf ", ret);
	return 0;
}

//�ǵݹ�д��
//��n�Ľ׳�
int factorial(int n)
{
	int result = 1;
	while (n > 1)
	{
		result *= n;
		n -= 1;
	}
	return result;
}

//���n��쳲�������
int result;
int fib(int n)
{
	int pre_result;
	int next_older_result;
	result = pre_result = 1;
	while (n > 2)
	{
		n -= 1;
		next_older_result = pre_result;
		pre_result = result;
		result = pre_result + next_older_result;
	}
	return result;
}
int main()
{
	int input = 5;
	fib(input);
	printf("%d\n", result);
	return 0;
}

//16 C