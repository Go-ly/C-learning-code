#define  _CRT_SECURE_NO_WARNINGS 1
//#include<string.h>
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char arr[20];
//	system("shutdow -s -t 60");
//	again:
//	printf("SOS!!!\n");
//	printf("电脑将在60秒后关机\n");
//	printf("若想取消，请输入cancle\n");
//	scanf("%s", arr);
//	if (strcmp(arr, "cancle"))
//	{
//		system("shutdow -a");
//	}
//	else
//	{
//		goto again;
//	}
//}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int main()
//{
//	char arr[20];
//	system("shutdow -s -s 60");
//	again:
//	printf("电脑将在60秒后关机,若想取消，请输入cancle\n");
//	scanf("%s", arr);
//	if (strcmp(arr, "cancle") == 0)
//	{
//		system("shutdow -a");
//	}
//	else
//	{
//		goto again;
//	}
//}


//用循环来实现
int main()
{
	char arr[20];
	system("shutdown -s -t 60");
	while (1)
	{
		printf("电脑60秒后关机，若要取消，请输入sos\n");
		scanf("%s", arr);
		if (0 == strcmp(arr, "sos"))
		{
			system("shutdown -a");
			break;
		}
	}
}