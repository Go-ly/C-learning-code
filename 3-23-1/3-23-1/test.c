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
//	printf("���Խ���60���ػ�\n");
//	printf("����ȡ����������cancle\n");
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
//	printf("���Խ���60���ػ�,����ȡ����������cancle\n");
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


//��ѭ����ʵ��
int main()
{
	char arr[20];
	system("shutdown -s -t 60");
	while (1)
	{
		printf("����60���ػ�����Ҫȡ����������sos\n");
		scanf("%s", arr);
		if (0 == strcmp(arr, "sos"))
		{
			system("shutdown -a");
			break;
		}
	}
}