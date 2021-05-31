#define _CRT_SECURE_NO_WARNINGS 1
//冒泡排序再复习一遍
//从小到大排序
// 
// 法一：
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	int j = 0;
//	int t = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = i+1; j < 10; j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				continue;
//			}
//			else
//			{
//				t = arr[i];
//				arr[i] = arr[j];
//				arr[j] = t;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//法二：
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
	/*int j = 0;
	int tmp = 0;
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz;
	int i = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}*/

//学习使用qsort函数来排序
//qsort函数可对任何类型的元素进行排序
//qsort函数void qsort( void *base, size_t num, size_t width, int (*compare )(const void *e1, const void *e2 ) );

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
};
int cmp(const void* e1, const void* e2)
{
	return (*(int*)e1) - (*(int*)e2);
}
int cmpf(const void* e1, const void* e2)
{
	return (int)(((*(float*)e1) - (*(float*)e2)));
}
int cmp_for_Stu(const void* e1, const void* e2)
{
	return (((struct Stu*)e1)->age) - (((struct Stu*)e2)->age);
}
void test3()
{
	struct Stu s[3] = { {"liyang",10},{"zhuchunlei",2},{"xuelongda",3} };
	int sz = sizeof(s) / sizeof(s[0]);
	//int i = 0;
	struct Stu* p = s;
	qsort(s, sz, sizeof(s[0]), cmp_for_Stu);
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", p->age);
	//}
	printf("%d ", s[2].age);
}
void test2()
{
	float arr[] = { 9.0,6.0,5.0,4.0,3.0,2.0,7.0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	qsort(arr, sz, sizeof(arr[0]), cmpf);
	for (i = 0; i < sz; i++)
	{
		printf("%f ", arr[i]);
	}
}
void test1()
{

	int arr[] = { 5,7,9,6,8,4,3,2,10,1};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	qsort(arr, sz, sizeof(arr[0]), cmp);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
//定义一个结构体类型

int main()
{
	//test1();
	//test2();
	test3();
}