//快排1.0版本：数组最末数为num,划分小于等于num的数放左边，大于num的数放右边
/*#include <stdio.h>
#define n 8


void swap(int arr[], int i, int j)
{
	int t = 0;
	t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}


int partition(int arr[], int l, int r)
{
	int less = l - 1;
	while (l < r)                          //注意这里不能是小于等于r,因为排序的是r前面的数，否则数组就越界了
		if (arr[l] <= arr[r])              //直接移动l，而不用新开辟一个空间i来变换下标
			swap(arr, l++, ++less);
		else
			l++;
	swap(arr, less + 1, r);                //必须加上这一行代码，把num和小于等于区的前一个数调换位置，使num在中间，左边是小于等于num，右边是大于num

	return less + 1;
}


void quicksort(int arr[], int l,int r)
{
	if (l < r)
	{
		int more = partition(arr, l, r);
		quicksort(arr, l, more - 1);
		quicksort(arr, more+1, r);
	}
}



int main()
{
	int arr[n] = { 3,5,6,7,4,3,5,8 }, i = 0;
	quicksort(arr, 0, n - 1);
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/