#define _CRT_SECURE_NO_WARNINGS 1

//ʹ�õݹ����쳲�������
//#include<stdio.h>
//int Fun(int x)
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//		return Fun(x - 1) + Fun(x - 2);
//}
//int main()
//{
//	int n;
//	int ret;
//	printf("����������\n");
//	scanf("%d", &n);
//	ret = Fun(n);
//	printf("��%d��쳲�������Ϊ%d\n", n, ret);
//}     //���ּ���Ч��̫��

//ʹ��ѭ��
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 1;
	int c;
	int n = 10;
	int i;
	for (i=1;i<=n-2;i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d\n", c);
}