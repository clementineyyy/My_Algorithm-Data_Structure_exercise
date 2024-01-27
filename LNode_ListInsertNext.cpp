/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct LNode
{
	int data;
	struct LNode* next;

};

bool InitList(LNode* L, int length)
{
	struct LNode* p = L;
	p->data = 0;
	for (int i = 1; i < length; i++)
	{
		p->next = (LNode*)malloc(sizeof(LNode));
		if (p->next == NULL)
			return false;
		p = p->next;
		p->data = i;
	}
	p->next = NULL;
	p = L;
	for (int i = 0; i < length; i++)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");

	return true;
}

bool ListInsertNext(LNode* p, int e, int* length)
{
	struct LNode* s = (LNode*)malloc(sizeof(LNode));
	if (s == NULL)
		return false;
	s->data = e;
	s->next = p->next;
	p->next = s;
	(*length)++;
	printf("%d\n", *length);

	return true;
}

bool ListInsert(LNode* L, int i, int e, int* length)
{
	if (i<1 || i>*length)
		return false;
	struct LNode* p = L;
	int j = 0;
	while (p != NULL && j < i - 1)
	{
		p = p->next;
		j++;
	}
	ListInsertNext(p, e, length);                         //在指定结点后面插入的函数
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
	struct LNode* L = (LNode*)malloc(sizeof(LNode));
	int length = 5;                                      //表长/长度包括头结点
	InitList(L, length);
	ListInsert(L, 6, 5, &length);

	return 0;
}*/