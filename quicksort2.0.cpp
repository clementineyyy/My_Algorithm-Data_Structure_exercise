//快排2.0：无序数组最后一个元素是num,大于num的数在左边，等于num的数在中间，大于num的数在右边
/*#include <stdio.h>
#define n 8

int less = 0, more = 0;                 //由于函数只能返回一个值，所以用两个全局变量来让这个值在其他函数中依然有效


void swap(int arr[], int i, int j)
{
	int t = 0;
	t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}


void partition(int arr[], int l, int r)     //划分区间
{
	less = l - 1, more = r;                 //大于区域是r-1+1
	while (l<more)                          //结束循环条件是数组下标不可以和大于区域重合
	{
		if (arr[l] < arr[r])
			swap(arr, l++, ++less);
		else if (arr[l] == arr[r])
			l++;
		else
			swap(arr, l, --more);
	}
	swap(arr, more, r);                     //依然必须要大于区域第一个数和num交换位置让数组中间全都是等于num的数
}

void quicksort(int arr[], int l, int r)
{
	if (l < r)
	{
		partition(arr, l, r);
		quicksort(arr, l, less);
		quicksort(arr, more, r);
	}
}

int main()
{
	int arr[n] = { 3,5,6,7,4,3,5,8 };
	quicksort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/





//快排3.0：无序数组中随机取一个数是num,和最后一个数交换位置，然后使小于num的数在左边，等于num的数在中间,大于num的数在右边
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 8


int less = 0, more = 0;


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
		int num = l+rand() % (r - l + 1);              //num是选中的下标,注意取随机数前面一定要加上L,因为数组分成n段后不一定是从0开始！！！！！
		swap(arr, num, r);
		partition(arr, l, r);
		quicksort(arr, l, less);
		quicksort(arr, more, r);
	}
}


int main()
{
	int arr[n] = { 3,5,6,7,4,3,5,8 };
	quicksort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/