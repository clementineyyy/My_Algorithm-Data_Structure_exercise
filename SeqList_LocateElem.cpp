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

void InitList(SeqList* L)
{
	L->data = (int*)malloc(sizeof(int) * InitSize);
	L->MaxSize = InitSize;
	L->length = 0;
	for (int i = 0; i < L->MaxSize; i++,L->length++)
		L->data[i] = i;
	for (int i = 0; i < L->MaxSize; i++)
		printf("%d ", L->data[i]);
	printf("\n");
	printf("%d\n", L->length);
}

void LocateElem(SeqList L, int e)
{
	for (int i = 0; i < L.length; i++)
		if (L.data[i] == e)
		{
			printf("exist!\n");
			return;
		}
	printf("no exist!\n");
}

int main()
{
	SeqList L;
	InitList(&L);
	LocateElem(L, 11);

	return 0;
}*/