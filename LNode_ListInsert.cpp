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
		if (p->next == NULL)                        //如果空间分配失败
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
	if (i > *length||i<1)                      //插入失败，与位序有关
		return false;
	struct LNode* p = L;
	int j = 0;                                //j从0开始，头结点表示0位序
	while (p != NULL&&j<i-1)                  //在链表没有结束之前找到插入位置的前一个数，考虑插入位序的三种情况，首、中间、尾
	{
		p = p->next;
		j++;
	}
	struct LNode* s = (LNode*)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
	(*length)++;                              //注意运算符的先后顺序
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
	struct LNode* L = (LNode*)malloc(sizeof(LNode));             //带头结点的单链表,先动态分配防止野指针
	int length = 1;
	InitList(L, &length);
	ListInsert(L, 4, 5, &length);
	
	return 0;
}*/