/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct LNode
{
	int data;
	struct LNode* next;
};

bool CreateTail(LNode* L, int* length)                               //���ŵ�ʹ��β�巨����һ��������
{
	struct LNode* r = L, * s;                                        //rָ�����β��㣬������β���ĺ������
	int x = 0;
	scanf("%d", &x);
	while (x != 9999)                                                //ȡ����ֵ����ѭ�����������ƴ����������
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

int main()
{
	struct LNode* L = (LNode*)malloc(sizeof(LNode));                 //����ͷָ���ͷ���
	L->next = NULL;                                                  //��ͷ���ĵ������ʼ�����
	int length = 0;
	CreateTail(L, &length);

	return 0;
}*/