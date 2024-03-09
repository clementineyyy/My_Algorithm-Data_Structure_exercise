/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void mergesort(int str[], int L, int M, int R)
{
	int p1 = L, p2 = M + 1, i = 0;
	int* help = (int*)malloc(sizeof(int) * (R - L + 1));
	if (str[p1] % 2 == 1)
	{
		while (p1 <= M && p2 <= R)
			help[i++] = str[p1] > str[p2] ? str[p1++] : str[p2++];
		while (p1 <= M)
			help[i++] = str[p1++];
		while (p2 <= R)
			help[i++] = str[p2++];
		for (int j = 0; j < i; j++)
			str[j + L] = help[j];
	}
	else
	{
		while (p1 <= M && p2 <= R)
			help[i++] = str[p1] < str[p2] ? str[p1++] : str[p2++];
		while (p1 <= M)
			help[i++] = str[p1++];
		while (p2 <= R)
			help[i++] = str[p2++];
		for (int j = 0; j < i; j++)
			str[j + L] = help[j];
	}
}

void binary(int str[], int L, int R)
{
	if (L >= R)
		return;
	int M = L + ((R - L) >> 1);
	binary(str, L, M);
	binary(str, M + 1, R);
	mergesort(str, L, M, R);
}


int main()
{
	int n = 0, i = 0, j = 0, k = 0, num = 0;
	scanf("%d", &n);
	int* str1 = (int*)malloc(sizeof(int) * n);
	int* str2 = (int*)malloc(sizeof(int) * n);
	while(k<n)
	{
		scanf("%d", &num);
		if (num % 2 == 1)
			str1[i++] = num;                //用两个数组分别来存放奇数和偶数
		else
			str2[j++] = num;
		k++;
	}
	binary(str1, 0, i-1);
	binary(str2, 0, j-1);                  //对两个数组都进行归并排序，只是奇数是按逆序递减，偶数是按顺序递增
	for (int k = 0; k < i; k++)
		printf("%d ", str1[k]);
	for (int k = 0; k < j; k++)
		printf("%d ", str2[k]);

	return 0;
}*/