/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int len = 0;                                         //干脆用一个全局变量直接得到数组长度（固定）

void swap(int arr[], int i, int j)
{
	arr[i] = arr[i] ^ arr[j];
	arr[j] = arr[i] ^ arr[j];
	arr[i] = arr[i] ^ arr[j];
}

void select(int arr[], int len)
{
	int i, j, min = 0, imin = 0;
	for (i = 0; i < len - 1; i++)
	{
		imin = i;
		min = arr[i];
		for (j = i+1; j < len; j++)
			if (min > arr[j])
			{
				imin = j;
				min = arr[j];
			}
		if (i != imin)
			swap(arr, i, imin);
	}
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


void bubble(int arr[], int len)
{
	int i, j;
	for (i = 0; i < len - 1; i++)
		for (j = 0; j < len - 1 - i; j++)
			if (arr[j] > arr[j + 1])
				swap(arr, j, j + 1);
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


void insert(int arr[], int len)
{
	int i, j;
	for (i = 1; i < len; i++)
		for (j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--)
			swap(arr, j, j + 1);
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int* generaterandomarray(int maxsize, int maxvalue)               //定义一个返回指针值的函数，避免指针没有初始化的情况
{
	srand((unsigned)time(NULL));                                  //需要使用time函数库和stdlib函数库，所以产生的随机数和时间相关，在同一秒内产生的随机数是相同的
	len= (int)(rand() % (maxsize + 1));                           //数组长度最大值为maxsize,产生0-maxsize的随机数，maxsze+1会被整除即舍去
    int *p = (int *)malloc(sizeof(int) * len);                    //给指针赋上这个分配的内寸空间的首地址，使用动态内存分配函数,里面是字节数，要强制类型转换
	int i;
	for (i = 0; i < len; i++)
		p[i] = (int)rand() % (maxvalue + 1);                      //把指针看作数组首地址，对每一个数组元素赋值
	for (i = 0; i < len; i++)
		printf("%d ", p[i]);
	printf("\n");

	return p;
}

int compare(int str1[], int str2[],int len)
{
	int i;
	for(i=0;i<len;i++)
		if (str1[i] != str2[i])
		{
			return 0;
			break;
		}
	return 1;
}


int main()
{
	int testtime = 1000000, maxsize = 10, maxvalue = 500000, i;   //测试testtime次，数组最大长度为maxsize,数组元素最大值为maxvalue
	for (i = 0; i < testtime; i++)
	{
		int *arr1=generaterandomarray(maxsize, maxvalue);         //用指针代替数组，因为数组必须是固定长度
		int *arr2 = arr1;
		int *arr3 = arr2;
		if (arr1 == NULL || len < 2)                              //排除掉数组为空或者数组元素个数为1，即不用排序的情况
			continue;
		select(arr1, len);
		bubble(arr2, len);
		insert(arr3, len);
		if (compare(arr1, arr2, len))
			printf("%d select and bubble right\n", i);
		if (compare(arr1, arr3, len))
			printf("%d select and insert right\n", i);
	}

	return 0;
}*/