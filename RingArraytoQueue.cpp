//用固定长度的数组实现队列，非追赶思路
/*#include <stdio.h>
#define n 5

int begin = 0;
int end = 0;
int size = 0;

int plus(int num)
{
	return num == n - 1 ? 0 : ++num;           //注意这里是num+1或++num而不是num++,因为是符合语句所以要考虑先自增再使用和先使用在自增的区别
}

void push(int arr[],int val)
{
	if (size != n)
	{
		arr[end] = val;
		end = plus(end);
		size++;
	}
	else if (size == n)
		printf("队列满了，不能再加了!\n");
}

void print(int arr[])
{
	if (size != 0)
	{
		int i;
		for (i = begin; i < n; i++)
			printf("%d ", arr[i]);
		for (i = 0; i < end; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
	else if (size == 0)
		printf("队列为空！\n");
}

int poll(int arr[])
{
	int num = 0;
	if (size != 0)
	{
		num = arr[begin];
		begin = plus(begin);
		size--;
	}
	else if (size == 0)
		printf("队列为空，不能再弹出了！\n");

	return num;
}

int main()
{
	int arr[n] = { 0 };
	push(arr, 1);
	push(arr, 2);
	push(arr, 3);
	push(arr, 4);
	push(arr, 5);
	push(arr, 7);
	print(arr);
	printf("%d\n", poll(arr));
	print(arr);
	push(arr, 6);
	print(arr);

	return 0;
}*/