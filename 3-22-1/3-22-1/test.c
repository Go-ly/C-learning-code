//C语言实现猜数字游戏

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int input;                    //存储选择的选项对应的数字
	srand((unsigned)time(NULL));   //用时间戳来设置随机数的生成起点
	                                //如果直接用rand去生成随机数的话，生成的随机数是伪随机数
	do
	{
		home();                 //游戏首页  单独写的一个函数
		printf("请选择:>\n");
		scanf("%d", &input);
		system("cls");          //进行清屏
		switch (input)
		{
		case 1:
			game();         //进入游戏
			break;
		case 0:
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
}
int game()
{
	int input = 0;        //可以直接将input初始化，然后用input去存储猜的数字
	                     //也可以重新定义一个变量来存储
	int s;              //用来接收所产生的随机数
	s = rand();	while (1)
	{
		printf("请输入你猜的数字\n");
		scanf("%d", &input);
		system("cls");    //进行清屏
		if (input > s)
		{
			printf("猜大了\n");
		}
		else if (input < s)
		{
			printf("猜小了\n");
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
	printf("####           1.开始游戏           ####\n");
	printf("####           0.退出游戏           ####\n");
	printf("########################################\n");
}
	
