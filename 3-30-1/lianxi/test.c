#define _CRT_SECURE_NO_WARNINGS 1
//编写函数，每次调用函数，num值加1
//#include<stdio.h>
//int Add(int* x)
//{
//	(*x)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//}

//使用递归来拆分数字并输出
//void print(int a)
//{
//	
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a );
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//    print(a);
//	return 0;
//}


//写一个函数使用递归求数组长度,不再定义临时变量
//#include<stdio.h>
//int len(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + len(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello!";
//	int l = len(arr);
//	printf("数组长度为%d\n", l);
//}


//使用递归求阶乘
#include<stdio.h>
int H(int x)
{

	if (x == 1)
	{
		return 1;
	}
	else
	   return x*H(x-1);
}
int main()
{
	int a;
	int ret;
	scanf("%d", &a);
	ret = H(a);
	printf("%d\n", ret);
}