#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int sum(int m, int n);
//
//int main()
//{
//    int m, n;
//
//    scanf("%d %d", &m, &n);
//    printf("sum = %d\n", sum(m, n));
//
//    return 0;
//}
//int sum(int m, int n)
//{
//    int sum = 0;
//    int i = 0;
//    for (i = m; i <= n; i++)
//    {
//        sum = sum + i;
//    }
//    return sum;
//}
//#include <stdio.h>

//int max(int a, int b);
//
//int main()
//{
//    int a, b;
//
//    scanf("%d %d", &a, &b);
//    printf("max = %d\n", max(a, b));
//
//    return 0;
//}
//int max(int a, int b)
//{
//    if (a > b)
//    {
//        return a;
//    }
//    else
//    {
//        return b;
//    }
//}
#include<stdio.h>
#define N 4		//N��ӡ�Ĳ���
int main()
{
	int i, j, k;	//i����  j�Ǵ�ӡ�ո������ k�Ǵ�ӡ*������
	for (i = 1; i <= N; i++)
	{
		for (j = N-i; j >=0; j--)
		{
			printf(" ");	//��ӡ�ո�
		}
		for (k = 0; k <i; k++)
		{
			printf("* ");	//��ӡ*
		}
		printf("\n");
	}
	return 0;
}
