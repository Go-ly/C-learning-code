#define _CRT_SECURE_NO_WARNINGS 1
#include "function.h"

int main()
{
	struct contact con;
	
	Ini(&con);        //дһ�����������տ�ʼ��ͨѶ¼���г�ʼ��
	int input = 0;
	do
	{
		menu1();
		printf("��ѡ����Ҫ���еĲ���:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Add(&con);
			break;
		case DEL:
			Delete(&con);
			break;
		case SEARCH:
			Search(&con);
			break;
		case MODIFY:
			Modify(&con);
			break;
		case SHOW:
			Show(&con);
			break;
		case SORT:
			Sort(&con);
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}