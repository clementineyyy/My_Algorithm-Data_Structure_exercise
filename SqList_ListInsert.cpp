/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define InitSize 10

struct SqList  
{
	int data[InitSize] = { 1,2,4,5,0,};
	int length;
};

void InitList(SqList* L)
{
	int i = 0;
	L->length = 0;                                               //˳���ǰλ�û���Ҫ�ȳ�ʼ������0
	while (L->data[i++] != 0)
		L->length++;
	printf("%d\n", L->length);
	for (i = 0; i < L->length; i++)
		printf("%d ", L->data[i]);
	printf("\n");
}

bool ListInsert(SqList* L, int i, int e)                         //���ز������͵����ݣ�True or False
{
	if (1 <= i && i <= L->length && L->length < InitSize)        //��׳�ԣ���������ݱ�������ڱ��ķ�Χ֮�ڲ��Ҵ�ʱ˳���û������
	{
		for (int j = L->length; j >= i; j--)                     //�Ѳ����λ�ú����������Ų
			L->data[j] = L->data[j - 1];
		L->data[i - 1] = e;
		L->length++;
		return true;                                             //�������ͷ���ֵ01����true or false�Կ�
	}
	else
		return false;
}

int main()
{
	SqList L;                          //����һ����̬�����˳���
	InitList(&L);
	ListInsert(&L, 3, 3);              //�ڶ���ʵ���Ǳ��򣬵�����ʵ���ǲ��������
	for (int i = 0; i < L.length; i++)
		printf("%d ", L.data[i]);
	printf("\n");
	printf("%d\n", L.length);

	return 0;
}*/