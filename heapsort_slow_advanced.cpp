/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int heapsize = 0;


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

int* generaterandomarray(int maxsize, int maxvalue)
{
	srand((unsigned)time(NULL));
	heapsize = rand() % (maxsize + 1);
	int* p = (int*)malloc(sizeof(int) * heapsize);
	for (int i = 0; i < heapsize; i++)
		p[i] = rand() % (maxvalue + 1);
	for (int i = 0; i < heapsize; i++)
		printf("%d ", p[i]);
	printf("\n");

	return p;
}

int main()
{
	int* arr, i, maxsize = 10, maxvalue = 10;
	arr = generaterandomarray(maxsize, maxvalue);
	if (heapsize == 0)
		printf("the array do not exist!\n");
	else
	{
		for (i = 0; i < heapsize; i++)
			heapinsert(arr, i);
		int n = heapsize;
		while (heapsize > 0)                 //一个循环两个步骤：先把最顶上的最大数换下来让他脱出堆，再把剩下的数重新堆化
		{
			swap(arr, 0, --heapsize);
			heapify(arr, 0, heapsize);
		}
		for (i = 0; i < n; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}

	return 0;
}*/