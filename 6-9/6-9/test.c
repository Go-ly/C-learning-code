#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//strstr的使用
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cd";
//	char* p = strstr(arr1, arr2);
//	printf("%s", p);
//}
//strtok
//int main()
//{
//	char arr1[] = "liyang.18.2002";
//	char arr2[] = ".";
//	char buf[50] = { 0 };
//	strcpy(buf, arr1);
//	char* ret = NULL;
//	for (ret = strtok(buf, arr2); ret != NULL; ret = strtok(NULL, arr2))
//	{
//		printf("%s\n", ret);
//	}
//}

int main()
{
	char arr1[] = "李阳，18.19";
	char arr2[] = "，.";
	char tem[20] = { 0 };
	strcpy(tem, arr1);
	char* ret = NULL;
	for (ret = strtok(tem, arr2); ret != NULL; ret = strtok(NULL, arr2))
	{
		printf("%s\n", ret);
	}
}