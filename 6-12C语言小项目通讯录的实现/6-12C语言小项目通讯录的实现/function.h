#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TEL 12
#define MAX_ADDR 30
#define MAX 1000
//声明一个结构体--通讯录成员的信息类型
//包含姓名，性别，年龄，电话，地址
struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
};

//声明一个通讯录类型
struct contact 
{
	struct PeoInfo data[MAX];
	int size;    //记录当前通讯录的成员量
};

//枚举常量
enum function       //通讯录的功能
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


//函数声明
void Ini(struct contact* ps);     //初始化通讯录
void Add(struct contact* ps);     //增加成员
void Show(const struct contact* ps);    //显示通讯录
void Search(const struct contact* ps);   //搜索成员
void Delete(struct contact* ps);       //删除成员
void Modify(struct contact* ps);       //修改成员
void Sort(struct contact* ps);