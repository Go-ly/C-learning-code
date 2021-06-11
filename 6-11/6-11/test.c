#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a =1 ;
//	int* p = &a;
//	char* pf = (char*)p;
//	if (*pf)
//	{
//		printf("小端字节序存储模式\n");
//	}
//	else
//	{
//		printf("大端字节序存储模式\n");
//	}
//}

//封装一个函数来实现

//void my_check()
//{
//	union Un
//	{
//		char i;
//		int a;
//	}u;
//	u.a = 1;
//	if (u.i)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//}
//int main()
//{
//	
//	my_check();
//}

#include<stdio.h>
int main()
{
	enum sex
	{
		male,
		female,
		secret
	}s;
	printf("%d\n", sizeof( s));
}