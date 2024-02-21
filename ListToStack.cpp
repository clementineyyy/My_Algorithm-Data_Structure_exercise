/*#define _CRT_SECURE_NO_WARNINGS
//�õ�������ջ
#include <stdio.h>
#include <stdlib.h>

struct LNode
{
	int value;
	struct LNode* next;
};

struct LNode* push(struct LNode* head, int num)
{
	struct LNode* s = (struct LNode*)malloc(sizeof(struct LNode));
	s->value = num;
	if (head == NULL)
	{
		head = s;
		head->next = NULL;
	}
	else
	{
		s->next = head;
		head = s;
	}

	return head;
}

int length(struct LNode* head)                               //����ֱ����ͷָ����������β�Ӱ������
{
	int size = 0;
	while (head != NULL)
	{
		size++;
		head = head->next;
	}

	return size;
}

struct LNode* pop(struct LNode* head, int* num)
{
	if (head != NULL)
	{
		*num = head->value;
		struct LNode* cur = head;
		head = head->next;
		free(cur);
		cur = NULL;
	}

	return head;
}

int seek(struct LNode* head, int place)                    //����ֱ����ͷָ����������β�Ӱ������
{
	int i = 1;
	while (head != NULL && i < place)
	{
		head = head->next;
		i++;
	}

	return head->value;
}

void print(struct LNode* head)
{
	while (head != NULL)                                  //����ֱ����ͷָ����������β�Ӱ������
	{
		printf("%d ", head->value);
		head = head->next;
	}
	printf("\n");
}
int main()
{
	struct LNode* head = NULL;                           //ջֻ��Ҫͷָ��Ϳ����ˣ�����Ҫβָ��
	head = push(head, 1);                                //����ջ�����з���ֵ������ͷָ��
	head = push(head, 2);
	head = push(head, 3);
	print(head);
	int size = length(head);
	printf("%d\n", size);
	int num = NULL;
	head = pop(head, &num);
	printf("%d\n", num);
	size = length(head);
	printf("%d\n", size);
	int ans = seek(head, 2);
	printf("%d\n", ans);
	print(head);

	return 0;
}*/