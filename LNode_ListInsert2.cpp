/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct LNode
{
	int data;
	struct LNode* next;
};

bool InitList(LNode* L, int* length)
{
	struct LNode* p = L;
	p->data = 1;
	for (int i = 2; i < 5; i++,(*length)++)
	{
		p->next = (LNode*)malloc(sizeof(LNode));
		if (p->next == NULL)                              //注意这里是双等号，不然就被赋值了
			return false;
		p = p->next;
		p->data = i;
	}
	p->next = NULL;
	p = L;
	printf("%d\n", *length);
	for (int i = 0; i < *length; i++)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");

	return true;
}

bool ListInsert(LNode* L, int i, int e, int* length)
{
	if (i<1 || i>(*length)+1)
		return false;
	struct LNode* p = L;
	int j = 1;                         //j表示位序，从1开始
	if (i == 1)                        //不带头结点的单链表在插入1位置时要变换头指针，而带头结点的单链表则不需要
	{
		struct LNode* s = (LNode*)malloc(sizeof(LNode));
		s->data = e;
		s->next = L;
		L = s;
		p = L;
		(*length)++;
		printf("%d\n", *length);
		for (j = 0; i < *length; j++)
		{
			printf("%d ", p->data);
			p = p->next;
		}
		printf("\n");

		return true;
	}
	while (p != NULL && j < i-1)
	{
		p = p->next;
		j++;
	}
	struct LNode* s = (LNode*)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
	(*length)++;
	printf("%d\n", *length);
	p = L;
	for (j = 0; j < *length; j++)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");

	return true;
}

int main()
{
	struct LNode* L = (LNode*)malloc(sizeof(LNode));           //创建一个不带头结点的单链表
	L->next = NULL;
	int length = 1;
	InitList(L, &length);
	ListInsert(L, 3, 5, &length);

	return 0;
}*/