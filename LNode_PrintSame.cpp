/*#define _CRT_SECURE_NO_WARNINGS
//��ӡ��������������ͬ����
#include <stdio.h>
#include <stdlib.h>

struct LNode
{
	int val;
	struct LNode* next;
};

void Insert(struct LNode* p, struct LNode* s, int* length,int x)
{
	s->val = x;
	s->next = p->next;
	p->next = s;
	(*length)++;
}

void print(struct LNode* L, struct LNode* p, int length)
{
	L = L->next;                                                 //������ȥ����ͷ��㵫���ں����ⲻ��Ч
	p = L;
	printf("%d\n", length);
	while (p != NULL)
	{
		printf("%d ", p->val);
		p = p->next;
	}
	printf("\n");                                                //ע��������˫����
}

bool InitList(struct LNode* L, int* length)
{
	struct LNode* s = NULL, * p = L;
	int x = 0;
	scanf("%d", &x);
	while (x!=9999)
	{
		s = (struct LNode*)malloc(sizeof(struct LNode));
		if (s == NULL)
			return false;
		Insert(p, s, length,x);
		p = s;                           //���㴫���������ַ��ͷ�巨ָ���ǰ������Ҫ���ڲ��뺯�����棬����������ˣ���β�巨
		scanf("%d", &x);
	}
	print(L, p, *length);

	return true;
}

void PrintSame(struct LNode* L1, struct LNode* L2)
{
	while (L1 != NULL && L2 != NULL)                  //��һ����������������˳�ѭ���������Ѿ�����������ͬ������
		if (L1->val < L2->val)                        //˭С˭�ƶ�
			L1 = L1->next;
		else if (L1->val > L2->val)
			L2 = L2->next;
		else if (L1->val == L2->val)                 //��ȹ�ͬ�ƶ�
		{
			printf("%d ", L1->val);
			L1 = L1->next;
			L2 = L2->next;
		}
}

int main()
{
	struct LNode* L1 = (struct LNode*)malloc(sizeof(struct LNode)), * L2 = (struct LNode*)malloc(sizeof(struct LNode));
	L1->next = L2->next = NULL;
	int length1 = 0, length2 = 0;
	InitList(L1, &length1);
	InitList(L2, &length2);
	PrintSame(L1->next, L2->next);                          //����ȥ����û�����ݵ�ͷ���

	return 0;
}*/