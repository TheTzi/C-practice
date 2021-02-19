#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>

//int main()
//{
//	printf("aa\n");
//
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//		
//	return 0;
//}



//int main() 循环语句示例
//{
//	int line = 0;
//	printf("aa\n");
//
//	while (line < 20000)
//	{
//		printf("good\n");
//		line++;
//	}
//	printf("first step\n");
//	return 0;
//}

//int main()//求两个数的较大值作业
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//
//	if (num1 > num2)
//			printf("%d", num1);
//
//	else printf("%d", num2); 
//
//	return 0;
//}

int Max(int x, int y)//写函数求两个数的较大值
{

	if (x > y)
		return x;
	else
		return y;
}
int main()

{
	int num1 = 0;
	int num2 = 0;
	int max = 0;
	scanf("%d %d", &num1, &num2);
	max = Max(num1, num2);
	printf("max = %d\n", max);

	return 0;
}
