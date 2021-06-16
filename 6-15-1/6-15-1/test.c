#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>
//int main()
//{
//	FILE* pf = fopen("t.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//	
//	fclose(pf);
//	pf = NULL;
//	FILE* pfr = fopen("t.txt", "r");
//	printf("%c", fgetc(pfr));
//	printf("%c", fgetc(pfr));
//	printf("%c", fgetc(pfr));
//	fclose(pfr);
//	pfr = NULL;
//}

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//}

//int main()
//{
//	FILE* pf = fopen("t.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('l', pf);
//	fputc('i', pf);
//	fputc('m', pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//读文件
//int main()
//{
//	FILE* ptr = fopen("t.txt", "r");
//	if (ptr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	int ch = 0;
//	ch = fgetc(ptr);
//	printf("%c", ch);
//	ch = fgetc(ptr);
//	printf("%c", ch);
//	fclose(ptr);
//	ptr = NULL;
//}

//fgets读文件
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("t.txt", "r");
//	fgets(buf, 1024, pf);
//	puts(buf);
//	//printf("%s", buf);
//	fgets(buf, 1024, pf);
//	puts(buf);
//	//printf("%s", buf);
//	fclose(pf);
//	pf = NULL;
//}

//fputs写文件
//int main()
//{
//	FILE* pf = fopen("t.txt", "w");
//	if (pf == NULL)
//	{
//		printf(strerror(errno));
//		return 0;
//	}
//	fputs("good\n", pf);
//	fputs("morning\n", pf);
//	fclose(pf);
//	pf = NULL;
//
//}

int main()
{
	char arr[1024] = { 0 };
	/*gets(arr);
	puts(arr);*/
	fgets(arr,1024, stdin);
	fputs(arr, stdout);
	
}