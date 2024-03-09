/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int put(int M, int N)
{
	if (M < 0)                    //这里是小于号而不是小于等于号
		return 0;
	if (M == 1 || N == 1)        //如果只有一个苹果或者只有一个盘子，分法只有一种
		return 1;
	return put(M, N - 1) + put(M - N, N);      //分法由两种情况构成：一种是有空盘子，那么全部苹果M在剩下N-1个盘子里放；或者没有空盘子，先每个盘子放一个苹果，还剩下M-N个苹果，继续在全部的盘子N中放
}

int main()
{
	int t = 0, M = 0, N = 0, res = 0;
	scanf("%d", &t);
	while (t > 0)
	{
		scanf("%d", &M);
		scanf("%d", &N);                //要这样分别输入才可以，否则溢出
		t--;
		res = put(M, N);                //还是基本上相同的操作重复做，用递归
		printf("%d\n", res);
	}

	return 0;
}*/