#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = -2;
//	int b = a >> 1;
//	printf("%d\n", b);
//}

//交换两个变量的值

//int main()
//{
//	
//	int a = 7;
//	int b = 10;
//	//法一：
//	/*int temp = 0;
//	temp = a;
//	a = b;
//	b = temp;*/
//	//法二（不引进中间变量）（可能会溢出）：
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	//法三：          //可以看作将a^b作为中间量进行计算(代码可读性差，执行效率比法一低)
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d,%d\n", a, b);
//}

//计算一个整数的二进制数中1的个数(补码)
// 法一：
//int main()
//{
//	int num;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//
//	}
//
//	printf("%d\n", count);        //此方法不能用于负数
//}
//法二：
int main()
{
	int num;
	int count = 0;
	int i;
	scanf("%d", &num);
	for(i=0;i<32;i++)
	{ 
		if ((num & 1) == 1)
		{
			count++;
		}
		num = num >> 1;
	}
	printf("%d", count);
}