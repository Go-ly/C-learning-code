//C����ʵ�ֲ�������Ϸ

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int input;                    //�洢ѡ���ѡ���Ӧ������
	srand((unsigned)time(NULL));   //��ʱ�����������������������
	                                //���ֱ����randȥ����������Ļ������ɵ��������α�����
	do
	{
		home();                 //��Ϸ��ҳ  ����д��һ������
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		system("cls");          //��������
		switch (input)
		{
		case 1:
			game();         //������Ϸ
			break;
		case 0:
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
}
int game()
{
	int input = 0;        //����ֱ�ӽ�input��ʼ����Ȼ����inputȥ�洢�µ�����
	                     //Ҳ�������¶���һ���������洢
	int s;              //���������������������
	s = rand();	while (1)
	{
		printf("��������µ�����\n");
		scanf("%d", &input);
		system("cls");    //��������
		if (input > s)
		{
			printf("�´���\n");
		}
		else if (input < s)
		{
			printf("��С��\n");
		}
		else
		{
			printf("#########################################\n");
			printf("####             Victory !!!         ####\n");
			printf("#########################################\n");
			break;
		}
	}
}
int home() 
{
	printf("\n########################################\n");
	printf("####           1.��ʼ��Ϸ           ####\n");
	printf("####           0.�˳���Ϸ           ####\n");
	printf("########################################\n");
}
	
