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
	for (i=0; i < L->length; i++)                                //这里i还是要初始化因为上面的计数循环中i的大小已经不是0了，已经跑走了
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
	GetElem(&L, 3);                         //静态分配按位查找

	return 0;
}*/