#define _CRT_SECURE_NO_WARNINGS 1
//��д������ÿ�ε��ú�����numֵ��1
//#include<stdio.h>
//int Add(int* x)
//{
//	(*x)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//}

//ʹ�õݹ���������ֲ����
//void print(int a)
//{
//	
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a );
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//    print(a);
//	return 0;
//}


//дһ������ʹ�õݹ������鳤��,���ٶ�����ʱ����
#include<stdio.h>
int len(char* str)
{
	if (*str != '\0')
	{
		return 1 + len(str + 1);
	}
	else
		return 0;
}
int main()
{
	char arr[] = "hello!";
	int l = len(arr);
	printf("���鳤��Ϊ%d\n", l);
}