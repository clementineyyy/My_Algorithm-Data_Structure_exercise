/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define InitSize 10

struct SqList
{
	int data[InitSize] = { 1,2,3,4,5,0 };
	int length;
};

void InitList(SqList* L)
{
	int i = 0;
	L->length = 0;
	while (L->data[i++] != 0)
		L->length++;
	for (i=0; i < L->length; i++)                                //����i����Ҫ��ʼ����Ϊ����ļ���ѭ����i�Ĵ�С�Ѿ�����0�ˣ��Ѿ�������
		printf("%d ", L->data[i]);
	printf("\n");
	printf("%d\n", L->length);
}

bool GetElem(SqList* L, int i)
{
	if (1 <= i && i <= L->length)
	{
		printf("%d\n", L->data[i - 1]);
		return true;
	}
	else
		return false;
}

int main()
{
	SqList L;
	InitList(&L);
	GetElem(&L, 3);                         //��̬���䰴λ����

	return 0;
}*/