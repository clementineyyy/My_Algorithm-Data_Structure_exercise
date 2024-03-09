/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int walk(int n,int sign)                //用递归来做，基本上相同步骤的重复操作，把大任务分解成无数个小的子任务
{
	if (n < 0)                          //注意：n==0才是最后一步，n<0时步数用尽，直接返回0，不参与计数
		return 0;
	if (sign == 1)                      //如果上一步走北，那么这一步三个方向都可以走
	{
		if (n == 0)                     //如果n==0,只能走一个方向，所以不递归，直接返回1
			return 1;
		return walk(n - 1, 1) + walk(n - 1, 2) + walk(n - 1, 3);   //递归，当前路径等于三个方向走的路径和
	}
	else if (sign == 2)                 //如果上一步走东，那么这一步只能走两个方向：北和东
	{
		if (n == 0)
			return 1;
		return walk(n - 1, 1) + walk(n - 1, 2);            //递归，当前路径等于两个方向走的路径和
	}
	else if (sign == 3)                //如果上一步走西，那么这一步只能走两个方向：北和西
	{
		if (n == 0)
			return 1;
		return walk(n - 1, 1) + walk(n - 1, 3);        //递归，当前路径等于两个方向走的路径和
	}
	
}

int main()
{
	int n = 0, step = 0, sign = 1;         //sign表示上一步是往哪里走的：1表示北，2表示东，3表示西
	scanf("%d", &n);
	if (n == 1)
		step = 3;
	else 
		step = walk(n, sign);
	printf("%d", step);
	return 0;
}*/