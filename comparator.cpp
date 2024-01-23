//比较器应用在系统提供的库函数中，逆序顺序互换
//负数：先返回第一个实参；正数：先返回第二个实参；0：随便返回哪一个
/*include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n = 0;

int comparator(const void* a, const void* b)      //形参类型是常变量空类型
{
	return *(int*)a - *(int*)b;                  //顺序排序：递增；而且要先转化为指针类型再取内容
}


int comparator(const void* a, const void* b)
{
	return *(int*)b - *(int*)a;                 //逆序排序：递减
}

int* generaterandomarray()
{
	srand((unsigned)time(NULL));
	n = rand() % 10 + 1;
	int* p = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		p[i] = rand() % 11;
	for (int i = 0; i < n; i++)
		printf("%d ", p[i]);
	printf("\n");

	return p;
}


int main()
{
	int* arr = generaterandomarray();
	qsort(arr, n, sizeof(int), comparator);              //注意调用排序函数实参传递的格式和顺序
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/
