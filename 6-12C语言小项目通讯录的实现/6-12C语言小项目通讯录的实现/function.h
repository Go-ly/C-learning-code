#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TEL 12
#define MAX_ADDR 30
#define MAX 1000
//����һ���ṹ��--ͨѶ¼��Ա����Ϣ����
//�����������Ա����䣬�绰����ַ
struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
};

//����һ��ͨѶ¼����
struct contact 
{
	struct PeoInfo data[MAX];
	int size;    //��¼��ǰͨѶ¼�ĳ�Ա��
};

//ö�ٳ���
enum function       //ͨѶ¼�Ĺ���
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

enum met
{
	NAME = 1,
	SEX = 2,
	AGE = 3,
	TEL = 4,
	ADDR = 5
};


//��������
void Ini(struct contact* ps);     //��ʼ��ͨѶ¼
void Add(struct contact* ps);     //���ӳ�Ա
void Show(const struct contact* ps);    //��ʾͨѶ¼
void Search(const struct contact* ps);   //������Ա
void Delete(struct contact* ps);       //ɾ����Ա
void Modify(struct contact* ps);       //�޸ĳ�Ա
void Sort(struct contact* ps);