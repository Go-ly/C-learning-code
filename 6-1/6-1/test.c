#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��qsort������дð������
int cmp(void* e1, void* e2)   //��ѡ��ıȽϷ���
{
	return *((int*)e1) - *((int*)e2);
}
void swap(char* p1, char* p2, int width)   //ʵ������Ԫ�صĽ���
{
	int t = 0;
	int i = 0;
	for (i = 0; i < width; i++)
	{
		t = *p1;
		*p1 = *p2;
		*p2 = t;
		p1++;
		p2++;
	}
}
void bubble_sort(void* arr, int sz, int width, int(*cmp)(void* e1, void* e2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//ð����������
		for (j = 0; j < sz - 1 - i; j++)   //ÿһ��ð������
		{
			if (cmp((char*)arr + (j * width), (char*)arr + (j + 1) * width)>0)
			{
				//�����������н���
				swap((char*)arr + (j * width), (char*)arr + (j + 1) * width,width);
			}
		}
	}
}
int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
}

