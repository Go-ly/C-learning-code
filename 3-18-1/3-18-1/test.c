#define _CRT_SECURE_NO_WARNINGS 1
//打印1-100之间所有3的倍数
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\t", i);
//	}
//	return 0;
//}

//求2个数的最大公约数
#include<stdio.h>
int main()
{
	int a;
	int b;
	int i;
	int t;
	printf("please input number:>\n");
	scanf("%d%d", &a, &b);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	for (i = b; i > 0; i--)
	{
		if ((a % i == 0) && (b % i == 0))
		{
			printf("最大公约数是%d\n", i);
			break;
		}
	}
	return 0;
}