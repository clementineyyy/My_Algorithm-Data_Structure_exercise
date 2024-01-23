//基数排序：找到最大的数有多少位（十进制），然后从个位数开始依次从左往右把数放进桶里（提前准备好10个桶，相当于数组，计数），再利用前缀和得到个数
//在从右往左把数从桶里拿出来，（这里桶是队列，先进先出，后进后出），循环每一个位置
/*#include <stdio.h>
#include <stdlib.h>
#define n 5

int maxbit(int arr[])
{
	int maxi = 0, i = 0, digit = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] > arr[maxi])
			maxi = i;
	int max = arr[maxi];
	while (max>0)
	{
		digit++;
		max /= 10;
	}
	printf("%d\n", digit);

	return digit;
}


int getdigit(int num, int j)
{
	if (j == 0)
		return num % 10;
	else if (j == 1)
		return num / 10 % 10;
	else
		return num / 100;
}

void radixsort(int arr[], int digit)
{
	for(int j=0;j<digit;j++)
	{
		int count[10] = { 0 };
		for (int i = 0; i < n; i++)
			count[getdigit(arr[i],j)]++;
		for (int i = 0; i < 10; i++)
			printf("%d ", count[i]);
		printf("\n");
		for (int i = 1; i < 10; i++)
			count[i] += count[i - 1];
		int* help = (int*)malloc(sizeof(int) * n);
		for (int i = n - 1; i >= 0; i--)
		{
			help[count[getdigit(arr[i],j)]-1] = arr[i];
			count[getdigit(arr[i], j)]--;
		}
		for (int i = 0; i < n; i++)
			arr[i] = help[i];
	}
}

int main()
{
	int arr[n] = { 17,13,25,100,72 };
	radixsort(arr, maxbit(arr));
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/