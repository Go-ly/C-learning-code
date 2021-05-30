#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
//void test(int arr[])
//	{
//		int t = sizeof(arr) / sizeof(arr[0]);
//		printf("%d\n", t);
//	}
//int main()
//{
	//char a = -128;
	///*signed char b = -1;
	//unsigned char c = -1;*/
	//printf("%d", a);
	/*int a = -20;
	unsigned int i = 10;
	printf("%d\n", a + i);*/
	//-20
	//10000000000000000000000000010100
	//11111111111111111111111111101011
	//11111111111111111111111111101100  补码
	//10
	//00000000000000000000000000001010
	//00000000000000000000000000001010  补码
	//11111111111111111111111111101100  补码
	//11111111111111111111111111110110
	//11111111111111111111111111110101
	//10000000000000000000000000001010
	/*unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);
		Sleep(100);
	}*/
	//char p = 12;
	//return 0;
	//00000000000000000000000000001001--原码
//	//01111111111111111111111111110110--反码
//	//01111111111111111111111111110111--补码
//	/*float i= 0.02;
//	printf("%.2f\n", i);*/
//	
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}
//

//int main()
//{
//	const char* p = "abcdef";
//	//* p = "W";
//
//	printf("%s\n", p);
//	return 0;
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (p1 == p2)
//	{
//		printf("1\n");
//	}
//	else
//	{
//		printf("2\n");
//	}
//}

//指针
//eg1:
//int main()
//{
//	int a = 15;        //定义整形变量并初始化
//	int* p = &a;       //&a取出a的地址，并将其存放在指针变量p中
//	printf("%d\n", a);
//	printf("%d\n", *p);  //*p对指针进行解引用操作--间接访问
//	printf("%p\n", &a);  // %p--以十六进制整数方式输出指针的值即打印地址
//	printf("%p\n", p);
//}
// 
// 
//eg2:
//int main()
//{
//	int t = 2;
//	int* p = &t;  //将t的地址取出并存放于指针变量p中
//}
//
//int main()
//{
//	int arr[5] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr + 1);
//}
//print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*p)[5], int x, int y)
//{
//	int i=0;
//	int j=0;
//	for (i = 0; i < 3; i++)
//	{
//		j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}

int main()
{
	const char* p = "abcdef";

}