#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}
//
//struct Stu
//{
//	int a;
//	char b;
//	char arr[0];
//};
//int main()
//{
//	struct Stu s;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = calloc(5, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			p[i] = i;
//		}
//	}
//	int i = 0;
//	int* ptr = (int*)realloc(p, 10 * sizeof(int));
//	if (ptr != NULL)
//	{		
//		p = ptr;
//		for (i = 5; i < 10; i++)
//	    {
//			*(ptr+i) = i;
//	    }
//	    for (i = 0; i < 10; i++)
//	    {
//		    printf("%d ", ptr[i]);
//	    }
//	}
//	free(ptr);
//	ptr = NULL;
//}



struct S
{
	char a;
	int arr[0];
};
int main()
{
	printf("%d \n", sizeof(struct S));
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	//进行初始化
	if (ps != NULL)
	{
		ps->a = 10;
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			ps->arr[i] = i;
		}
		struct S* ptr = realloc(ps,44);
	}
	free(ps);
	ps = NULL;

	
}