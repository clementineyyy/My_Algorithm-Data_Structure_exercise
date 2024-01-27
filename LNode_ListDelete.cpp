/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct LNode
{
	int data;
	struct LNode* next;
};

bool InitList(LNode *L,int *length)
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
	for (int i = 0; i < *length; i++)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");

	return true;
}

int ListDelete(LNode* L, int i, int* e, int* length)
{
	if (i<1 || i>*length)
		return -1;
	struct LNode* p = L;
	int j = 0;
	while (p != NULL && j < i - 1)
	{
		p = p->next;
		j++;
	}
	struct LNode* p1 = p, * p2 = p->next;
	*e = p2->data;
	p1->next = p2->next;
	free(p2);
	p2 = NULL;
	(*length)--;
	printf("%d\n", *length);
	p = L;
	for (j = 0; j <= *length; j++)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");

	return *e;
}

int main()
{
	struct LNode* L = (LNode*)malloc(sizeof(LNode));
	int length = 4, e = 0;
	L->next = NULL;
	InitList(L, &length);
	printf("%d\n", ListDelete(L, 5, &e, &length));

	return 0;
}*/