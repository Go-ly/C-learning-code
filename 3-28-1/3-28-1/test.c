#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char arr[] = "welcome to shannxi";
//	memset(arr, '%', 7);
//	printf("%s", arr);
//}


//#include<stdio.h>
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a;
//	int b;
//	int max;
//	a = 10;
//	b = 15;
//	max = MAX(10, 50);
//	printf("max=%d\n", max);
//}


//�����������α���������
//#include<stdio.h>
//int main()
//{
//	int a = 19;
//	int b = 4;
//	ex(&a, &b);
//	printf("%d %d\n", a,b );  
//}
//int ex(int x, int y)   //����ʵ�ֽ���
//{
//	int t;
//	t = x;
//	x = y;
//	y = t;//x,y��a,b֮��û�н�����ϵ
//}

//�޸�   ��ָ��������ʵ�δ�������ֵ
//int ex(int* pa, int* pb)
//{
//	int tmp;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}


//�������
//#include<stdio.h>
//int main()
//{
//	int arr[100];
//	int i;
//	int j;
//	int count;
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	arr[0] = 0;
//	for (i = 2; i < 100; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (arr[i] % j == 0)
//			{
//				arr[i] = 0;
//			}
//		}
//	}
//	for (i = 0; i < 100; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//}


//дһ���ж������ĺ���
//#include<stdio.h>
//int main()
//{
//	int i;
//	int t ;
//	for (i = 2; i < 100; i++)
//	{
//		t = panduan(i);
//		if (t == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//}
////int panduan(int x)
////{
////	int j;
////	int z;
////	int s = 1;
////	for (j = 2; j < x; j++)
////	{
////		z = x % j;
////		if (z == 0)
////		{
////			s = 0;
////			break;
////		}
////	}
////	return s;
////}
////�Ż�
//int panduan(int x)
//{
//	int j;
//	for (j = 2; j < x; j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}

//дһ�������ж�����
#include<stdio.h>
int main()
{
	int i;
	int t;
	for (i = 2000; i <= 3000; i++)
	{
		t = panduan(i);
		if (t == 1)
		{
			printf("%d ", i);
		}
	}
}
int panduan(int x)
{
	int z = 0;
	if ((x % 4 == 0 && x % 100 != 0)||(x%400==0))
	{
		return 1;
	}
	else 
		return 0;
}
	