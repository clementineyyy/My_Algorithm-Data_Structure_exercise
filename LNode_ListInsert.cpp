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
	for (int i = 0; i < 4; i++, (*length)++)
	{
		p->data = i;
		p->next = (LNode*)malloc(sizeof(LNode));
		if (p->next == NULL)                        //����ռ����ʧ��
			return false;
		p = p->next;
	}
	p->data = *length - 1;
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

bool ListInsert(LNode* L, int i, int e,int *length)
{
	if (i > *length||i<1)                      //����ʧ�ܣ���λ���й�
		return false;
	struct LNode* p = L;
	int j = 0;                                //j��0��ʼ��ͷ����ʾ0λ��
	while (p != NULL&&j<i-1)                  //������û�н���֮ǰ�ҵ�����λ�õ�ǰһ���������ǲ���λ�������������ס��м䡢β
	{
		p = p->next;
		j++;
	}
	struct LNode* s = (LNode*)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
	(*length)++;                              //ע����������Ⱥ�˳��
	p = L;
	printf("%d\n", *length);
	for (j = 0; j < *length; j++)
	{
		printf("%d ", p->data);
		p = p->next;
	}

	return true;
}
int main()
{
	struct LNode* L = (LNode*)malloc(sizeof(LNode));             //��ͷ���ĵ�����,�ȶ�̬�����ֹҰָ��
	int length = 1;
	InitList(L, &length);
	ListInsert(L, 4, 5, &length);
	
	return 0;
}*/