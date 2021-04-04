#define _CRT_SECURE_NO_WARNINGS 1

//使用递归计算斐波那契数
//#include<stdio.h>
//int Fun(int x)
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//		return Fun(x - 1) + Fun(x - 2);
//}
//int main()
//{
//	int n;
//	int ret;
//	printf("请输入数字\n");
//	scanf("%d", &n);
//	ret = Fun(n);
//	printf("第%d个斐波那契数为%d\n", n, ret);
//}     //发现计算效率太低

//使用循环
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 1;
	int c;
	int n = 10;
	int i;
	for (i=1;i<=n-2;i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d\n", c);
}