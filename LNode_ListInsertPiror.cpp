/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct LNode
{
	int data;
	struct LNode* next;
};

bool InitList(LNode* L,int *length)
{
	struct LNode* p = L;
	for (int i = 0; i <= *length; i++)
	{
		p->data = i;
		p->next = (LNode*)malloc(sizeof(LNode));
		if (p->next == NULL)
			return false;
		p = p->next;
	}
	p = NULL;
	p = L;
	for (int i = 0; i <= *length; i++)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");

	return true;
}

bool ListInsertPrior(LNode* L, LNode *p, int e, int* length)
{
	struct LNode* s = (LNode*)malloc(sizeof(LNode));
	if (s == NULL)
		return false;
	s->next = p->next;                        //还是把新开辟的结点连接在后面，但是两个结点之间的数值可以互换
	p->next = s;
	s->data = p->data;
	p->data = e;
	(*length)++;
	printf("%d\n", *length);
	p = L;
	for (int i = 0; i < (*length)+1; i++)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");

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
	ListInsertPrior(L, p, e, length);

	return true;
}

int main()
{
	struct LNode* L = (LNode*)malloc(sizeof(LNode));
	int length = 4;
	L->next = NULL;
	InitList(L,&length);
	ListInsert(L, 6, 5, &length);

	return 0;
}*/