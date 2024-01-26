/*#define _CRT_SECURE_NO_WARNINGS           //有空格的，使scanf函数可行，但是必须在最顶端
//动态分配：建立一个结构体，成员有指针变量、顺序表最大表长、顺序表当前表长
#include <stdio.h>
#include <stdlib.h>
#define InitSize 10


struct SeqList
{
	int* data;                  //顺序表的起始地址
	int MaxSize;
	int length;
};

void InitList(SeqList *L)                              //表示结构体指针的成员要用箭头
{
	L->data = (int*)malloc(sizeof(int) * InitSize);               //存储空间动态分配函数
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
	free(t);                                      //不用的空间要及时释放掉
	t=NULL;
}

int main()
{
	SeqList L;                //单个结构体变量，不是什么数组
	InitList(&L);             //实参是结构体类型的地址，形参也要是结构体类型的指针
	for (int i = 0; i < L.MaxSize; i++)                //表示普通结构体变量的成员要用点号
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