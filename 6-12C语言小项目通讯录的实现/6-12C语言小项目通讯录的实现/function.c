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
	memset(ps->data, 0, sizeof(ps->data));   //ʹ���ڴ����ú�����ͨѶ¼��data���г�ʼ��
	ps->size = 0;
	printf("**********           ͨѶ¼��׼������              *********\n");
}

void Add(struct contact* ps)
{
	if ((ps->size) == MAX)
	{
		printf("ͨѶ¼�������޷����ӳ�Ա\n");
	}
	else
	{
		printf("��������Ҫ���ӵĳ�Ա��Ϣ\n");
		printf("����:>");
		scanf("%s", ps->data[ps->size].name);
		printf("�Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("����:>");
		scanf("%d",&(ps->data[ps->size].age));
		printf("�绰:>");
		scanf("%s",ps->data[ps->size].tel);
		printf("��ַ:>");
		scanf("%s", ps->data[ps->size].addr);
		printf("��ӳɹ�\n");
		ps->size++;    //ͨѶ¼��Ա��������1
	}
}

void Show(const struct contact* ps)
{
	int i = 0;
	if (ps->size == 0)       //��ͨѶ¼��Ա�������ж�
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-4s\t%-12s\t%-20s\n","����","�Ա�","����","�绰","סַ");
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
	printf("������Ҫɾ�����˵�����\n");
	scanf("%s", name);
	int ret = Find_By_Name(ps, name);
	if (ret == -1)
	{
		printf("��Ҫɾ�����˲�����!!!\n");
	}
	else
	{
		int i = 0;
		for (i = ret; i < ps->size - 1; i++)
		{
			ps->data[i] = ps->data[i + 1];
		}
	}
	printf("ɾ���ɹ�!!!\n");
	ps->size--;
}

void Search(const struct contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ��˵�����\n");
	scanf("%s", name);
	int ret = Find_By_Name(ps, name);
	if (ret == -1)
	{
		printf("��Ҫ���ҵĳ�Ա������\n");
	}
	else
	{
		printf("%-20s\t%-5s\t%-4s\t%-12s\t%-20s\n", "����", "�Ա�", "����", "�绰", "סַ");
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
	printf("������Ҫ�޸ĵĳ�Ա����\n");
	scanf("%s", name);
	int ret = Find_By_Name(ps, name);
	if (ret == -1)
	{
		printf("��Ҫ�޸ĵĳ�Ա������\n");
	}
	else
	{
		printf("��������Ҫ�޸ĵ������Ա����Ϣ\n");
		printf("����:>");
		scanf("%s", ps->data[ret].name);
		printf("�Ա�:>");
		scanf("%s", ps->data[ret].sex);
		printf("����:>");
		scanf("%d", &(ps->data[ret].age));
		printf("�绰:>");
		scanf("%s", ps->data[ret].tel);
		printf("��ַ:>");
		scanf("%s", ps->data[ret].addr);
		printf("�޸ĳɹ�\n");
	}
}

int Cmp1(const void* e1, const void* e2)   //����������ķ���
{
	int ret = strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);
	return -ret;
}

int Cmp2(const void* e1, const void* e2)      //���Ա�������
{
	int ret = strcmp(((struct PeoInfo*)e1)->sex, ((struct PeoInfo*)e2)->sex);

	return -ret;
}

int Cmp3(const void* e1, const void* e2)      //������������
{
	int ret = strcmp(((struct PeoInfo*)e1)->age, ((struct PeoInfo*)e2)->age);

	return -ret;
}

int Cmp4(const void* e1, const void* e2)      //���绰��������
{
	int ret = strcmp(((struct PeoInfo*)e1)->tel, ((struct PeoInfo*)e2)->tel);

	return -ret;
}

int Cmp5(const void* e1, const void* e2)      //����ַ������
{
	int ret = strcmp(((struct PeoInfo*)e1)->addr, ((struct PeoInfo*)e2)->addr);

	return -ret;
}

void Sort(struct contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int met = 0;
		int i = 0;
		menu2();
		printf("��ѡ����Ҫ����ķ�ʽ\n");
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
		printf("�������!!!\n");
		printf("%-20s\t%-5s\t%-4s\t%-12s\t%-20s\n", "����", "�Ա�", "����", "�绰", "סַ");
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