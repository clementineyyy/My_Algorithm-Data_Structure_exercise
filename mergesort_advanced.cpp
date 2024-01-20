/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n = 0;


void merge(int arr[], int fir, int mid, int end)
{
	int* p = (int*)malloc(sizeof(int) * (end - fir + 1));         //重新开辟一个数组空间存放整体有序的数组
	int i = 0, j, p1 = fir, p2 = mid + 1;
	while (p1 <= mid && p2 <= end)                                //循环条件：两个区间都没有超出
		p[i++] = arr[p1] <= arr[p2] ? arr[p1++] : arr[p2++];
	while (p1 <= mid)                                             //如果右边的区间超出
		p[i++] = arr[p1++];
	while (p2 <= end)                                             //如果左边的区间超出
		p[i++] = arr[p2++];
	for (j = 0; j < i; j++)                                       //最后别忘了把整体有序的数组还给原数组，否则结果就在函数结束后被释放了
		arr[fir + j] = p[j];
}


void binary(int arr[], int fir, int end)
{
	int mid = fir + ((end - fir) >> 1);
	if (fir == end)                            //如果这个区间就只有一个元素，直接返回，但不是返回数值
		return;
	else
	{
		binary(arr, fir, mid);                 //使用二分法把区间分成两段
		binary(arr, mid + 1, end);
		merge(arr, fir, mid, end);             //对分别有序的两段进行整体排序，使整体有序
	}
}


int* generaterandomarray(int maxsize, int maxvalue)
{
	srand((unsigned)time(NULL));
	n = rand() % (maxsize + 1);
	int* p = (int*)malloc(sizeof(int) * n), i;
	for (i = 0; i < n; i++)
		p[i] = rand() % (maxvalue + 1);
	for (i = 0; i < n; i++)
		printf("%d ", p[i]);
	printf("\n");

	return p;
}


int main()
{
	int* arr, i = 0, maxsize = 10, maxvalue = 10;
	arr = generaterandomarray(maxsize, maxvalue);
	if (n == 0)
		printf("the array do not exist!\n");
	else binary(arr, 0, n - 1);
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/