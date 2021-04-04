#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[16] = { 0 };
	int k = 10;
	int i;
	int a;
	for (i = 0; i <= 15; i++)
	{
		a = k % 2;
		k = k / 2;
		arr[i] = a;
	}
	for (i = 15; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
}