/*#define _CRT_SECURE_NO_WARNINGS
//利用前缀和计算数组不同范围内的数据之和
//当出现数组、累加和，考虑前缀和，后续直接相减即可
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 10

void Print(int arr[])
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void Initarr(int arr[])
{
	int maxvalue = 10;
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
		arr[i] = rand() % (maxvalue + 1);
	Print(arr);
}

void PreSum(int arr[],int L,int R)                          //创建前缀和数组
{
	int pre[n];
	pre[0] = arr[0];
	for (int i = 1; i < n; i++)
		pre[i] = pre[i - 1] + arr[i];            //这里不是自己加自己而是加上前面一个数
	Print(pre);
	if (L > 0)
		printf("%d\n", pre[R] - pre[L - 1]);           //注意这里减的是L前面的数，成功抵消相同部分，剩下所求范围(正因为-1所以要分类讨论当从范围0开始的特殊情况）
	else printf("%d\n", pre[R]);
}

int main()
{
	int arr[n];
	srand((unsigned)time(NULL));
	int L, R;
	L = rand() % n;
	R = rand() % n;             //表示下标，不用加一
	printf("%d %d\n", L, R);
	Initarr(arr);
	if (L <= R)
		PreSum(arr, L, R);
	else
		printf("fail!\n");

	return 0;
}*/