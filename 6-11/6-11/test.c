#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a =1 ;
//	int* p = &a;
//	char* pf = (char*)p;
//	if (*pf)
//	{
//		printf("С���ֽ���洢ģʽ\n");
//	}
//	else
//	{
//		printf("����ֽ���洢ģʽ\n");
//	}
//}

//��װһ��������ʵ��

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
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
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