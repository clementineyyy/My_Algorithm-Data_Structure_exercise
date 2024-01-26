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
	L->length = 0;                                               //顺序表当前位置还是要先初始化，置0
	while (L->data[i++] != 0)
		L->length++;
	printf("%d\n", L->length);
	for (i = 0; i < L->length; i++)
		printf("%d ", L->data[i]);
	printf("\n");
}

bool ListInsert(SqList* L, int i, int e)                         //返回布尔类型的数据：True or False
{
	if (1 <= i && i <= L->length && L->length < InitSize)        //健壮性：插入的数据表序必须在表长的范围之内并且此时顺序表还没有填满
	{
		for (int j = L->length; j >= i; j--)                     //把插入的位置后面的数往后挪
			L->data[j] = L->data[j - 1];
		L->data[i - 1] = e;
		L->length++;
		return true;                                             //布尔类型返回值01或者true or false皆可
	}
	else
		return false;
}

int main()
{
	SqList L;                          //创建一个静态分配的顺序表
	InitList(&L);
	ListInsert(&L, 3, 3);              //第二个实参是表序，第三个实参是插入的数据
	for (int i = 0; i < L.length; i++)
		printf("%d ", L.data[i]);
	printf("\n");
	printf("%d\n", L.length);

	return 0;
}*/