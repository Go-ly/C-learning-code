#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//}
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}



//strlen����ģ��ʵ��
//1.������д��

//#include<assert.h>
//int mystrlen(const char* p)
//{
//	int count = 0;
//	assert(p != NULL);
//	while (*p)
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	int len = mystrlen("abcdef");
//	printf("%d\n", len);
//}

//2.ָ��д��
// 
//int mystrlen(const char* p)
//{
//	char* pa = p;
//	while (*pa)
//	{
//		pa++;
//	}
//	return pa - p;
//}
//int main()
//{
//	int len = mystrlen("abcdef");
//	printf("%d\n", len);
//}

//3.�ݹ�д��
int mystrlen(const char* p)
{
	if (*p != '\0')
	{
		p++;
		return 1 + mystrlen(p);
	}
	else
		return 0;
}
int main()
{
	int len = mystrlen("abcdef");
	printf("%d\n", len);
}