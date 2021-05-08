#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int sum = 0;
	int fen5 = 0;
	int fen2 = 0;
	int fen1 = 0;
	int count = 0;
	int total = 0;
	printf("please intput sum:>\n");
	scanf("%d", &sum);
	for (fen5 = 1; fen5 < 20; fen5++)
	{
		for (fen2 = 1; fen2 < 50; fen2++)
		{
			for (fen1 = 1; fen1 < 100; fen1++)
			{
				if (5 * fen5 + 2 * fen2 + fen1 == sum)
				{
					total = fen5 + fen2 + fen1;
					printf("fen5:%d,fen2:%d,fen1:%d,total:%d\n", fen5, fen2, fen1,total);
					count++;
				}
			}
		}
	}
	printf("count:%d\n", count);
}