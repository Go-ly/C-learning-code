#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 10
//����N�׷���ĳ��˶Խ��ߣ����һ�У����һ��Ԫ��֮���ʣ��Ԫ��֮��
void createMatrix(int a[N][N])  //�˺������˸����鸳��ֵ������ӡ
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
	int sum = 0;//�Խ��ߺ�
	int Sum = 0;
	int l = 0;//��l����ʾ�к�
	int r = 0;//��r��ʾ�к�
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