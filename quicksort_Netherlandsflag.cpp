//荷兰国旗问题：无序数组中把大于num的数放左边，等于num的数放中间，大于num的数放右边，时间复杂度O(N),空间复杂度O(1)
/*#include <stdio.h>
#define n 8

void swap(int arr[], int i, int j)
{
	int t = 0;
	t = arr[i];
	arr[i] = arr[j];
	arr[j] = t;
}

int main()
{
	int arr[n] = { 3, 5, 6, 7, 4, 3, 5, 8 }, num = 5;
	int i = 0, less = i - 1, more = n;      //划分成三个区域，less代表小于区域，more代表大于区域，两个区域中间夹逼着等于区域
	while (i < more)                        //一旦数组下标和大于区域重合，结束循环,即等于区域和大于区域重合
	{
		if (arr[i] < num)
			swap(arr, i++, ++less);
		else if (arr[i] == num)
			i++;
		else                                //若数组元素大于num，数组元素和大于区域的前一个数交换，由于位置上是新来的数，所以数组下标不动
			swap(arr, i, --more);
	}
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/