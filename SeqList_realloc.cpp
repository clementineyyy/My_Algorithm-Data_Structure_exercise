/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define InitSize 10

struct SeqList
{
	int* data;
	int MaxSize;
	int length;
};

void InitList(SeqList* p)
{
	p->data = (int*)malloc(sizeof(int) * InitSize);
	p->length = 0;
	p->MaxSize = InitSize;
}

void IncreaseSize(SeqList* p, int len)
{
	int *t = (int*)realloc(p->data, InitSize + len);        //�ڶ���ʵ�����µĴ�С����realloc�������пռ���ԭָ�룬�ռ䲻�����ͷ�ԭ�ռ䣬ʧ���򷵻�NULL,�ڴ�й¶
	if (t == NULL)                                          //��ֹ�ڴ�й¶����ԭ��malloc��������Ŀռ��ͷ�
	{
		p->data = NULL;
		return;
	}
	p->data = t;                                            //С��Ұָ�룡����ָ����ָ���ڴ汻free�����ͷŵ��ˣ�����ָ�뱾����,��ָ����ڴ治�Ϸ����п����ڴ��Ѿ���������
	free(t);                                                //ʹ��free����֮������ֶ���ָ����NULL
	t = NULL;
}

int main()
{
	SeqList L;
	InitList(&L);
	IncreaseSize(&L, 5);

	return 0;
}*/