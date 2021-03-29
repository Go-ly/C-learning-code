#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int search(int a[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
			if (a[mid] > k)
			{
				right = mid - 1;
			}
			else
			{
				return mid;
			}
	}
	
		return 0;
	
}
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(a) / sizeof(a[0]);
	int k = 7;
	int ret = search(a,k,sz);
	if (ret == 0)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，它的下标是%d\n", ret);
	}
}
