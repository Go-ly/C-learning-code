#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 4;
	int i;
	int j = 1;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		j = j * i;
		sum = sum + j;
	}
	printf("%d\n", sum);
}