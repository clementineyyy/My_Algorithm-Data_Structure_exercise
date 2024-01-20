//逆序对问题：如果左边的数比右边的数大，那么就为一对逆序对，打印出所有的逆序对及数量
/*#include <stdio.h>
#include <stdlib.h>
#define n 4


int merge(int arr[], int l, int mid, int r)
{
	int* p = (int*)malloc(sizeof(int) * (r - l + 1));
	int i = 0, j, p1 = l, p2 = mid + 1, sum = 0;
	while (p1 <= mid && p2 <= r)
	{
		for(j = p1; arr[j] > arr[p2] && j <= mid; j++)         //如果只是统计个数的话不用加上循环，直接下标计算即可
		{
			sum++;
			printf("%d %d\n", arr[j], arr[p2]);
		}
		p[i++] = arr[p1] <= arr[p2] ? arr[p1++] : arr[p2++];
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
	if (l >= r)                                     //加上大于等于号防止输入空数组导致栈溢出
		return 0;
	return binary(arr, l, mid) + binary(arr, mid + 1, r) + merge(arr, l, mid, r);
}


int main()
{
	int arr[n] = { 7,5,6,4 };
	printf("%d\n", binary(arr, 0, n - 1));

	return 0;
}*/