/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct LNode
{
	int data;
	struct LNode* next;
};

LNode *InitList(LNode* head)          //建立一个不带头结点的单链表
{
	head= NULL;                       //头指针置空，防止脏数据
	return head;                      //返回头指针
}

bool Empty(LNode *head)
{
	return (head == NULL);            //条件判断值为0或1
}

int main()
{
	struct LNode *head;               //结构体指针，指向单链表的头指针，所以是结构体类型，注意此处没有创建一个结点，但会报错，因为是野指针
	InitList(head);
	Empty(head);                      //判断单链表是否为空表

	return 0;
}*/