/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct DNode
{
	int data;
	struct DNode* prior, * next;
};

void InsertElem(DNode* s, DNode* r, int x)
{
	s->data = x;
	s->next = r->next;
	r->next = s;
	if (r->next != NULL)                      //ע��β�巨ÿ�ζ��ǲ�����β�����������
		r->next->prior = s;
	s->prior = r;                                   
}

bool InitList(DNode* D, int* length)
{
	struct DNode* s, * r = D;
	int x = 0;
	scanf("%d", &x);
	while (x != 9999)
	{
		s = (DNode*)malloc(sizeof(DNode));
		if (s == NULL)
			return false;
		InsertElem(s, r, x);
		r = s;                                 //ע��β�巨ÿ��Ҫ�ƶ�β����λ��,����Ҫ���ں�庯�������棬����洢���������˳��ĵ���
		(*length)++;
		scanf("%d", &x);
	}
	printf("%d\n", *length);
	s = D->next;
	for (int i = 0; i < *length; i++)
	{
		printf("%d ", s->data);
		s = s->next;
	}
	printf("\n");
	
	return true;
}

int main()
{
	struct DNode* D = (DNode*)malloc(sizeof(DNode));                   //������˫�����ͷָ���ͷ���
	D->prior = NULL;                                                   //˫�����ͷ����ǰָ��϶�һֱ�ǿ�
	D->next = NULL;
	int length = 0;
	InitList(D, &length);

	return 0;
}*/