/*#define _CRT_SECURE_NO_WARNINGS
//三指针反转双链表，不是简单逆序就行了，是两个指针都要逆序
#include <stdio.h>
#include <stdlib.h>

struct DNode
{
	int value;
	struct DNode* last;
	struct DNode* next;
};

void print(struct DNode* head, int length)
{
	struct DNode* cur = head;
	printf("%d\n", length);
	for (int i = 0; i < length; i++)
	{
		printf("%d ", cur->value);
		cur = cur->next;
	}
	printf("\n");
}

int  Create(struct DNode* head)
{
	head->value = 0;
	head->next = head->last = NULL;
	int length = 0;
	struct DNode* cur = head;
	scanf("%d", &length);
	for (int i = 1; i < length; i++)
	{
		struct DNode* s = (struct DNode*)malloc(sizeof(struct DNode));
		if (s == NULL)
		{
			printf("动态空间分配失败!\n");
			continue;
		}
		s->value = i;
		s->last = cur;
		s->next = cur->next;
		cur->next = s;                           //前一个结点的next指针也要刷新！！
		cur = s;
	}
	print(head, length);

	return length;
}

void Reverse(struct DNode* head)        //思路完全仿照单链表逆置
{
	struct DNode* pre, * cur;
	pre = cur = NULL;
	while (head != NULL)
	{
		pre = head->next;
		head->next = head->last;
		head->last = pre;
		cur = head;                   //用cur指针是为了记住前一个结点的位置，便于最后返回值，否则就找不到了
		head = pre;
	}
	head = cur;
}

int main()
{
	struct DNode* head = (struct DNode*)malloc(sizeof(struct DNode));
	int length = Create(head);
	if (length == 0)
		printf("the list is empty!\n");
	else if (length == 1)
		printf("the list is only one!\n");
	else
	{
		Reverse(head);                //必须有返回值！！！！失败！！！！否则head没有改变！！不能通过改变形参的值来改变实参的值
		print(head, length);
	}

	return 0;
}*/