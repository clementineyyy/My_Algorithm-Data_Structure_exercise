/*#define _CRT_SECURE_NO_WARNINGS
//打印两个有序链表相同部分
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
	L = L->next;                                                 //在这里去掉了头结点但是在函数外不生效
	p = L;
	printf("%d\n", length);
	while (p != NULL)
	{
		printf("%d ", p->val);
		p = p->next;
	}
	printf("\n");                                                //注意这里是双引号
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
		p = s;                           //就算传递了链表地址，头插法指针的前进还是要放在插入函数外面，否则就逆序了，是尾插法
		scanf("%d", &x);
	}
	print(L, p, *length);

	return true;
}

void PrintSame(struct LNode* L1, struct LNode* L2)
{
	while (L1 != NULL && L2 != NULL)                  //有一个链表遍历结束就退出循环，后面已经不可能有相同数字了
		if (L1->val < L2->val)                        //谁小谁移动
			L1 = L1->next;
		else if (L1->val > L2->val)
			L2 = L2->next;
		else if (L1->val == L2->val)                 //相等共同移动
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
	PrintSame(L1->next, L2->next);                          //这里去掉了没有数据的头结点

	return 0;
}*/