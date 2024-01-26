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
	int *t = (int*)realloc(p->data, InitSize + len);        //第二个实参是新的大小，且realloc函数若有空间则原指针，空间不够则释放原空间，失败则返回NULL,内存泄露
	if (t == NULL)                                          //防止内存泄露，将原来malloc函数申请的空间释放
	{
		p->data = NULL;
		return;
	}
	p->data = t;                                            //小心野指针！！！指针所指的内存被free函数释放掉了，但是指针本身还在,且指向的内存不合法且有可能内存已经分配走了
	free(t);                                                //使用free函数之后最好手动把指针置NULL
	t = NULL;
}

int main()
{
	SeqList L;
	InitList(&L);
	IncreaseSize(&L, 5);

	return 0;
}*/