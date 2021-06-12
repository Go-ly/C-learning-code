#define _CRT_SECURE_NO_WARNINGS 1
#include "function.h"

void menu1()
{
	printf("************************************************************\n");
	printf("******          1.Add                  2.Del          ******\n");
	printf("******          3.Search               4.Modify       ******\n");
	printf("******          5.Show                 6.Sort         ******\n");
	printf("******          0.Exit                                ******\n");
	printf("************************************************************\n");
}

static void menu2()
{
	printf("************************************************************\n");
	printf("******          1.name                 2.sex          ******\n");
	printf("******          3.age                  4.tel          ******\n");
	printf("******          5.addr                                ******\n");
	printf("************************************************************\n");
}

void Ini(struct contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));   //使用内存设置函数对通讯录的data进行初始化
	ps->size = 0;
	printf("**********           通讯录已准备就绪              *********\n");
}

void Add(struct contact* ps)
{
	if ((ps->size) == MAX)
	{
		printf("通讯录已满，无法增加成员\n");
	}
	else
	{
		printf("请输入所要增加的成员信息\n");
		printf("姓名:>");
		scanf("%s", ps->data[ps->size].name);
		printf("性别:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("年龄:>");
		scanf("%d",&(ps->data[ps->size].age));
		printf("电话:>");
		scanf("%s",ps->data[ps->size].tel);
		printf("地址:>");
		scanf("%s", ps->data[ps->size].addr);
		printf("添加成功\n");
		ps->size++;    //通讯录成员数量增加1
	}
}

void Show(const struct contact* ps)
{
	int i = 0;
	if (ps->size == 0)       //对通讯录成员量进行判断
	{
		printf("通讯录为空\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-4s\t%-12s\t%-20s\n","姓名","性别","年龄","电话","住址");
		for(i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-5s\t%-4d\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].sex,
				ps->data[i].age,
				ps->data[i].tel,
				ps->data[i].addr);
		}
	}
}

static int Find_By_Name(const struct contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(name, ps->data[i].name))
		{
			break;
		}
	}
	if (i == ps->size)
	{
		return -1;
	}
	else
	{
		return i;
	}
}

void Delete(struct contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除的人的姓名\n");
	scanf("%s", name);
	int ret = Find_By_Name(ps, name);
	if (ret == -1)
	{
		printf("所要删除的人不存在!!!\n");
	}
	else
	{
		int i = 0;
		for (i = ret; i < ps->size - 1; i++)
		{
			ps->data[i] = ps->data[i + 1];
		}
	}
	printf("删除成功!!!\n");
	ps->size--;
}

void Search(const struct contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找的人的姓名\n");
	scanf("%s", name);
	int ret = Find_By_Name(ps, name);
	if (ret == -1)
	{
		printf("所要查找的成员不存在\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-4s\t%-12s\t%-20s\n", "姓名", "性别", "年龄", "电话", "住址");
		printf("%-20s\t%-5s\t%-4d\t%-12s\t%-20s\n",
			ps->data[ret].name,
			ps->data[ret].sex,
			ps->data[ret].age,
			ps->data[ret].tel,
			ps->data[ret].addr);
	}
}

void Modify(struct contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改的成员姓名\n");
	scanf("%s", name);
	int ret = Find_By_Name(ps, name);
	if (ret == -1)
	{
		printf("所要修改的成员不存在\n");
	}
	else
	{
		printf("请输入所要修改的这个成员的信息\n");
		printf("姓名:>");
		scanf("%s", ps->data[ret].name);
		printf("性别:>");
		scanf("%s", ps->data[ret].sex);
		printf("年龄:>");
		scanf("%d", &(ps->data[ret].age));
		printf("电话:>");
		scanf("%s", ps->data[ret].tel);
		printf("地址:>");
		scanf("%s", ps->data[ret].addr);
		printf("修改成功\n");
	}
}

int Cmp1(const void* e1, const void* e2)   //按姓名排序的方法
{
	int ret = strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);
	return -ret;
}

int Cmp2(const void* e1, const void* e2)      //按性别来排序
{
	int ret = strcmp(((struct PeoInfo*)e1)->sex, ((struct PeoInfo*)e2)->sex);

	return -ret;
}

int Cmp3(const void* e1, const void* e2)      //按年龄来排序
{
	int ret = strcmp(((struct PeoInfo*)e1)->age, ((struct PeoInfo*)e2)->age);

	return -ret;
}

int Cmp4(const void* e1, const void* e2)      //按电话号来排序
{
	int ret = strcmp(((struct PeoInfo*)e1)->tel, ((struct PeoInfo*)e2)->tel);

	return -ret;
}

int Cmp5(const void* e1, const void* e2)      //按地址来排序
{
	int ret = strcmp(((struct PeoInfo*)e1)->addr, ((struct PeoInfo*)e2)->addr);

	return -ret;
}

void Sort(struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int met = 0;
		int i = 0;
		menu2();
		printf("请选择你要排序的方式\n");
		scanf("%d", &met);
		switch(met)
		{
		case NAME:
			qsort(ps->data, MAX, sizeof(struct PeoInfo), Cmp1);
			break;
		case SEX:
			qsort(ps->data, MAX, sizeof(struct PeoInfo), Cmp2);
			break;
		case AGE:
			qsort(ps->data, MAX, sizeof(struct PeoInfo), Cmp3);
			break;
		case TEL:
			qsort(ps->data, MAX, sizeof(struct PeoInfo), Cmp4);
			break;
		case ADDR:
			qsort(ps->data, MAX, sizeof(struct PeoInfo), Cmp5);
			break;
		}
		printf("排序完成!!!\n");
		printf("%-20s\t%-5s\t%-4s\t%-12s\t%-20s\n", "姓名", "性别", "年龄", "电话", "住址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-5s\t%-4d\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].sex,
				ps->data[i].age,
				ps->data[i].tel,
				ps->data[i].addr);
		}
	}
}