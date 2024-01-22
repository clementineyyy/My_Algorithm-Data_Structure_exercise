//堆排序，同时运用两个重要堆结构：heapinsert和heapify,但是时间会慢一点
/*#include <stdio.h>
#define n 8

int heapsize = n;


void swap(int arr[], int i, int j)
{
	int t = 0;
	t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}


void heapinsert(int arr[], int index)
{
	while (arr[index] > arr[(index - 1) / 2])
	{
		swap(arr, index, (index - 1) / 2);
		index = (index - 1) / 2;
	}
}


void heapify(int arr[], int index, int heapsize)
{
	int left = index * 2 + 1;
	while (left < heapsize)
	{
		int largest = arr[left] < arr[left + 1] && (left + 1 < heapsize) ? left + 1 : left;
		largest = arr[largest] < arr[index] ? index : largest;
		if (largest == index)
			break;
		swap(arr, largest, index);
		index = largest;
		left = index * 2 + 1;
	}
}

int main()
{
	int arr[n] = { 3,6,5,7,4,3,5,8 }, i;
	for (i = 0; i < heapsize; i++)
		heapinsert(arr, i);
	while (heapsize > 0)                 //一个循环两个步骤：先把最顶上的最大数换下来让他脱出堆，再把剩下的数重新堆化
	{
		swap(arr, 0, --heapsize);
		heapify(arr, 0, heapsize);
	}
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/
