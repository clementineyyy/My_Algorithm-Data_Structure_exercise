/*#define _CRT_SECURE_NO_WARNINGS
//用双链表建立双队列，可以从头指针进出或者从尾指针进出，如果用单链表的话尾指针弹出找不到前一个结点
#include <stdio.h>
#include <stdlib.h>

struct DNode
{
	int value;
	struct DNode* last;
	struct DNode* next;
};

struct DNode* pushhead(struct DNode* head, struct DNode* tail,int num)
{
	struct DNode* s = (struct DNode*)malloc(sizeof(struct DNode));
	s->value = num;
	if (head == NULL)
	{
		head = tail = s;
		s->last = s->next = NULL;
	}
	else
	{
		head->last = s;
		s->next = head;
		s->last = NULL;
		head = s;
	}

	return head;
}

struct DNode* pushtail(struct DNode* head, struct DNode* tail, int num)
{
	struct DNode* s = (struct DNode*)malloc(sizeof(struct DNode));
	s->value = num;
	if (tail==NULL)
	{
		head = tail = s;
		s->last = s->next = NULL;
	}
	else
	{
		tail->next = s;
		s->last = tail;
		s->next = NULL;
		tail = s;
	}

	return tail;
}

void print(struct DNode* head)
{
	while (head != NULL)
	{
		printf("%d ", head->value);
		head = head->next;
	}
	printf("\n");
}

int length(struct DNode* head)
{
	int size = 0;
	while (head != NULL)
	{
		size++;
		head = head->next;
	}

	return size;
}

struct DNode* pollhead(struct DNode* head, struct DNode* tail, int* num,int *size)
{
	if (head == NULL)
		return head;
	(*size)--;
	*num = head->value;
	if (head == tail)
	{
		head = tail = NULL;                   //这里必须先一步把头指针和尾指针置NULL,否则按照下面的逻辑头指针先到NULL后没有前指针
	}
	else
	{
		head = head->next;
		head->last = NULL;                    //这样就无法访问前一个结点了
	}

	return head;
}

struct DNode* polltail(struct DNode* head, struct DNode* tail, int* num, int* size)
{
	if (head == NULL)
		return tail;
	(*size)--;
	*num = tail->value;
	if (head == tail)
		head = tail = NULL;
	else
	{
		tail = tail->last;
		tail->next = NULL;
	}

	return tail;
}

int main()
{
	struct DNode* head, * tail;
	head = tail = NULL;
	if (head == NULL)
		tail = head = pushhead(head, tail, 1);
	head = pushhead(head, tail, 2);
	head = pushhead(head, tail, 3);
	tail = pushtail(head, tail, 4);
	tail = pushtail(head, tail, 5);
	tail = pushtail(head, tail, 6);
	print(head);
	int size = length(head);
	printf("%d\n", size);
	int num = 0;
	head = pollhead(head, tail, &num, &size);
	printf("%d %d\n", num, size);
	print(head);
	tail = polltail(head, tail, &num, &size);
	printf("%d %d\n", num, size);
	print(head);

	return 0;
}*/