//三阶方阵对角线元素之和
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[3][3];
	int i, j, p = 1;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i <= 2; i++)
	{
		p = (a[i][i]) * p;
	}
	printf("%d\n", p);
}
