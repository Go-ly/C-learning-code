#define _CRT_SECURE_NO_WARNINGS 1
//ģ��strcpy����ʵ���ַ�������
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* des, const char* src)
//{
//	
//	assert(des && src);        //��ָ����ж��ԣ�����ָ�����Ч��
//	char* ret = des;
//	while (*des++ = *src++)    //����src��ָ����ַ�����des��ָ����ַ���
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "qwertyuif";     //Ŀ���ַ����ռ�������Դ�ַ���
//	char arr2[] = "thanks";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//}

//ģ��ʵ��strcat����ʵ���ַ���׷��
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



//strerror������ϰʹ��
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


//��ϰʹ��isupperϵ�к�����toupperϵ�к���
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