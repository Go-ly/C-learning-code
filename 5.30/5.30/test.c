#define _CRT_SECURE_NO_WARNINGS 1
//C����ʵ�ּ��׼�����
#include<stdio.h>
void menu()
{
	printf("************************************\n");
	printf("****      1.Add         2.Sub   ****\n");
    printf("****      3.Mul         4.Div   ****\n");
    printf("****            0.�˳�          ****\n");
	printf("************************************\n");
}
void Add(int x,int y)
{
	printf("output=%d\n", x + y);
}
void Sub(int x, int y)
{
	printf("output=%d\n", x - y);
}
void Mul(int x, int y)
{
	printf("output=%d\n", x * y);
}
void Div(int x,int y)
{
	printf("output=%d\n", x / y);
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	do
	{	
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		void(*p[])(int, int) = { 0,Add,Sub,Mul,Div };
		if (input <= 4 && input >= 1)
		{
			printf("����������������\n");
		    scanf("%d%d", &x, &y);
			p[input](x, y);
		}
		else if (input == 0)
		{
			printf("�˳�����\n");
		}
		else
		{
			printf("�������\n");
			break;
		}
//		switch (input)
//{
//	case 1:
//		printf("����������������\n");
//		scanf("%d%d", &x, &y);
//		Add(x, y);
//		break;
//	case 2:
//		printf("����������������\n");
//		scanf("%d%d", &x, &y);
//		Sub(x, y);
//		break;
//	case 3:
//		printf("����������������\n");
//		scanf("%d%d", &x, &y);
//		Mul(x, y);
//		break;
//	case 4:
//		printf("����������������\n");
//		scanf("%d%d", &x, &y);
//		Div(x, y);
//		break;
//	case 0:
//		printf("�˳�����\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//}
	} while (input);
}
