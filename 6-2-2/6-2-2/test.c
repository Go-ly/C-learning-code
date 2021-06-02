#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 10
//计算N阶方阵的除了对角线，最后一行，最后一列元素之后的剩余元素之和
void createMatrix(int a[N][N])  //此函数用了给数组赋初值，并打印
{
	int i = 0;
	int j = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			a[i][j] = 1;
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
int sumMatrix(int a[N][N])
{
	int i = 0; 
	int j = 0;
	int sum = 0;//对角线和
	int Sum = 0;
	int l = 0;//用l来表示列和
	int r = 0;//用r表示行和
	int n = 4;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i == j)
			{
				sum = sum + a[i][j];
			}
			Sum = Sum + a[i][j];
		}
		l = l + a[i][n - 1];
		r = r + a[n-1][i];
	}
	return (Sum - sum - l - r);
}
int main()
{
	int a[N][N];
	int i = 0;
	int j = 0;
	createMatrix(a);
	printf("%d\n", sumMatrix(a));
	return 0;
}