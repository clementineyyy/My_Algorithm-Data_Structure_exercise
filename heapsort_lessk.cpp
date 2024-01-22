//在一个几乎有序的数组中，每一个数调换的位置不超过k，用合适的算法使数组有序
#include <stdio.h>
#define n 8

int k = 5;                                           //慎用全局变量，特别实在调用的函数里面要注意（同名变量），heapsize变量还是不能省

void swap(int arr[], int i, int j)
{
	int t = 0;
	t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}


void heapinsert(int arr[], int index)
{
	while (arr[index] < arr[(index - 1) / 2])
	{
		swap(arr, index, (index - 1) / 2);
		index = (index - 1) / 2;
	}
}


void heapify(int arr[], int index,int heapsize)
{
	int left = index * 2 + 1;
	while (left < heapsize)                 
	{
		int smallest = arr[left] > arr[left + 1] && (left + 1) < heapsize ? left + 1 : left;
		smallest = arr[smallest] > arr[index] ? index : smallest;
		if (smallest == index)
			break;
		swap(arr, index, smallest);
		index = smallest;
		left = index * 2 + 1;
	}
}


int main()
{
	int arr[n] = { 3,5,3,4,6,5,7,8 };
	int priority_queue[6];                        //因为C语言库函数里面没有优先级队列函数，所以只好自己建一个小根堆
	for (int i = 0; i <= k; i++)
		priority_queue[i] = arr[i];               //先把前k+1个数放进优先级对列里面，因为数组元素只能移动k个距离，所以最小值必在该范围
	for (int i = 0; i <= k; i++)
		heapinsert(priority_queue, i);            //小根堆排序，顶结点是最小值
	for (int i = 0; i <= k; i++)
		printf("%d ", priority_queue[i]);
	printf("\n");
	for (int i = k + 1; i < n; i++)
	{
		arr[i - k - 1] = priority_queue[0];       //依次弹出小根堆的最小值放入原数组中
		priority_queue[0] = arr[i];               //让数组中的剩下数一次补足小根堆
		heapify(priority_queue, 0, k);            //继续堆化找出最小值
	}
	for (int i = 0; i <= k; i++)
		printf("%d ", priority_queue[i]);
	printf("\n");
	int heapsize = k + 1;
	while(heapsize>0)
	{
		arr[n-heapsize] = priority_queue[0];
		swap(priority_queue, 0, --heapsize);      //减小堆的范围
		heapify(priority_queue, 0, heapsize);
	}
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}