//��ӡ����
//#include<stdio.h>
//int main()
//{
//	int i;
//	int j;
//	int count = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)    //�Գ���    ����˴��ж�i%j!=0�Ļ��Ƚ��鷳�������ж�
//			{                  //�����ж�Ҳ�Ƚ��鷳  
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//}

//�Ż�1
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i;
//	int j;
//	int count = 0;
//	int r;
//	for (i = 2; i <= 100; i++)
//	{
//		r = sqrt(i);                //ͨ��2��i�Ŀ���֮�������ȷ���Ƿ�Ϊ����
//                                  
//		for (j = 2; j <= r; j++)
//		{
//			if (i % j == 0)     
//			{
//				break;
//			}
//		}
//		if (j > r)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}
//�Ż�2  jֱ�Ӵ�2��i/2
//�Ż�3  ����������Ϊż����i��Ϊi+=2
//�Ż�4  ���Ѿ�������������ȱ���������Ȼ�����ں������Գ���Ч�ʴ����ߡ�
#include<stdio.h>
int main()
{
	int i;
	int j;
	int count = 0;
	int arr[100];
	for (i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
	}
	for (i = 0; i < 100; i++)
	{
		for (j = i - 1; j > 1; j--)
		{
			if (arr[i] % j == 0)
			{
				arr[i] = 0;
			}
		}
	}
	for (i = 1; i < 100; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d ", arr[i]);
			count++;
		}
	}
	printf("\n%d", count);
	return 0;

}


//�ж����꣬��ӡ����
//#include<stdio.h>
//int main()
//{
//	int year;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//}

//�Ż�
//#include<stdio.h>
//int main()
//{
//	int year;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//}