#define _CRT_SECURE_NO_WARNINGS 1
//模拟strcpy函数实现字符串拷贝
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* des, const char* src)
//{
//	
//	assert(des && src);        //对指针进行断言，检验指针的有效性
//	char* ret = des;
//	while (*des++ = *src++)    //拷贝src所指向的字符串到des所指向的字符串
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "qwertyuif";     //目的字符串空间必须大于源字符串
//	char arr2[] = "thanks";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//}

//模拟实现strcat函数实现字符串追加
//
//#include<stdio.h>
//#include<assert.h>
//char* my_strcat(char* des, const char* src)
//{
//	assert(des && src);
//	char* ret = des;
//	while (*des)
//	{
//		des++;
//	}
//	while (*des++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[25] = "qwerty";
//	char arr2[] = "thanks";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//}



//strerror函数练习使用
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	FILE* pf = fopen("test.c", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		printf("file open success\n");
//	}
//}


//练习使用isupper系列函数及toupper系列函数
//int main()
//{
//	char arr[] = "I AM A boy";
//	int i = 0;
//	while (arr[i])
//	{
//		if (islower(arr[i]))
//		{
//			arr[i] = toupper(arr[i]);
//		}
//		i++;
//	}
//	printf("%s", arr);
//}
#include<ctype.h>
//int main()
//{
//	printf("%d", isupper('1'));
//}