#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = -2;
//	int b = a >> 1;
//	printf("%d\n", b);
//}

//��������������ֵ

//int main()
//{
//	
//	int a = 7;
//	int b = 10;
//	//��һ��
//	/*int temp = 0;
//	temp = a;
//	a = b;
//	b = temp;*/
//	//�������������м�����������ܻ��������
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	//������          //���Կ�����a^b��Ϊ�м������м���(����ɶ��Բִ��Ч�ʱȷ�һ��)
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d,%d\n", a, b);
//}

//����һ�������Ķ���������1�ĸ���(����)
// ��һ��
//int main()
//{
//	int num;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//
//	}
//
//	printf("%d\n", count);        //�˷����������ڸ���
//}
//������
int main()
{
	int num;
	int count = 0;
	int i;
	scanf("%d", &num);
	for(i=0;i<32;i++)
	{ 
		if ((num & 1) == 1)
		{
			count++;
		}
		num = num >> 1;
	}
	printf("%d", count);
}