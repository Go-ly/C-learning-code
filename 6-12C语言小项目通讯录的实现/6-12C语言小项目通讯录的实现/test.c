#define _CRT_SECURE_NO_WARNINGS 1
#include "function.h"

int main()
{
	struct contact con;
	
	Ini(&con);        //写一个函数用来刚开始对通讯录进行初始化
	int input = 0;
	do
	{
		menu1();
		printf("请选择所要进行的操作:>");
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
			printf("退出程序\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}