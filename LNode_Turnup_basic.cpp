/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct LNode
{
	int data;
	struct LNode* next;
};

bool CreateTail(LNode* L, int* length)                               //优雅地使用尾插法创建一个单链表
{
	struct LNode* r = L, * s;                                        //r指针代表尾结点，不断在尾结点的后面插入
	int x = 0;
	scanf("%d", &x);
	while (x != 9999)                                                //取特殊值控制循环结束，控制创建链表结束
	{
		s = (LNode*)malloc(sizeof(LNode));
		if (s == NULL)
			return false;
		s->data = x;
		r->next = s;
		r = s;
		(*length)++;
		scanf("%d", &x);
	}
	r->next = NULL;
	s = L->next;
	printf("%d\n", *length);
	for (int i = 0; i < *length; i++)
	{
		printf("%d ", s->data);
		s = s->next;
	}
	printf("\n");

	return true;
}

void InsertHead(LNode* h, LNode* s, LNode* p)
{
	s->data = p->data;
	s->next = h->next;
	h->next = s;
}

bool Turnup(LNode* h,LNode *L,int length)
{
	struct LNode* s, * p = L->next;
	for (int i = 0; i < length; i++)
	{
		s = (LNode*)malloc(sizeof(LNode));
		if (s == NULL)
			return false;
		InsertHead(h, s, p);
		p = p->next;
	}
	s = h->next;
	for (int i = 0; i < length; i++)
	{
		printf("%d ", s->data);
		s = s->next;
	}
	printf("\n");

	return true;
}

int main()
{
	struct LNode* L = (LNode*)malloc(sizeof(LNode));                 //创建头指针和头结点
	L->next = NULL;                                                  //带头结点的单链表初始化完毕
	int length = 0;
	CreateTail(L, &length);
	struct LNode* h = (LNode*)malloc(sizeof(LNode));
	h->next = NULL;
	Turnup(h,L, length);                                             //链表的逆置：创建两个链表，一个用尾插法（顺序），一个用头插法（逆序）

	return 0;
}*/