//堆排序2.0：全部都用leapify,速度更快，但是时间复杂度不变
/*#include <stdio.h>


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



int main()
{
	int leapsize = 8;
	int arr[8] = { 3,5,6,7,4,3,5,8 }, i;
	for (i = leapsize-1; i >= 0; i--)
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

	return 0;
}*/