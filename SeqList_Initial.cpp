/*#define _CRT_SECURE_NO_WARNINGS           //�пո�ģ�ʹscanf�������У����Ǳ��������
//��̬���䣺����һ���ṹ�壬��Ա��ָ�������˳���������˳���ǰ��
#include <stdio.h>
#include <stdlib.h>
#define InitSize 10


struct SeqList
{
	int* data;                  //˳������ʼ��ַ
	int MaxSize;
	int length;
};

void InitList(SeqList *L)                              //��ʾ�ṹ��ָ��ĳ�ԱҪ�ü�ͷ
{
	L->data = (int*)malloc(sizeof(int) * InitSize);               //�洢�ռ䶯̬���亯��
	L->length = 0;
	L->MaxSize = InitSize;
}

void IncreaseSize(SeqList* L, int len)
{
	int* t = L->data;
	L->data = (int*)malloc(sizeof(int) * (InitSize + len));
	for (int i = 0; i < InitSize; i++)
		L->data[i] = t[i];
	L->MaxSize = InitSize + len;
	free(t);                                      //���õĿռ�Ҫ��ʱ�ͷŵ�
	t=NULL;
}

int main()
{
	SeqList L;                //�����ṹ�����������ʲô����
	InitList(&L);             //ʵ���ǽṹ�����͵ĵ�ַ���β�ҲҪ�ǽṹ�����͵�ָ��
	for (int i = 0; i < L.MaxSize; i++)                //��ʾ��ͨ�ṹ������ĳ�ԱҪ�õ��
		L.data[i] = i;
	L.length = L.MaxSize;
	for (int i = 0; i < L.MaxSize; i++)
		printf("%d ", L.data[i]);
	printf("\n");
	int len = 0;
	scanf("%d", &len);
	IncreaseSize(&L, len);

	return 0;
}*/