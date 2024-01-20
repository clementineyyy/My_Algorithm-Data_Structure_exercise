//小和问题：在一个数组中，每一个数左边比它小的数加起来的和为小和
//转化为每一个数右边有几个数比它大
/*#include <stdio.h>
#include <stdlib.h>
#define n 5


int merge(int arr[], int l, int mid, int r)
{
	int* p = (int*)malloc(sizeof(int) * (r - l + 1));
	int i = 0, j, p1 = l, p2 = mid + 1, sum = 0;
	while (p1 <= mid && p2 <= r)
	{
		sum += arr[p1] < arr[p2] ? (r - p2 + 1) * arr[p1] : 0;          //这一步的转化
		p[i++] = arr[p1] < arr[p2] ? arr[p1++] : arr[p2++];             //必须要排序，不然无法直接得出右边有多少个数比它大,而且这里不能是小于等于号，有可能右边有多个相等的数，必须把这些数先排掉
	}
	while (p1 <= mid)
		p[i++] = arr[p1++];
	while (p2 <= r)
		p[i++] = arr[p2++];
	for (j = 0; j < i; j++)
		arr[l + j] = p[j];

	return sum;
}


int binary(int arr[], int l, int r)
{
	int mid = l + ((r - l) >> 1);
	if (l == r)
		return 0;                                    //注意这里返回值是0不可以是数组元素值，说明单个元素组成的区间没有数比它大
	else
		return (binary(arr, l, mid) + binary(arr, mid + 1, r) + merge(arr, l, mid, r));
}

int main()
{
	int arr[n] = { 1,3,4,2,5 };
	printf("%d\n", binary(arr, 0, n - 1));

	return 0;
}*/