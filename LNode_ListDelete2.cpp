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
	for (int i = 0; i <= length; i++)
	{
		p->data = i;
		p->next = (LNode*)malloc(sizeof(LNode));
		if (p->next == NULL)
			return false;
		p = p->next;
	}
	p = NULL;
	p = L;
	for (int i = 0; i <= length; i++)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");

	return true;
}

int LNodeDelete(LNode* L, LNode* p, int* e, int* length)
{
	LNode* p1 = p->next;
	*e = p->data;                                  //相当于把后面一个结点移到前面来然后删除后面的结点
	p->data = p1->data;
	p->next = p1->next;
	free(p1);
	p1 = NULL;
	(*length)--;
	p = L;
	printf("%d\n", *length);
	for (int i = 0; i <= *length; i++)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");

	return *e;
}

void ListDelete(LNode* L, int i, int* e, int* length)
{
	if (i<1 || i>*length)
		return;
	struct LNode* p = L;
	int j = 0;
	while (p != NULL && j < i - 1)
	{
		p = p->next;
		j++;
	}
	p = p->next;
	printf("%d\n", LNodeDelete(L, p, e, length));                  //对指定结点的删除函数不能处理删除尾结点的情况，因为找不到前一个结点（是未知的）
}

int main()
{
	struct LNode* L = (LNode*)malloc(sizeof(LNode));
	int length = 4, e = 0;
	L->next = NULL;
	InitList(L, length);
	ListDelete(L, 3, &e, &length);

	return 0;
}*/