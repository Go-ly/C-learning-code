#define _CRT_SECURE_NO_WARNINGS 1
//��ӡ1-100֮������3�ı���
//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\t", i);
//	}
//	return 0;
//}

//��2���������Լ��
#include<stdio.h>
int main()
{
	int a;
	int b;
	int i;
	int t;
	printf("please input number:>\n");
	scanf("%d%d", &a, &b);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	for (i = b; i > 0; i--)
	{
		if ((a % i == 0) && (b % i == 0))
		{
			printf("���Լ����%d\n", i);
			break;
		}
	}
	return 0;
}