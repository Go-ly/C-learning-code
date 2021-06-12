#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<errno.h>
//int main()
//{
//	int* ps = (int*)malloc(10 * sizeof(int));
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(ps + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(ps + i));
//		}
//	}
//	free(ps);
//	ps = NULL;
//}


int main()
{
	int* ps = (int*)calloc(10, sizeof(int));
	if (ps == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(ps + 1));
		}
	}
	free(ps);
	ps = NULL;
}