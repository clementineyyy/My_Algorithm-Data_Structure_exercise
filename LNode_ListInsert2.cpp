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
		if (p->next == NULL)                              //ע��������˫�Ⱥţ���Ȼ�ͱ���ֵ��
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
	int j = 1;                         //j��ʾλ�򣬴�1��ʼ
	if (i == 1)                        //����ͷ���ĵ������ڲ���1λ��ʱҪ�任ͷָ�룬����ͷ���ĵ���������Ҫ
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
	struct LNode* L = (LNode*)malloc(sizeof(LNode));           //����һ������ͷ���ĵ�����
	L->next = NULL;
	int length = 1;
	InitList(L, &length);
	ListInsert(L, 3, 5, &length);

	return 0;
}*/