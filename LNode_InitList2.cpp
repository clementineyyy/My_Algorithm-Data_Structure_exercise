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
	L = (LNode*)malloc(sizeof(LNode));        //����ͷ���
	if (L == NULL)                      //����ڴ����ʧ��
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
	struct LNode* L;                //����ͷָ��
	InitList(L);                    //����һ����ͷ���ĵ�����
	Empty(L);

	return 0;
}*/