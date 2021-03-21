//#include<stdio.h>
//int main()
//{
//	int i;
//	int j;
//	int count = 0;
//	int a[200];
//	for (i = 0; i < 200; i++)
//	{
//		a[i] = i + 1;
//	}
//	a[0] = 0;
//	for (i = 1; i < ; i++)
//	{
//		for (j = i + 1; j < 200; j++)
//		{
//			if (a[i] != 0 && a[j] != 0)
//			{
//				if (a[j] % a[i] == 0)
//				{
//					a[j] =0;
//				}
//			}
//		}
//	}
//	for (i = 0; i < 200; i++)
//	{
//		if (a[i] != 0)
//		{
//			printf("%d ", a[i]);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}


//筛选法求解素数
//#include<stdio.h>
//int main()
//{
//	int i;
//	int j;
//	int count=0;
//	int a[200];
//	int r;
//	
//	for (i = 0; i < 200; i++)
//	{
//		a[i] = i + 1;
//	}
//	a[0] = 0;
//    r = sqrt(200);
//	for (i = 1; i < r; i++)
//	{
//		for (j = i + 1; j < 200; j++)
//		{
//			if (a[i] != 0 && a[j] != 0)
//			{
//				if (a[j] % a[i] == 0)
//				{
//					a[j] = 0;
//				}
//			}
//		}
//	}
//	for (i = 0; i < 200; i++)
//	{
//		if (a[i] != 0)
//		{
//			printf("%d ", a[i]);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}


//求解100以内的数中出现多少个数字9

//#include<stdio.h>
//int main()
//{
//	int i;
//	int t;
//	int s;
//	int count=0;
//	for (i = 0; i <= 100; i++)
//	{
//		t = i % 10;
//		s = i / 10;
//		if (t == 9)
//		{
//			count++;
//		}
//		if (s == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}


//计算1+1/2+1/3+1/4+1/5......1/100

//#include<stdio.h>
//int main()
//{
//	int i;
//	double s = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		s = s + 1.0 / i;
//	}
//	printf("%lf", s);
//}


//计算1-1/2+1/3-1/4+.....1/100
//法一：
//#include<stdio.h>
//int main()
//{
//	int i;
//	double sum = 0;
//	for (i = 1; i < 100; i+=2)
//	{
//		sum = sum + 1.0 / i;
//	}
//	for (i = 2; i <= 100; i+=2)
//	{
//		sum = sum - 1.0 / i;
//	}
//	printf("%lf\n", sum);
//}

//法二：
//#include<stdio.h>
//int main()
//{
//	int i;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//}


//求10个整数中的最大值
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,20,9 };
//	int i;
//	int max=arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//}

//打印乘法口诀表
//#include<stdio.h>
//int main()
//{
//	int i;
//	int j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, j * i);	
//		}
//		printf("\n\n");
//	}
//}

//打印从两边向中间汇聚练习
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char a[] = "welcome to shannxi!";
	char b[] = "###################";
	int sz = sizeof(a) / sizeof(a[0]);
	int left = 0;
	int right = sz - 1;
	for (left = 0, right = sz - 1; ; left++, right--)
	{
		if (left > right)
			break;
		printf("%s\n", b);
		b[left] = a[left];
		b[right] = a[right];
		Sleep(1000);
		system("cls");
	}
	printf("%s\n", b);
}