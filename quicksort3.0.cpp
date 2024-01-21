//快排3.0：无序数组中随机取一个数是num,和最后一个数交换位置，然后使小于num的数在左边，等于num的数在中间,大于num的数在右边
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define maxsize 10
#define maxvalue 10


int n = 0, less = 0, more = 0;


int* generaterandomarray()
{
	srand((unsigned)time(NULL));
	n = rand() % (maxsize + 1);
	int* p = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)                       //此处定义的i竟然只在该循环内有效！！！
		p[i] = rand() % (maxvalue + 1);
	for (int i = 0; i < n; i++)
		printf("%d ", p[i]);
	printf("\n");

	return p;
}


void swap(int arr[], int i, int j)
{
	int t = 0;
	t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}

void partition(int arr[], int l, int r)
{
	less = l - 1, more = r;
	while (l < more)
		if (arr[l] < arr[r])
			swap(arr, l++, ++less);
		else if (arr[l] == arr[r])
			l++;
		else
			swap(arr, l, --more);
	swap(arr, more, r);
}

void quicksort(int arr[], int l, int r)
{
	if (l < r)
	{
		int num = l+rand() % (r-l+1);              //num是选中的下标,注意取随机数前面必须加上L!!!!!!!
		swap(arr, num, r);
		partition(arr, l, r);
		quicksort(arr, l, less);
		quicksort(arr, more, r);
	}
}


int main()
{
	int* arr;
	arr = generaterandomarray();
	if (n == 0)
	{
		printf("the array do not exist!\n");
		return 0;
	}
	else
		quicksort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/