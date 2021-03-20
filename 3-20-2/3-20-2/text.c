//打印素数
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
//			if (i % j == 0)    //试除法    如果此处判断i%j!=0的话比较麻烦，不好判断
//			{                  //这样判断也比较麻烦  
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

//优化1
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
//		r = sqrt(i);                //通过2到i的开方之间的数来确定是否为素数
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
//优化2  j直接从2到i/2
//优化3  素数不可能为偶数，i可为i+=2
//优化4  将已经算出的素数，先保存起来，然后用于后续的试除，效率大大提高。
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


//判断闰年，打印闰年
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

//优化
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