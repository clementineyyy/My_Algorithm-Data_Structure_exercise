/*#define _CRT_SECURE_NO_WARNINGS
//��ָ�뷴ת˫�������Ǽ���������ˣ�������ָ�붼Ҫ����
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
			printf("��̬�ռ����ʧ��!\n");
			continue;
		}
		s->value = i;
		s->last = cur;
		s->next = cur->next;
		cur->next = s;                           //ǰһ������nextָ��ҲҪˢ�£���
		cur = s;
	}
	print(head, length);

	return length;
}

void Reverse(struct DNode* head)        //˼·��ȫ���յ���������
{
	struct DNode* pre, * cur;
	pre = cur = NULL;
	while (head != NULL)
	{
		pre = head->next;
		head->next = head->last;
		head->last = pre;
		cur = head;                   //��curָ����Ϊ�˼�סǰһ������λ�ã�������󷵻�ֵ��������Ҳ�����
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
		Reverse(head);                //�����з���ֵ��������ʧ�ܣ�����������headû�иı䣡������ͨ���ı��βε�ֵ���ı�ʵ�ε�ֵ
		print(head, length);
	}

	return 0;
}*/