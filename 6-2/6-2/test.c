#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[5] = { 0 };
	int tmp = 0;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	printf("������5������Ԫ��\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n��������Ԫ��Ϊ\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	while (left != right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	printf("\n������֮�������Ԫ��Ϊ:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
}