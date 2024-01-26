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
	for (i = 0; i < L->length; i++)
		printf("%d ", L->data[i]);
	printf("\n");
	printf("%d\n", L->length);
}

bool ListDelete(SqList* L, int i, int* e)
{
	if (1 <= i && i <= L->length && L->length >= 1)
	{
		*e = L->data[i - 1];
		for (int j = i; i < L->length; i++)
			L->data[i - 1] = L->data[i];
		L->length--;
		return true;
	}
	else
		return false;
}

int main()
{
	SqList L;
	InitList(&L);
	int e = 0;
	ListDelete(&L, 3, &e);
	for (int i = 0; i < L.length; i++)
		printf("%d ", L.data[i]);
	printf("\n");
	printf("%d\n", L.length);
	printf("%d\n", e);                      //把被删掉的值带回来

	return 0;
}*/