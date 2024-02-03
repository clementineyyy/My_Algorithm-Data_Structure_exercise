/*#define _CRT_SECURE_NO_WARNINGS
//��˫������˫���У����Դ�ͷָ��������ߴ�βָ�����������õ�����Ļ�βָ�뵯���Ҳ���ǰһ�����
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
		head = tail = NULL;                   //���������һ����ͷָ���βָ����NULL,������������߼�ͷָ���ȵ�NULL��û��ǰָ��
	}
	else
	{
		head = head->next;
		head->last = NULL;                    //�������޷�����ǰһ�������
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