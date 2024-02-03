/*#define _CRT_SECURE_NO_WARNINGS
//用单链表实现队列，满足一系列队列的基本功能
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
		*num = head->value;           //在这里定义的num仅在分支结构里有效
		struct LNode* s = head;
		head = head->next;
		free(s);
		s = NULL;                    //要将弹出的结点手动释放
		(*size)--;
	}
	if (head == NULL)                //说明此时队列为空，head在tail的后面,要手动把tail指针置NULL,不然是野指针
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
	length(size);                             //打印/返回队列长度
	print(head);                              //输出整个队列
	if (isEmpty(size))                        //查询队列是否为空
		printf("Empty!\n");
	else
		printf("not Empty!\n");
	int num = 0;
	head = poll(head, tail, &size, &num);          //弹出队列元素（先进先出）,弹出了就没有了,有返回值是弹出元素的数据,并且是先进先出，不需要传递位置数据
	printf("%d\n", num);
	length(size);
	head = poll(head, tail, &size, &num);         //这里必须返回头指针，否则在poll函数里头指针曾经的结点被释放而头指针没有更新就成了野指针，下游无法改变上游
	printf("%d\n", num);
	length(size);
	print(head);
	int place = 0;
	scanf("%d", &place);                      //设定place从1开始
	if (place > size)
		printf("short queue!\n");
	else
	{
		int ans = get(head, place);           //找到确定位置上的一个数
		printf("%d\n", ans);
	}

	return 0;
}*/