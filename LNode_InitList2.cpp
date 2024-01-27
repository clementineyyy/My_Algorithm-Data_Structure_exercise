/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct LNode
{
	int data;
	struct LNode* next;
};

bool InitList(LNode* L)
{
	L = (LNode*)malloc(sizeof(LNode));        //创建头结点
	if (L == NULL)                      //如果内存分配失败
		return false;
	else
	{
		L->next = NULL;
		return true;
	}
}

bool Empty(LNode* L)
{
	return(L->next == NULL);
}

int main()
{
	struct LNode* L;                //创建头指针
	InitList(L);                    //创建一个带头结点的单链表
	Empty(L);

	return 0;
}*/