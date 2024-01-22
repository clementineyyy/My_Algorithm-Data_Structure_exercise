/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int leapsize = 0;

void swap(int arr[], int i, int j)
{
	int t = 0;
	t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}


void leapify(int arr[], int index, int leapsize)
{
	int left = index * 2 + 1;
	while (left < leapsize)
	{
		int largest = arr[left] < arr[left + 1] && (left + 1) < leapsize ? left + 1 : left;
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
	leapsize = rand() % (maxsize + 1);
	int* p = (int*)malloc(sizeof(int) * leapsize);
	for (int i = 0; i < leapsize; i++)
		p[i] = rand() % (maxvalue + 1);
	for (int i = 0; i < leapsize; i++)
		printf("%d ", p[i]);
	printf("\n");

	return p;
}

int main()
{
	int* arr, i, maxsize = 10, maxvalue = 10;
	arr = generaterandomarray(maxsize, maxvalue);
	if (leapsize == 0)
		printf("the array do not exist!\n");
	else
	{
		for (i = leapsize - 1; i >= 0; i--)
			leapify(arr, i, leapsize);               //数组元素从后往前堆化，堆化是从上往下的
		int n = leapsize;
		while (leapsize > 0)
		{
			swap(arr, 0, --leapsize);
			leapify(arr, 0, leapsize);
		}
		for (i = 0; i < n; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}

	return 0;
}*/