/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n = 0;

int maxbit(int arr[])
{
	int maxi = 0, i = 0, digit = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] > arr[maxi])
			maxi = i;
	int max = arr[maxi];
	while (max > 0)
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
	for (int j = 0; j < digit; j++)
	{
		int count[10] = { 0 };                                  //创建十个桶，因为十进制只有十个字母0到9
		for (int i = 0; i < n; i++)
			count[getdigit(arr[i], j)]++;                      //每次循环在不同的位数，把数字放进下标和位数相等的桶里
		for (int i = 0; i < 10; i++)
			printf("%d ", count[i]);
		printf("\n");
		for (int i = 1; i < 10; i++)
			count[i] += count[i - 1];                          //计算前缀和，小于等于下标的数有多少个
		int* help = (int*)malloc(sizeof(int) * n);
		for (int i = n - 1; i >= 0; i--)
		{
			help[count[getdigit(arr[i], j)] - 1] = arr[i];     //辅助数组把数从桶里拿出来，后进后出，桶里还有多少个数字要减减
			count[getdigit(arr[i], j)]--;
		}
		for (int i = 0; i < n; i++)
			arr[i] = help[i];                                  //最后再把数放回原数组，进入下一个循环比较下一个位数
	}
}

int* generaterandomarray(int maxsize, int maxvalue)
{
	srand((unsigned)time(NULL));
	n = rand() % maxsize + 1;
	int* p = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
		p[i] = rand() % (maxvalue + 1);
	for (int i = 0; i < n; i++)
		printf("%d ", p[i]);
	printf("\n");

	return p;
}

int main()
{
	int maxsize = 10, maxvalue = 100;
	int* arr = generaterandomarray(maxsize, maxvalue);
	radixsort(arr, maxbit(arr));
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}*/