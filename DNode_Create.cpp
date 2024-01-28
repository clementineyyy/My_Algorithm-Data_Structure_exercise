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
	if (r->next != NULL)                      //注意尾插法每次都是插入在尾结点的特殊情况
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
		r = s;                                 //注意尾插法每次要移动尾结点的位置,而且要放在后插函数的外面，否则存储结果是输入顺序的倒序
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
	struct DNode* D = (DNode*)malloc(sizeof(DNode));                   //创建了双链表的头指针和头结点
	D->prior = NULL;                                                   //双链表的头结点的前指针肯定一直是空
	D->next = NULL;
	int length = 0;
	InitList(D, &length);

	return 0;
}*/