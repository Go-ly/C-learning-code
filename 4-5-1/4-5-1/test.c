#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[2];
//	printf("%d", sizeof(arr));
//}/

//#include<stdio.h>
//int main()
//{
//	int i;
//	char arr[] = "abcd";
//	for (i = 0; i < 4; i++)
//	{
//		printf("%c", arr[i]);
//	}
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[][3] = { 0,1,2,3,4,5,6 };
//	printf("%d\n", sizeof(arr));
//}

//√∞≈›≈≈–Ú
#include<stdio.h>
void paixu(int arr[],int  sz)
{
	int i;
	int j;
	int t = 0;
	for (i = 0; i < sz-1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i;
	int sz = sizeof(arr) / sizeof(arr[0]);
	paixu(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
	
}