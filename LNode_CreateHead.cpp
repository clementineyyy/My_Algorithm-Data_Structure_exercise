/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct LNode
{
	int data;
	struct LNode* next;
};

void InsertNext(LNode* L,LNode* s,int x)                    //ͷ�巨����������+��һ����㣨ͷ���)�������ĺ���
{
	s->data = x;
	s->next = L->next;
	L->next = s;
}

bool CreateHead(LNode* L, int* length)
{
	struct LNode * s;
	int x = 0;
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (LNode*)malloc(sizeof(LNode));
		if (s == NULL)
			return false;
		InsertNext(L, s, x);
		(*length)++;
		scanf("%d", &x);
	}
	printf("%d\n", *length);
	s = L->next;
	for (int i = 0; i < *length; i++)                        //ͷ�巨�ص㣺������������ݵ�˳��������˳���������˿�������������
	{
		printf("%d ", s->data);
		s = s->next;
	}
	printf("\n");

	return true;
}

int main()
{
	struct LNode* L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;
	int length = 0;
	CreateHead(L, &length);

	return 0;
}*/