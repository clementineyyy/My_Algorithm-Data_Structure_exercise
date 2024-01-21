//在无序数组中把小于等于num的放左边，大于num的放右边要求时间复杂度O(N),空间复杂度O(1)
/*#include <stdio.h>
#define n 8


void swap(int arr[], int i, int j)   //这里不能用位运算进行交换因为有可能小于等于区域的前一个数就小于等于num，于是自己跟自己交换，地址相同的话位运算会把数值抹成0
{
	int t = 0;
	t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}

int main()
{
	int arr[n] = { 3,5,6,7,4,3,5,8 }, num = 5;
	int i = 0, less = i - 1, more = n - 1;
	while (i<=more)             //循环结束条件是数组遍历完了就结束
	{
		if (arr[i] <= num)      //如果数组元素小于等于num，就把这个数和小于区域的前一个数交换，同时数组下标和小于等于区域都往前移动
			swap(arr, i++, ++less);
		else
			i++;               //如果数组元素大于num，就忽略这个数，数组下标直接加一，（小于等于区域之外的就是大于区域），后面再遇到小于等于num的数直接和大于区域的第一个数（也就是小于等于区域的前一个数）交换，然后数组下标和小于等于区域都往前移动
	}
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/