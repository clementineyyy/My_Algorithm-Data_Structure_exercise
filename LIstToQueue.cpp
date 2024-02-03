/*#define _CRT_SECURE_NO_WARNINGS
//�õ�����ʵ�ֶ��У�����һϵ�ж��еĻ�������
#include <stdio.h>
#include <stdlib.h>

struct LNode
{
	int value;
	struct LNode* next;
};

struct LNode* CreateQueue(struct LNode* head, struct LNode* tail,int *size)
{
	int num = 0;
	scanf("%d", &num);
	if (num == 9999)
		return head;
	struct LNode* s = (struct LNode*)malloc(sizeof(struct LNode));
	s->value = num;
	s->next = NULL;
	head = tail = s;
	(*size)++;
	scanf("%d", &num);
	while (num != 9999)
	{
		struct LNode* s = (struct LNode*)malloc(sizeof(struct LNode));
		if (s == NULL)
			continue;
		(*size)++;
		s->value = num;
		s->next = NULL;
		tail->next = s;
		tail = s;
		scanf("%d", &num);
	}

	return head;
}

void length(int size)
{
	printf("%d\n", size);
}

void print(struct LNode* head)
{
	struct LNode* cur = head;
	while (cur != NULL)
	{
		printf("%d ", cur->value);
		cur = cur->next;
	}
	printf("\n");
}

bool isEmpty(int size)
{
	return size == 0;
}

struct LNode* poll(struct LNode* head, struct LNode* tail, int* size,int *num)
{
	if (head != NULL)
	{
		*num = head->value;           //�����ﶨ���num���ڷ�֧�ṹ����Ч
		struct LNode* s = head;
		head = head->next;
		free(s);
		s = NULL;                    //Ҫ�������Ľ���ֶ��ͷ�
		(*size)--;
	}
	if (head == NULL)                //˵����ʱ����Ϊ�գ�head��tail�ĺ���,Ҫ�ֶ���tailָ����NULL,��Ȼ��Ұָ��
		tail = NULL;

	return head;
}

int get(struct LNode* head, int place)
{
	struct LNode* cur = head;
	for (int i = 1; i < place; i++)
		cur = cur->next;

	return cur->value;
}

int main()
{
	struct LNode* head, * tail;
	head = tail = NULL;
	int size = 0;
	head = CreateQueue(head, tail, &size);
	length(size);                             //��ӡ/���ض��г���
	print(head);                              //�����������
	if (isEmpty(size))                        //��ѯ�����Ƿ�Ϊ��
		printf("Empty!\n");
	else
		printf("not Empty!\n");
	int num = 0;
	head = poll(head, tail, &size, &num);          //��������Ԫ�أ��Ƚ��ȳ���,�����˾�û����,�з���ֵ�ǵ���Ԫ�ص�����,�������Ƚ��ȳ�������Ҫ����λ������
	printf("%d\n", num);
	length(size);
	head = poll(head, tail, &size, &num);         //������뷵��ͷָ�룬������poll������ͷָ�������Ľ�㱻�ͷŶ�ͷָ��û�и��¾ͳ���Ұָ�룬�����޷��ı�����
	printf("%d\n", num);
	length(size);
	print(head);
	int place = 0;
	scanf("%d", &place);                      //�趨place��1��ʼ
	if (place > size)
		printf("short queue!\n");
	else
	{
		int ans = get(head, place);           //�ҵ�ȷ��λ���ϵ�һ����
		printf("%d\n", ans);
	}

	return 0;
}*/